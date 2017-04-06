// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: genomicsdb_export_config.proto

#ifndef PROTOBUF_genomicsdb_5fexport_5fconfig_2eproto__INCLUDED
#define PROTOBUF_genomicsdb_5fexport_5fconfig_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_genomicsdb_5fexport_5fconfig_2eproto();
void protobuf_AssignDesc_genomicsdb_5fexport_5fconfig_2eproto();
void protobuf_ShutdownFile_genomicsdb_5fexport_5fconfig_2eproto();

class ColumnRange;
class ColumnRangeList;
class ExportConfiguration;

// ===================================================================

class ColumnRange : public ::google::protobuf::Message {
 public:
  ColumnRange();
  virtual ~ColumnRange();

  ColumnRange(const ColumnRange& from);

  inline ColumnRange& operator=(const ColumnRange& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ColumnRange& default_instance();

  void Swap(ColumnRange* other);

  // implements Message ----------------------------------------------

  inline ColumnRange* New() const { return New(NULL); }

  ColumnRange* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ColumnRange& from);
  void MergeFrom(const ColumnRange& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ColumnRange* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 low = 1;
  bool has_low() const;
  void clear_low();
  static const int kLowFieldNumber = 1;
  ::google::protobuf::int64 low() const;
  void set_low(::google::protobuf::int64 value);

  // required int64 high = 2;
  bool has_high() const;
  void clear_high();
  static const int kHighFieldNumber = 2;
  ::google::protobuf::int64 high() const;
  void set_high(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:ColumnRange)
 private:
  inline void set_has_low();
  inline void clear_has_low();
  inline void set_has_high();
  inline void clear_has_high();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 low_;
  ::google::protobuf::int64 high_;
  friend void  protobuf_AddDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_AssignDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_genomicsdb_5fexport_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static ColumnRange* default_instance_;
};
// -------------------------------------------------------------------

class ColumnRangeList : public ::google::protobuf::Message {
 public:
  ColumnRangeList();
  virtual ~ColumnRangeList();

  ColumnRangeList(const ColumnRangeList& from);

  inline ColumnRangeList& operator=(const ColumnRangeList& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ColumnRangeList& default_instance();

  void Swap(ColumnRangeList* other);

  // implements Message ----------------------------------------------

  inline ColumnRangeList* New() const { return New(NULL); }

  ColumnRangeList* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ColumnRangeList& from);
  void MergeFrom(const ColumnRangeList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ColumnRangeList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ColumnRange range_list = 1;
  int range_list_size() const;
  void clear_range_list();
  static const int kRangeListFieldNumber = 1;
  const ::ColumnRange& range_list(int index) const;
  ::ColumnRange* mutable_range_list(int index);
  ::ColumnRange* add_range_list();
  ::google::protobuf::RepeatedPtrField< ::ColumnRange >*
      mutable_range_list();
  const ::google::protobuf::RepeatedPtrField< ::ColumnRange >&
      range_list() const;

  // @@protoc_insertion_point(class_scope:ColumnRangeList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ColumnRange > range_list_;
  friend void  protobuf_AddDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_AssignDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_genomicsdb_5fexport_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static ColumnRangeList* default_instance_;
};
// -------------------------------------------------------------------

class ExportConfiguration : public ::google::protobuf::Message {
 public:
  ExportConfiguration();
  virtual ~ExportConfiguration();

  ExportConfiguration(const ExportConfiguration& from);

