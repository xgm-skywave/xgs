// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: serverinfo.conf.proto

#include "serverinfo.conf.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace pbconfig {
class ServerInfoDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ServerInfo> _instance;
} _ServerInfo_default_instance_;
}  // namespace pbconfig
static void InitDefaultsServerInfo_serverinfo_2econf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pbconfig::_ServerInfo_default_instance_;
    new (ptr) ::pbconfig::ServerInfo();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pbconfig::ServerInfo::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ServerInfo_serverinfo_2econf_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsServerInfo_serverinfo_2econf_2eproto}, {}};

void InitDefaults_serverinfo_2econf_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_ServerInfo_serverinfo_2econf_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_serverinfo_2econf_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_serverinfo_2econf_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_serverinfo_2econf_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_serverinfo_2econf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::pbconfig::ServerInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::pbconfig::ServerInfo, from_c_http_gamekey_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::pbconfig::ServerInfo)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::pbconfig::_ServerInfo_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_serverinfo_2econf_2eproto = {
  {}, AddDescriptors_serverinfo_2econf_2eproto, "serverinfo.conf.proto", schemas,
  file_default_instances, TableStruct_serverinfo_2econf_2eproto::offsets,
  file_level_metadata_serverinfo_2econf_2eproto, 1, file_level_enum_descriptors_serverinfo_2econf_2eproto, file_level_service_descriptors_serverinfo_2econf_2eproto,
};

const char descriptor_table_protodef_serverinfo_2econf_2eproto[] =
  "\n\025serverinfo.conf.proto\022\010pbconfig\")\n\nSer"
  "verInfo\022\033\n\023from_c_http_gamekey\030\001 \001(\tb\006pr"
  "oto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_serverinfo_2econf_2eproto = {
  false, InitDefaults_serverinfo_2econf_2eproto, 
  descriptor_table_protodef_serverinfo_2econf_2eproto,
  "serverinfo.conf.proto", &assign_descriptors_table_serverinfo_2econf_2eproto, 84,
};

void AddDescriptors_serverinfo_2econf_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_serverinfo_2econf_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_serverinfo_2econf_2eproto = []() { AddDescriptors_serverinfo_2econf_2eproto(); return true; }();
namespace pbconfig {

// ===================================================================

void ServerInfo::InitAsDefaultInstance() {
}
class ServerInfo::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServerInfo::kFromCHttpGamekeyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServerInfo::ServerInfo()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:pbconfig.ServerInfo)
}
ServerInfo::ServerInfo(const ServerInfo& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  from_c_http_gamekey_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.from_c_http_gamekey().size() > 0) {
    from_c_http_gamekey_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.from_c_http_gamekey_);
  }
  // @@protoc_insertion_point(copy_constructor:pbconfig.ServerInfo)
}

void ServerInfo::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ServerInfo_serverinfo_2econf_2eproto.base);
  from_c_http_gamekey_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ServerInfo::~ServerInfo() {
  // @@protoc_insertion_point(destructor:pbconfig.ServerInfo)
  SharedDtor();
}

void ServerInfo::SharedDtor() {
  from_c_http_gamekey_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ServerInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ServerInfo& ServerInfo::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ServerInfo_serverinfo_2econf_2eproto.base);
  return *internal_default_instance();
}


void ServerInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:pbconfig.ServerInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  from_c_http_gamekey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ServerInfo::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ServerInfo*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string from_c_http_gamekey = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("pbconfig.ServerInfo.from_c_http_gamekey");
        object = msg->mutable_from_c_http_gamekey();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ServerInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pbconfig.ServerInfo)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string from_c_http_gamekey = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_from_c_http_gamekey()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->from_c_http_gamekey().data(), static_cast<int>(this->from_c_http_gamekey().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "pbconfig.ServerInfo.from_c_http_gamekey"));
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
  // @@protoc_insertion_point(parse_success:pbconfig.ServerInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pbconfig.ServerInfo)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ServerInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pbconfig.ServerInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string from_c_http_gamekey = 1;
  if (this->from_c_http_gamekey().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->from_c_http_gamekey().data(), static_cast<int>(this->from_c_http_gamekey().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pbconfig.ServerInfo.from_c_http_gamekey");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->from_c_http_gamekey(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pbconfig.ServerInfo)
}

::google::protobuf::uint8* ServerInfo::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:pbconfig.ServerInfo)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string from_c_http_gamekey = 1;
  if (this->from_c_http_gamekey().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->from_c_http_gamekey().data(), static_cast<int>(this->from_c_http_gamekey().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "pbconfig.ServerInfo.from_c_http_gamekey");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->from_c_http_gamekey(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pbconfig.ServerInfo)
  return target;
}

size_t ServerInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pbconfig.ServerInfo)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string from_c_http_gamekey = 1;
  if (this->from_c_http_gamekey().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->from_c_http_gamekey());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServerInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pbconfig.ServerInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const ServerInfo* source =
      ::google::protobuf::DynamicCastToGenerated<ServerInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pbconfig.ServerInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pbconfig.ServerInfo)
    MergeFrom(*source);
  }
}

void ServerInfo::MergeFrom(const ServerInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pbconfig.ServerInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.from_c_http_gamekey().size() > 0) {

    from_c_http_gamekey_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.from_c_http_gamekey_);
  }
}

void ServerInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pbconfig.ServerInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerInfo::CopyFrom(const ServerInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pbconfig.ServerInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerInfo::IsInitialized() const {
  return true;
}

void ServerInfo::Swap(ServerInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServerInfo::InternalSwap(ServerInfo* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  from_c_http_gamekey_.Swap(&other->from_c_http_gamekey_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata ServerInfo::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_serverinfo_2econf_2eproto);
  return ::file_level_metadata_serverinfo_2econf_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pbconfig
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::pbconfig::ServerInfo* Arena::CreateMaybeMessage< ::pbconfig::ServerInfo >(Arena* arena) {
  return Arena::CreateInternal< ::pbconfig::ServerInfo >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
