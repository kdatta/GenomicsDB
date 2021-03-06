/**
 * The MIT License (MIT)
 * Copyright (c) 2016 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of 
 * this software and associated documentation files (the "Software"), to deal in 
 * the Software without restriction, including without limitation the rights to 
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of 
 * the Software, and to permit persons to whom the Software is furnished to do so, 
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all 
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS 
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER 
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN 
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef KNOWN_FIELD_INFO_H
#define KNOWN_FIELD_INFO_H

#include "gt_common.h"
#include "variant_field_data.h"

//Should be identical to the vector m_known_variant_field_names, see file known_field_info.cc
enum KnownVariantFieldsEnum
{
  GVCF_END_IDX = 0,
  GVCF_REF_IDX,
  GVCF_ALT_IDX,
  GVCF_QUAL_IDX,
  GVCF_FILTER_IDX,
  GVCF_BASEQRANKSUM_IDX,
  GVCF_CLIPPINGRANKSUM_IDX,
  GVCF_MQRANKSUM_IDX,
  GVCF_READPOSRANKSUM_IDX,
  GVCF_DP_IDX,
  GVCF_MQ_IDX,
  GVCF_RAW_MQ_IDX,
  GVCF_MQ0_IDX,
  GVCF_DP_FORMAT_IDX,
  GVCF_MIN_DP_IDX,
  GVCF_GQ_IDX,
  GVCF_SB_IDX,
  GVCF_AD_IDX,
  GVCF_PL_IDX,
  GVCF_AF_IDX,
  GVCF_AN_IDX,
  GVCF_AC_IDX,
  GVCF_GT_IDX,
  GVCF_PS_IDX,
  GVCF_PGT_IDX,
  GVCF_PID_IDX,
  GVCF_NUM_KNOWN_FIELDS
};

//All known field names specific to variant data
extern std::vector<std::string> g_known_variant_field_names;
//Mapping from field name to enum idx
extern std::unordered_map<std::string, unsigned> g_known_variant_field_name_to_enum;

/*
 * Class that stores info about some of the known fields
 */
class KnownFieldInfo
{
  friend class KnownFieldInitializer;
  public:
    KnownFieldInfo()
    {
      m_ploidy_required = false;
      m_length_descriptor = UNDEFINED_ATTRIBUTE_IDX_VALUE;
      m_num_elements = UNDEFINED_ATTRIBUTE_IDX_VALUE;
      m_field_creator = 0;
    }
  private:
    bool m_ploidy_required;
    unsigned m_length_descriptor;
    unsigned m_num_elements;
    std::shared_ptr<VariantFieldCreatorBase> m_field_creator;
  public:
    inline bool is_length_allele_dependent() const
    {
      unsigned length_descriptor = m_length_descriptor;
      return (length_descriptor == BCF_VL_A || length_descriptor == BCF_VL_R || length_descriptor == BCF_VL_G);
    }
    inline unsigned get_length_descriptor() const { return m_length_descriptor; }
    inline bool is_length_genotype_dependent() const { return m_length_descriptor == BCF_VL_G; }
    inline bool is_length_only_ALT_alleles_dependent() const { return m_length_descriptor == BCF_VL_A; }
    unsigned get_num_elements_for_known_field_enum(unsigned num_ALT_alleles, unsigned ploidy) const;
    inline bool ploidy_required_for_known_field_enum() const { return m_ploidy_required; }
    /*
     * Static functions that access the global vector specified below to get info
     */
    inline static bool is_length_genotype_dependent(unsigned length_descriptor) { return length_descriptor == BCF_VL_G; }
    inline static bool is_length_only_ALT_alleles_dependent(unsigned length_descriptor) { return length_descriptor == BCF_VL_A; }
    /*
     * Given a field name, checks for m_known_variant_field_name_to_enum to see if valid entry exists.
     * If yes, fills known_field_enum and returns true
     * Else returns false. Leaves known_field_enum untouched.
     */
    static bool get_known_field_enum_for_name(const std::string& field_name, unsigned& known_field_enum);
    /*
     * Get name for known field enum
     */
    static std::string get_known_field_name_for_enum(unsigned known_field_enum);
    /*
     * Check whether the known field requires a special creator
     */
    static bool requires_special_creator(unsigned enumIdx);
    static const std::shared_ptr<VariantFieldCreatorBase>& get_field_creator(unsigned enumIdx);
    /*
     * Function that determines whether length of the field is dependent on the #alleles 
     */
    static bool is_length_allele_dependent(unsigned enumIdx);
    /*
     * Check whether the known field requires ploidy - e.g. GT, GQ etc
     */
    static bool ploidy_required_for_known_field_enum(unsigned enumIdx);
    /*
     * Functions that determine number of elements for known fields
     */

    static unsigned get_num_elements_for_known_field_enum(unsigned known_field_enum,
        unsigned num_ALT_alleles, unsigned ploidy);
    /*
     * Returns BCF length descriptor, BCF_VL_*
     */
    static unsigned get_length_descriptor_for_known_field_enum(unsigned known_field_enum);
};
/*
 * Vector that stores information about the known fields - length, Factory methods etc
 */
extern std::vector<KnownFieldInfo> g_known_field_enum_to_info;
/*
 * Class whose sole purpose is to initialize KnownFieldInfo etc
 * Only a single instance of this class should exist in the whole program - the global variable listed below
 * The constructor initializes all KnownFieldInfo
 */
class KnownFieldInitializer
{
  public:
    KnownFieldInitializer();
  private:
    void initialize_length_descriptor(unsigned idx) const;
};
extern KnownFieldInitializer g_known_field_initializer;

class VariantUtils
{
  public:
    static bool contains_deletion(const std::string& REF, const std::vector<std::string>& ALT_vec);
    inline static bool is_deletion(const std::string& REF, const std::string& alt_allele)
    {
      auto REF_length = REF.length();
      return (REF_length > 1u) && !IS_NON_REF_ALLELE(alt_allele) && (alt_allele.length() < REF_length);
    }
    inline static bool is_symbolic_allele(const std::string& allele)
    {
      return IS_NON_REF_ALLELE(allele)
        || (allele == g_vcf_SPANNING_DELETION)
        || (
            allele.length() > 0u &&
            (
             (allele[0] == '<' && allele[allele.length()-1u] == '>') || 
             (allele.find_first_of('[') != std::string::npos || allele.find_first_of(']') != std::string::npos)
            ) 
           );
    }
};

#endif