  inline ExportConfiguration& operator=(const ExportConfiguration& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ExportConfiguration& default_instance();

  void Swap(ExportConfiguration* other);

  // implements Message ----------------------------------------------

  inline ExportConfiguration* New() const { return New(NULL); }

  ExportConfiguration* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExportConfiguration& from);
  void MergeFrom(const ExportConfiguration& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ExportConfiguration* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string tiledb_workspace = 1;
  bool has_tiledb_workspace() const;
  void clear_tiledb_workspace();
  static const int kTiledbWorkspaceFieldNumber = 1;
  const ::std::string& tiledb_workspace() const;
  void set_tiledb_workspace(const ::std::string& value);
  void set_tiledb_workspace(const char* value);
  void set_tiledb_workspace(const char* value, size_t size);
  ::std::string* mutable_tiledb_workspace();
  ::std::string* release_tiledb_workspace();
  void set_allocated_tiledb_workspace(::std::string* tiledb_workspace);

  // required string tiledb_array_name = 2;
  bool has_tiledb_array_name() const;
  void clear_tiledb_array_name();
  static const int kTiledbArrayNameFieldNumber = 2;
  const ::std::string& tiledb_array_name() const;
  void set_tiledb_array_name(const ::std::string& value);
  void set_tiledb_array_name(const char* value);
  void set_tiledb_array_name(const char* value, size_t size);
  ::std::string* mutable_tiledb_array_name();
  ::std::string* release_tiledb_array_name();
  void set_allocated_tiledb_array_name(::std::string* tiledb_array_name);

  // required string reference_genome = 3;
  bool has_reference_genome() const;
  void clear_reference_genome();
  static const int kReferenceGenomeFieldNumber = 3;
  const ::std::string& reference_genome() const;
  void set_reference_genome(const ::std::string& value);
  void set_reference_genome(const char* value);
  void set_reference_genome(const char* value, size_t size);
  ::std::string* mutable_reference_genome();
  ::std::string* release_reference_genome();
  void set_allocated_reference_genome(::std::string* reference_genome);

  // repeated .ColumnRangeList query_column_ranges = 4;
  int query_column_ranges_size() const;
  void clear_query_column_ranges();
  static const int kQueryColumnRangesFieldNumber = 4;
  const ::ColumnRangeList& query_column_ranges(int index) const;
  ::ColumnRangeList* mutable_query_column_ranges(int index);
  ::ColumnRangeList* add_query_column_ranges();
  ::google::protobuf::RepeatedPtrField< ::ColumnRangeList >*
      mutable_query_column_ranges();
  const ::google::protobuf::RepeatedPtrField< ::ColumnRangeList >&
      query_column_ranges() const;

  // repeated string attributes = 5;
  int attributes_size() const;
  void clear_attributes();
  static const int kAttributesFieldNumber = 5;
  const ::std::string& attributes(int index) const;
  ::std::string* mutable_attributes(int index);
  void set_attributes(int index, const ::std::string& value);
  void set_attributes(int index, const char* value);
  void set_attributes(int index, const char* value, size_t size);
  ::std::string* add_attributes();
  void add_attributes(const ::std::string& value);
  void add_attributes(const char* value);
  void add_attributes(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& attributes() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_attributes();

  // optional string vid_mapping_file = 6;
  bool has_vid_mapping_file() const;
  void clear_vid_mapping_file();
  static const int kVidMappingFileFieldNumber = 6;
  const ::std::string& vid_mapping_file() const;
  void set_vid_mapping_file(const ::std::string& value);
  void set_vid_mapping_file(const char* value);
  void set_vid_mapping_file(const char* value, size_t size);
  ::std::string* mutable_vid_mapping_file();
  ::std::string* release_vid_mapping_file();
  void set_allocated_vid_mapping_file(::std::string* vid_mapping_file);

  // optional string callset_mapping_file = 7;
  bool has_callset_mapping_file() const;
  void clear_callset_mapping_file();
  static const int kCallsetMappingFileFieldNumber = 7;
  const ::std::string& callset_mapping_file() const;
  void set_callset_mapping_file(const ::std::string& value);
  void set_callset_mapping_file(const char* value);
  void set_callset_mapping_file(const char* value, size_t size);
  ::std::string* mutable_callset_mapping_file();
  ::std::string* release_callset_mapping_file();
  void set_allocated_callset_mapping_file(::std::string* callset_mapping_file);

  // @@protoc_insertion_point(class_scope:ExportConfiguration)
 private:
  inline void set_has_tiledb_workspace();
  inline void clear_has_tiledb_workspace();
  inline void set_has_tiledb_array_name();
  inline void clear_has_tiledb_array_name();
  inline void set_has_reference_genome();
  inline void clear_has_reference_genome();
  inline void set_has_vid_mapping_file();
  inline void clear_has_vid_mapping_file();
  inline void set_has_callset_mapping_file();
  inline void clear_has_callset_mapping_file();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr tiledb_workspace_;
  ::google::protobuf::internal::ArenaStringPtr tiledb_array_name_;
  ::google::protobuf::internal::ArenaStringPtr reference_genome_;
  ::google::protobuf::RepeatedPtrField< ::ColumnRangeList > query_column_ranges_;
  ::google::protobuf::RepeatedPtrField< ::std::string> attributes_;
  ::google::protobuf::internal::ArenaStringPtr vid_mapping_file_;
  ::google::protobuf::internal::ArenaStringPtr callset_mapping_file_;
  friend void  protobuf_AddDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_AssignDesc_genomicsdb_5fexport_5fconfig_2eproto();
  friend void protobuf_ShutdownFile_genomicsdb_5fexport_5fconfig_2eproto();

  void InitAsDefaultInstance();
  static ExportConfiguration* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ColumnRange

// required int64 low = 1;
inline bool ColumnRange::has_low() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ColumnRange::set_has_low() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ColumnRange::clear_has_low() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ColumnRange::clear_low() {
  low_ = GOOGLE_LONGLONG(0);
  clear_has_low();
}
inline ::google::protobuf::int64 ColumnRange::low() const {
  // @@protoc_insertion_point(field_get:ColumnRange.low)
  return low_;
}
inline void ColumnRange::set_low(::google::protobuf::int64 value) {
  set_has_low();
  low_ = value;
  // @@protoc_insertion_point(field_set:ColumnRange.low)
}

// required int64 high = 2;
inline bool ColumnRange::has_high() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ColumnRange::set_has_high() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ColumnRange::clear_has_high() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ColumnRange::clear_high() {
  high_ = GOOGLE_LONGLONG(0);
  clear_has_high();
}
inline ::google::protobuf::int64 ColumnRange::high() const {
  // @@protoc_insertion_point(field_get:ColumnRange.high)
  return high_;
}
inline void ColumnRange::set_high(::google::protobuf::int64 value) {
  set_has_high();
  high_ = value;
  // @@protoc_insertion_point(field_set:ColumnRange.high)
}

// -------------------------------------------------------------------

// ColumnRangeList

// repeated .ColumnRange range_list = 1;
inline int ColumnRangeList::range_list_size() const {
  return range_list_.size();
}
inline void ColumnRangeList::clear_range_list() {
  range_list_.Clear();
}
inline const ::ColumnRange& ColumnRangeList::range_list(int index) const {
  // @@protoc_insertion_point(field_get:ColumnRangeList.range_list)
  return range_list_.Get(index);
}
inline ::ColumnRange* ColumnRangeList::mutable_range_list(int index) {
  // @@protoc_insertion_point(field_mutable:ColumnRangeList.range_list)
  return range_list_.Mutable(index);
}
inline ::ColumnRange* ColumnRangeList::add_range_list() {
  // @@protoc_insertion_point(field_add:ColumnRangeList.range_list)
  return range_list_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ColumnRange >*
ColumnRangeList::mutable_range_list() {
  // @@protoc_insertion_point(field_mutable_list:ColumnRangeList.range_list)
  return &range_list_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ColumnRange >&
ColumnRangeList::range_list() const {
  // @@protoc_insertion_point(field_list:ColumnRangeList.range_list)
  return range_list_;
}

// -------------------------------------------------------------------

// ExportConfiguration

// required string tiledb_workspace = 1;
inline bool ExportConfiguration::has_tiledb_workspace() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ExportConfiguration::set_has_tiledb_workspace() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ExportConfiguration::clear_has_tiledb_workspace() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ExportConfiguration::clear_tiledb_workspace() {
  tiledb_workspace_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_tiledb_workspace();
}
inline const ::std::string& ExportConfiguration::tiledb_workspace() const {
  // @@protoc_insertion_point(field_get:ExportConfiguration.tiledb_workspace)
  return tiledb_workspace_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExportConfiguration::set_tiledb_workspace(const ::std::string& value) {
  set_has_tiledb_workspace();
  tiledb_workspace_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ExportConfiguration.tiledb_workspace)
}
inline void ExportConfiguration::set_tiledb_workspace(const char* value) {
  set_has_tiledb_workspace();
  tiledb_workspace_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ExportConfiguration.tiledb_workspace)
}
inline void ExportConfiguration::set_tiledb_workspace(const char* value, size_t size) {
  set_has_tiledb_workspace();
  tiledb_workspace_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ExportConfiguration.tiledb_workspace)
}
inline ::std::string* ExportConfiguration::mutable_tiledb_workspace() {
  set_has_tiledb_workspace();
  // @@protoc_insertion_point(field_mutable:ExportConfiguration.tiledb_workspace)
  return tiledb_workspace_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ExportConfiguration::release_tiledb_workspace() {
  clear_has_tiledb_workspace();
  return tiledb_workspace_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExportConfiguration::set_allocated_tiledb_workspace(::std::string* tiledb_workspace) {
  if (tiledb_workspace != NULL) {
    set_has_tiledb_workspace();
  } else {
    clear_has_tiledb_workspace();
  }
  tiledb_workspace_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tiledb_workspace);
  // @@protoc_insertion_point(field_set_allocated:ExportConfiguration.tiledb_workspace)
}

// required string tiledb_array_name = 2;
inline bool ExportConfiguration::has_tiledb_array_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ExportConfiguration::set_has_tiledb_array_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ExportConfiguration::clear_has_tiledb_array_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ExportConfiguration::clear_tiledb_array_name() {
  tiledb_array_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_tiledb_array_name();
}
inline const ::std::string& ExportConfiguration::tiledb_array_name() const {
  // @@protoc_insertion_point(field_get:ExportConfiguration.tiledb_array_name)
  return tiledb_array_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExportConfiguration::set_tiledb_array_name(const ::std::string& value) {
  set_has_tiledb_array_name();
  tiledb_array_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ExportConfiguration.tiledb_array_name)
}
inline void ExportConfiguration::set_tiledb_array_name(const char* value) {
  set_has_tiledb_array_name();
  tiledb_array_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ExportConfiguration.tiledb_array_name)
}
inline void ExportConfiguration::set_tiledb_array_name(const char* value, size_t size) {
  set_has_tiledb_array_name();
  tiledb_array_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ExportConfiguration.tiledb_array_name)
}
inline ::std::string* ExportConfiguration::mutable_tiledb_array_name() {
  set_has_tiledb_array_name();
  // @@protoc_insertion_point(field_mutable:ExportConfiguration.tiledb_array_name)
  return tiledb_array_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ExportConfiguration::release_tiledb_array_name() {
  clear_has_tiledb_array_name();
  return tiledb_array_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExportConfiguration::set_allocated_tiledb_array_name(::std::string* tiledb_array_name) {
  if (tiledb_array_name != NULL) {
    set_has_tiledb_array_name();
  } else {
    clear_has_tiledb_array_name();
  }
  tiledb_array_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), tiledb_array_name);
  // @@protoc_insertion_point(field_set_allocated:ExportConfiguration.tiledb_array_name)
}

// required string reference_genome = 3;
inline bool ExportConfiguration::has_reference_genome() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ExportConfiguration::set_has_reference_genome() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ExportConfiguration::clear_has_reference_genome() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ExportConfiguration::clear_reference_genome() {
  reference_genome_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_reference_genome();
}
inline const ::std::string& ExportConfiguration::reference_genome() const {
  // @@protoc_insertion_point(field_get:ExportConfiguration.reference_genome)
  return reference_genome_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExportConfiguration::set_reference_genome(const ::std::string& value) {
  set_has_reference_genome();
  reference_genome_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ExportConfiguration.reference_genome)
}
inline void ExportConfiguration::set_reference_genome(const char* value) {
  set_has_reference_genome();
  reference_genome_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ExportConfiguration.reference_genome)
}
inline void ExportConfiguration::set_reference_genome(const char* value, size_t size) {
  set_has_reference_genome();
  reference_genome_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ExportConfiguration.reference_genome)
}
inline ::std::string* ExportConfiguration::mutable_reference_genome() {
  set_has_reference_genome();
  // @@protoc_insertion_point(field_mutable:ExportConfiguration.reference_genome)
  return reference_genome_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ExportConfiguration::release_reference_genome() {
  clear_has_reference_genome();
  return reference_genome_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExportConfiguration::set_allocated_reference_genome(::std::string* reference_genome) {
  if (reference_genome != NULL) {
    set_has_reference_genome();
  } else {
    clear_has_reference_genome();
  }
  reference_genome_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reference_genome);
  // @@protoc_insertion_point(field_set_allocated:ExportConfiguration.reference_genome)
}

// repeated .ColumnRangeList query_column_ranges = 4;
inline int ExportConfiguration::query_column_ranges_size() const {
  return query_column_ranges_.size();
}
inline void ExportConfiguration::clear_query_column_ranges() {
  query_column_ranges_.Clear();
}
inline const ::ColumnRangeList& ExportConfiguration::query_column_ranges(int index) const {
  // @@protoc_insertion_point(field_get:ExportConfiguration.query_column_ranges)
  return query_column_ranges_.Get(index);
}
inline ::ColumnRangeList* ExportConfiguration::mutable_query_column_ranges(int index) {
  // @@protoc_insertion_point(field_mutable:ExportConfiguration.query_column_ranges)
  return query_column_ranges_.Mutable(index);
}
inline ::ColumnRangeList* ExportConfiguration::add_query_column_ranges() {
  // @@protoc_insertion_point(field_add:ExportConfiguration.query_column_ranges)
  return query_column_ranges_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ColumnRangeList >*
ExportConfiguration::mutable_query_column_ranges() {
  // @@protoc_insertion_point(field_mutable_list:ExportConfiguration.query_column_ranges)
  return &query_column_ranges_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ColumnRangeList >&
ExportConfiguration::query_column_ranges() const {
  // @@protoc_insertion_point(field_list:ExportConfiguration.query_column_ranges)
  return query_column_ranges_;
}

// repeated string attributes = 5;
inline int ExportConfiguration::attributes_size() const {
  return attributes_.size();
}
inline void ExportConfiguration::clear_attributes() {
  attributes_.Clear();
}
inline const ::std::string& ExportConfiguration::attributes(int index) const {
  // @@protoc_insertion_point(field_get:ExportConfiguration.attributes)
  return attributes_.Get(index);
}
inline ::std::string* ExportConfiguration::mutable_attributes(int index) {
  // @@protoc_insertion_point(field_mutable:ExportConfiguration.attributes)
  return attributes_.Mutable(index);
}
inline void ExportConfiguration::set_attributes(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:ExportConfiguration.attributes)
  attributes_.Mutable(index)->assign(value);
}
inline void ExportConfiguration::set_attributes(int index, const char* value) {
  attributes_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ExportConfiguration.attributes)
}
inline void ExportConfiguration::set_attributes(int index, const char* value, size_t size) {
  attributes_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ExportConfiguration.attributes)
}
inline ::std::string* ExportConfiguration::add_attributes() {
  return attributes_.Add();
}
inline void ExportConfiguration::add_attributes(const ::std::string& value) {
  attributes_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ExportConfiguration.attributes)
}
inline void ExportConfiguration::add_attributes(const char* value) {
  attributes_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ExportConfiguration.attributes)
}
inline void ExportConfiguration::add_attributes(const char* value, size_t size) {
  attributes_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ExportConfiguration.attributes)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
