// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Basic.proto

#include "Basic.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_Basic_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_Basic_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Basic_Inner;
}  // namespace protobuf_Basic_2eproto
namespace Test {
class Basic_InnerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Basic_Inner>
      _instance;
} _Basic_Inner_default_instance_;
class BasicDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Basic>
      _instance;
} _Basic_default_instance_;
}  // namespace Test
namespace protobuf_Basic_2eproto {
static void InitDefaultsBasic_Inner() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Test::_Basic_Inner_default_instance_;
    new (ptr) ::Test::Basic_Inner();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Test::Basic_Inner::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Basic_Inner =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsBasic_Inner}, {}};

static void InitDefaultsBasic() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Test::_Basic_default_instance_;
    new (ptr) ::Test::Basic();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Test::Basic::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Basic =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsBasic}, {
      &protobuf_Basic_2eproto::scc_info_Basic_Inner.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Basic_Inner.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Basic.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test::Basic_Inner, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test::Basic_Inner, ival_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test::Basic, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test::Basic, item1_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test::Basic, item2_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test::Basic, repeated_inner_message_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test::Basic, single_inner_message_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Test::Basic, item3_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Test::Basic_Inner)},
  { 6, -1, sizeof(::Test::Basic)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::Test::_Basic_Inner_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::Test::_Basic_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "Basic.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013Basic.proto\022\004Test\"\257\001\n\005Basic\022\r\n\005item1\030\001"
      " \001(\t\022\r\n\005item2\030\002 \001(\005\0221\n\026repeated_inner_me"
      "ssage\030\003 \003(\0132\021.Test.Basic.Inner\022/\n\024single"
      "_inner_message\030\004 \001(\0132\021.Test.Basic.Inner\022"
      "\r\n\005item3\030\005 \001(\001\032\025\n\005Inner\022\014\n\004ival\030\001 \001(\003b\006p"
      "roto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 205);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Basic.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Basic_2eproto
namespace Test {

// ===================================================================

void Basic_Inner::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Basic_Inner::kIvalFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Basic_Inner::Basic_Inner()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_Basic_2eproto::scc_info_Basic_Inner.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Test.Basic.Inner)
}
Basic_Inner::Basic_Inner(const Basic_Inner& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ival_ = from.ival_;
  // @@protoc_insertion_point(copy_constructor:Test.Basic.Inner)
}

void Basic_Inner::SharedCtor() {
  ival_ = GOOGLE_LONGLONG(0);
}

Basic_Inner::~Basic_Inner() {
  // @@protoc_insertion_point(destructor:Test.Basic.Inner)
  SharedDtor();
}

void Basic_Inner::SharedDtor() {
}

void Basic_Inner::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Basic_Inner::descriptor() {
  ::protobuf_Basic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Basic_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Basic_Inner& Basic_Inner::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_Basic_2eproto::scc_info_Basic_Inner.base);
  return *internal_default_instance();
}


void Basic_Inner::Clear() {
// @@protoc_insertion_point(message_clear_start:Test.Basic.Inner)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ival_ = GOOGLE_LONGLONG(0);
  _internal_metadata_.Clear();
}

bool Basic_Inner::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Test.Basic.Inner)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 ival = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &ival_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Test.Basic.Inner)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Test.Basic.Inner)
  return false;
#undef DO_
}

void Basic_Inner::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Test.Basic.Inner)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 ival = 1;
  if (this->ival() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->ival(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Test.Basic.Inner)
}

::google::protobuf::uint8* Basic_Inner::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Test.Basic.Inner)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 ival = 1;
  if (this->ival() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->ival(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Test.Basic.Inner)
  return target;
}

size_t Basic_Inner::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Test.Basic.Inner)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // int64 ival = 1;
  if (this->ival() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->ival());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Basic_Inner::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Test.Basic.Inner)
  GOOGLE_DCHECK_NE(&from, this);
  const Basic_Inner* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Basic_Inner>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Test.Basic.Inner)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Test.Basic.Inner)
    MergeFrom(*source);
  }
}

void Basic_Inner::MergeFrom(const Basic_Inner& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Test.Basic.Inner)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.ival() != 0) {
    set_ival(from.ival());
  }
}

void Basic_Inner::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Test.Basic.Inner)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Basic_Inner::CopyFrom(const Basic_Inner& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Test.Basic.Inner)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Basic_Inner::IsInitialized() const {
  return true;
}

void Basic_Inner::Swap(Basic_Inner* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Basic_Inner::InternalSwap(Basic_Inner* other) {
  using std::swap;
  swap(ival_, other->ival_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Basic_Inner::GetMetadata() const {
  protobuf_Basic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Basic_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Basic::InitAsDefaultInstance() {
  ::Test::_Basic_default_instance_._instance.get_mutable()->single_inner_message_ = const_cast< ::Test::Basic_Inner*>(
      ::Test::Basic_Inner::internal_default_instance());
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Basic::kItem1FieldNumber;
const int Basic::kItem2FieldNumber;
const int Basic::kRepeatedInnerMessageFieldNumber;
const int Basic::kSingleInnerMessageFieldNumber;
const int Basic::kItem3FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Basic::Basic()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_Basic_2eproto::scc_info_Basic.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Test.Basic)
}
Basic::Basic(const Basic& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      repeated_inner_message_(from.repeated_inner_message_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  item1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.item1().size() > 0) {
    item1_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item1_);
  }
  if (from.has_single_inner_message()) {
    single_inner_message_ = new ::Test::Basic_Inner(*from.single_inner_message_);
  } else {
    single_inner_message_ = NULL;
  }
  ::memcpy(&item3_, &from.item3_,
    static_cast<size_t>(reinterpret_cast<char*>(&item2_) -
    reinterpret_cast<char*>(&item3_)) + sizeof(item2_));
  // @@protoc_insertion_point(copy_constructor:Test.Basic)
}

void Basic::SharedCtor() {
  item1_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&single_inner_message_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&item2_) -
      reinterpret_cast<char*>(&single_inner_message_)) + sizeof(item2_));
}

