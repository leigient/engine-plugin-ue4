// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test_dedicated_server_rpc_messages.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "test_dedicated_server_rpc_messages.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* EchoDedicatedServerRpcMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EchoDedicatedServerRpcMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto() {
  protobuf_AddDesc_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "test_dedicated_server_rpc_messages.proto");
  GOOGLE_CHECK(file != NULL);
  EchoDedicatedServerRpcMessage_descriptor_ = file->message_type(0);
  static const int EchoDedicatedServerRpcMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoDedicatedServerRpcMessage, message_),
  };
  EchoDedicatedServerRpcMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      EchoDedicatedServerRpcMessage_descriptor_,
      EchoDedicatedServerRpcMessage::default_instance_,
      EchoDedicatedServerRpcMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoDedicatedServerRpcMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EchoDedicatedServerRpcMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(EchoDedicatedServerRpcMessage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    EchoDedicatedServerRpcMessage_descriptor_, &EchoDedicatedServerRpcMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto() {
  delete EchoDedicatedServerRpcMessage::default_instance_;
  delete EchoDedicatedServerRpcMessage_reflection_;
}

void protobuf_AddDesc_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_funapi_2fdistribution_2ffun_5fdedicated_5fserver_5frpc_5fmessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n(test_dedicated_server_rpc_messages.pro"
    "to\032:funapi/distribution/fun_dedicated_se"
    "rver_rpc_message.proto\"0\n\035EchoDedicatedS"
    "erverRpcMessage\022\017\n\007message\030\001 \001(\t:R\n\013echo"
    "_ds_rpc\022\035.FunDedicatedServerRpcMessage\030 "
    " \001(\0132\036.EchoDedicatedServerRpcMessage", 236);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test_dedicated_server_rpc_messages.proto", &protobuf_RegisterTypes);
  EchoDedicatedServerRpcMessage::default_instance_ = new EchoDedicatedServerRpcMessage();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::FunDedicatedServerRpcMessage::default_instance(),
    32, 11, false, false,
    &::EchoDedicatedServerRpcMessage::default_instance());
  EchoDedicatedServerRpcMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto {
  StaticDescriptorInitializer_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto() {
    protobuf_AddDesc_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto();
  }
} static_descriptor_initializer_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int EchoDedicatedServerRpcMessage::kMessageFieldNumber;
#endif  // !_MSC_VER

EchoDedicatedServerRpcMessage::EchoDedicatedServerRpcMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:EchoDedicatedServerRpcMessage)
}

void EchoDedicatedServerRpcMessage::InitAsDefaultInstance() {
}

EchoDedicatedServerRpcMessage::EchoDedicatedServerRpcMessage(const EchoDedicatedServerRpcMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:EchoDedicatedServerRpcMessage)
}

void EchoDedicatedServerRpcMessage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EchoDedicatedServerRpcMessage::~EchoDedicatedServerRpcMessage() {
  // @@protoc_insertion_point(destructor:EchoDedicatedServerRpcMessage)
  SharedDtor();
}

void EchoDedicatedServerRpcMessage::SharedDtor() {
  if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void EchoDedicatedServerRpcMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EchoDedicatedServerRpcMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EchoDedicatedServerRpcMessage_descriptor_;
}

const EchoDedicatedServerRpcMessage& EchoDedicatedServerRpcMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_test_5fdedicated_5fserver_5frpc_5fmessages_2eproto();
  return *default_instance_;
}

EchoDedicatedServerRpcMessage* EchoDedicatedServerRpcMessage::default_instance_ = NULL;

EchoDedicatedServerRpcMessage* EchoDedicatedServerRpcMessage::New() const {
  return new EchoDedicatedServerRpcMessage;
}

void EchoDedicatedServerRpcMessage::Clear() {
  if (has_message()) {
    if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      message_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool EchoDedicatedServerRpcMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:EchoDedicatedServerRpcMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string message = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "message");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:EchoDedicatedServerRpcMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:EchoDedicatedServerRpcMessage)
  return false;
#undef DO_
}

void EchoDedicatedServerRpcMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:EchoDedicatedServerRpcMessage)
  // optional string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->message(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:EchoDedicatedServerRpcMessage)
}

::google::protobuf::uint8* EchoDedicatedServerRpcMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:EchoDedicatedServerRpcMessage)
  // optional string message = 1;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:EchoDedicatedServerRpcMessage)
  return target;
}

int EchoDedicatedServerRpcMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string message = 1;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EchoDedicatedServerRpcMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const EchoDedicatedServerRpcMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const EchoDedicatedServerRpcMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EchoDedicatedServerRpcMessage::MergeFrom(const EchoDedicatedServerRpcMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_message()) {
      set_message(from.message());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void EchoDedicatedServerRpcMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EchoDedicatedServerRpcMessage::CopyFrom(const EchoDedicatedServerRpcMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EchoDedicatedServerRpcMessage::IsInitialized() const {

  return true;
}

void EchoDedicatedServerRpcMessage::Swap(EchoDedicatedServerRpcMessage* other) {
  if (other != this) {
    std::swap(message_, other->message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata EchoDedicatedServerRpcMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EchoDedicatedServerRpcMessage_descriptor_;
  metadata.reflection = EchoDedicatedServerRpcMessage_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::FunDedicatedServerRpcMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::EchoDedicatedServerRpcMessage >, 11, false >
  echo_ds_rpc(kEchoDsRpcFieldNumber, ::EchoDedicatedServerRpcMessage::default_instance());

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)