ExportConfiguration::attributes() const {
  // @@protoc_insertion_point(field_list:ExportConfiguration.attributes)
  return attributes_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
ExportConfiguration::mutable_attributes() {
  // @@protoc_insertion_point(field_mutable_list:ExportConfiguration.attributes)
  return &attributes_;
}

// optional string vid_mapping_file = 6;
inline bool ExportConfiguration::has_vid_mapping_file() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ExportConfiguration::set_has_vid_mapping_file() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ExportConfiguration::clear_has_vid_mapping_file() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ExportConfiguration::clear_vid_mapping_file() {
  vid_mapping_file_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_vid_mapping_file();
}
inline const ::std::string& ExportConfiguration::vid_mapping_file() const {
  // @@protoc_insertion_point(field_get:ExportConfiguration.vid_mapping_file)
  return vid_mapping_file_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExportConfiguration::set_vid_mapping_file(const ::std::string& value) {
  set_has_vid_mapping_file();
  vid_mapping_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ExportConfiguration.vid_mapping_file)
}
inline void ExportConfiguration::set_vid_mapping_file(const char* value) {
  set_has_vid_mapping_file();
  vid_mapping_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ExportConfiguration.vid_mapping_file)
}
inline void ExportConfiguration::set_vid_mapping_file(const char* value, size_t size) {
  set_has_vid_mapping_file();
  vid_mapping_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ExportConfiguration.vid_mapping_file)
}
inline ::std::string* ExportConfiguration::mutable_vid_mapping_file() {
  set_has_vid_mapping_file();
  // @@protoc_insertion_point(field_mutable:ExportConfiguration.vid_mapping_file)
  return vid_mapping_file_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ExportConfiguration::release_vid_mapping_file() {
  clear_has_vid_mapping_file();
  return vid_mapping_file_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExportConfiguration::set_allocated_vid_mapping_file(::std::string* vid_mapping_file) {
  if (vid_mapping_file != NULL) {
    set_has_vid_mapping_file();
  } else {
    clear_has_vid_mapping_file();
  }
  vid_mapping_file_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), vid_mapping_file);
  // @@protoc_insertion_point(field_set_allocated:ExportConfiguration.vid_mapping_file)
}