Basic::~Basic() {
  // @@protoc_insertion_point(destructor:Test.Basic)
  SharedDtor();
}

void Basic::SharedDtor() {
  item1_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete single_inner_message_;
}

void Basic::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Basic::descriptor() {
  ::protobuf_Basic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Basic_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Basic& Basic::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_Basic_2eproto::scc_info_Basic.base);
  return *internal_default_instance();
}


void Basic::Clear() {
// @@protoc_insertion_point(message_clear_start:Test.Basic)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  repeated_inner_message_.Clear();
  item1_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && single_inner_message_ != NULL) {
    delete single_inner_message_;
  }
  single_inner_message_ = NULL;
  ::memset(&item3_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&item2_) -
      reinterpret_cast<char*>(&item3_)) + sizeof(item2_));
  _internal_metadata_.Clear();
}

bool Basic::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Test.Basic)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string item1 = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_item1()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->item1().data(), static_cast<int>(this->item1().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Test.Basic.item1"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 item2 = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &item2_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .Test.Basic.Inner repeated_inner_message = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_repeated_inner_message()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .Test.Basic.Inner single_inner_message = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_single_inner_message()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double item3 = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &item3_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Test.Basic)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Test.Basic)
  return false;
#undef DO_
}

void Basic::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Test.Basic)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string item1 = 1;
  if (this->item1().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->item1().data(), static_cast<int>(this->item1().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Test.Basic.item1");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->item1(), output);
  }

  // int32 item2 = 2;
  if (this->item2() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->item2(), output);
  }

  // repeated .Test.Basic.Inner repeated_inner_message = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->repeated_inner_message_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->repeated_inner_message(static_cast<int>(i)),
      output);
  }

  // .Test.Basic.Inner single_inner_message = 4;
  if (this->has_single_inner_message()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_single_inner_message(), output);
  }

  // double item3 = 5;
  if (this->item3() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->item3(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Test.Basic)
}

::google::protobuf::uint8* Basic::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Test.Basic)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string item1 = 1;
  if (this->item1().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->item1().data(), static_cast<int>(this->item1().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Test.Basic.item1");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->item1(), target);
  }

  // int32 item2 = 2;
  if (this->item2() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->item2(), target);
  }

  // repeated .Test.Basic.Inner repeated_inner_message = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->repeated_inner_message_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->repeated_inner_message(static_cast<int>(i)), deterministic, target);
  }

  // .Test.Basic.Inner single_inner_message = 4;
  if (this->has_single_inner_message()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_single_inner_message(), deterministic, target);
  }

  // double item3 = 5;
  if (this->item3() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->item3(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Test.Basic)
  return target;
}

size_t Basic::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Test.Basic)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .Test.Basic.Inner repeated_inner_message = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->repeated_inner_message_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->repeated_inner_message(static_cast<int>(i)));
    }
  }

  // string item1 = 1;
  if (this->item1().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->item1());
  }

  // .Test.Basic.Inner single_inner_message = 4;
  if (this->has_single_inner_message()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *single_inner_message_);
  }

  // double item3 = 5;
  if (this->item3() != 0) {
    total_size += 1 + 8;
  }

  // int32 item2 = 2;
  if (this->item2() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->item2());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Basic::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Test.Basic)
  GOOGLE_DCHECK_NE(&from, this);
  const Basic* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Basic>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Test.Basic)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Test.Basic)
    MergeFrom(*source);
  }
}

void Basic::MergeFrom(const Basic& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Test.Basic)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  repeated_inner_message_.MergeFrom(from.repeated_inner_message_);
  if (from.item1().size() > 0) {

    item1_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.item1_);
  }
  if (from.has_single_inner_message()) {
    mutable_single_inner_message()->::Test::Basic_Inner::MergeFrom(from.single_inner_message());
  }
  if (from.item3() != 0) {
    set_item3(from.item3());
  }
  if (from.item2() != 0) {
    set_item2(from.item2());
  }
}

void Basic::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Test.Basic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Basic::CopyFrom(const Basic& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Test.Basic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Basic::IsInitialized() const {
  return true;
}

void Basic::Swap(Basic* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Basic::InternalSwap(Basic* other) {
  using std::swap;
  CastToBase(&repeated_inner_message_)->InternalSwap(CastToBase(&other->repeated_inner_message_));
  item1_.Swap(&other->item1_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(single_inner_message_, other->single_inner_message_);
  swap(item3_, other->item3_);
  swap(item2_, other->item2_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Basic::GetMetadata() const {
  protobuf_Basic_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Basic_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Test
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Test::Basic_Inner* Arena::CreateMaybeMessage< ::Test::Basic_Inner >(Arena* arena) {
  return Arena::CreateInternal< ::Test::Basic_Inner >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Test::Basic* Arena::CreateMaybeMessage< ::Test::Basic >(Arena* arena) {
  return Arena::CreateInternal< ::Test::Basic >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)