// optional string callset_mapping_file = 7;
inline bool ExportConfiguration::has_callset_mapping_file() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ExportConfiguration::set_has_callset_mapping_file() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ExportConfiguration::clear_has_callset_mapping_file() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ExportConfiguration::clear_callset_mapping_file() {
  callset_mapping_file_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_callset_mapping_file();
}
inline const ::std::string& ExportConfiguration::callset_mapping_file() const {
  // @@protoc_insertion_point(field_get:ExportConfiguration.callset_mapping_file)
  return callset_mapping_file_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExportConfiguration::set_callset_mapping_file(const ::std::string& value) {
  set_has_callset_mapping_file();
  callset_mapping_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ExportConfiguration.callset_mapping_file)
}
inline void ExportConfiguration::set_callset_mapping_file(const char* value) {
  set_has_callset_mapping_file();
  callset_mapping_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ExportConfiguration.callset_mapping_file)
}
inline void ExportConfiguration::set_callset_mapping_file(const char* value, size_t size) {
  set_has_callset_mapping_file();
  callset_mapping_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ExportConfiguration.callset_mapping_file)
}
inline ::std::string* ExportConfiguration::mutable_callset_mapping_file() {
  set_has_callset_mapping_file();
  // @@protoc_insertion_point(field_mutable:ExportConfiguration.callset_mapping_file)
  return callset_mapping_file_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ExportConfiguration::release_callset_mapping_file() {
  clear_has_callset_mapping_file();
  return callset_mapping_file_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ExportConfiguration::set_allocated_callset_mapping_file(::std::string* callset_mapping_file) {
  if (callset_mapping_file != NULL) {
    set_has_callset_mapping_file();
  } else {
    clear_has_callset_mapping_file();
  }
  callset_mapping_file_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), callset_mapping_file);
  // @@protoc_insertion_point(field_set_allocated:ExportConfiguration.callset_mapping_file)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_genomicsdb_5fexport_5fconfig_2eproto__INCLUDED
