// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: funapi/service/multicast_message.proto

#if _MSC_VER >= 1300
#ifndef _PS3
#pragma warning(push)
#pragma warning(disable : 4530)	// warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc (disabled due to std headers having exception syntax)
#pragma warning(disable : 4512)	// warning C4512: assignment operator could not be generated
#pragma warning(disable : 4244)	// warning C4244:  warning C4244: '=' : conversion from '__w64 int' to 'int', possible loss of data
#pragma warning(disable : 4267)	// warning C4267: 'argument' : conversion from 'size_t' to 'int', possible loss of data
#pragma warning(disable : 4125)	// warning C4125: decimal digit terminates octal escape sequence
#pragma warning(disable : 4127)	// warning C4127: conditional expression is constant
#pragma warning(disable : 4100)	// warning C4100: 'op' : unreferenced formal parameter
#endif // _PS3
#endif // _MSC_VER

#ifndef PROTOBUF_funapi_2fservice_2fmulticast_5fmessage_2eproto__INCLUDED
#define PROTOBUF_funapi_2fservice_2fmulticast_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "funapi/network/fun_message.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
void protobuf_AssignDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
void protobuf_ShutdownFile_funapi_2fservice_2fmulticast_5fmessage_2eproto();

class FunMulticastMessage;
class FunChatMessage;

// ===================================================================

class FunMulticastMessage : public ::google::protobuf::Message {
 public:
  FunMulticastMessage();
  virtual ~FunMulticastMessage();

  FunMulticastMessage(const FunMulticastMessage& from);

  inline FunMulticastMessage& operator=(const FunMulticastMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FunMulticastMessage& default_instance();

  void Swap(FunMulticastMessage* other);

  // implements Message ----------------------------------------------

  FunMulticastMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FunMulticastMessage& from);
  void MergeFrom(const FunMulticastMessage& from);
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
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string channel = 1;
  inline bool has_channel() const;
  inline void clear_channel();
  static const int kChannelFieldNumber = 1;
  inline const ::std::string& channel() const;
  inline void set_channel(const ::std::string& value);
  inline void set_channel(const char* value);
  inline void set_channel(const char* value, size_t size);
  inline ::std::string* mutable_channel();
  inline ::std::string* release_channel();
  inline void set_allocated_channel(::std::string* channel);

  // optional bool join = 2;
  inline bool has_join() const;
  inline void clear_join();
  static const int kJoinFieldNumber = 2;
  inline bool join() const;
  inline void set_join(bool value);

  // optional bool leave = 3;
  inline bool has_leave() const;
  inline void clear_leave();
  static const int kLeaveFieldNumber = 3;
  inline bool leave() const;
  inline void set_leave(bool value);

  // optional bool bounce = 4;
  inline bool has_bounce() const;
  inline void clear_bounce();
  static const int kBounceFieldNumber = 4;
  inline bool bounce() const;
  inline void set_bounce(bool value);

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(FunMulticastMessage)
  // @@protoc_insertion_point(class_scope:FunMulticastMessage)
 private:
  inline void set_has_channel();
  inline void clear_has_channel();
  inline void set_has_join();
  inline void clear_has_join();
  inline void set_has_leave();
  inline void clear_has_leave();
  inline void set_has_bounce();
  inline void clear_has_bounce();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* channel_;
  bool join_;
  bool leave_;
  bool bounce_;
  friend void  protobuf_AddDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
  friend void protobuf_AssignDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_funapi_2fservice_2fmulticast_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static FunMulticastMessage* default_instance_;
};
// -------------------------------------------------------------------

class FunChatMessage : public ::google::protobuf::Message {
 public:
  FunChatMessage();
  virtual ~FunChatMessage();

  FunChatMessage(const FunChatMessage& from);

  inline FunChatMessage& operator=(const FunChatMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FunChatMessage& default_instance();

  void Swap(FunChatMessage* other);

  // implements Message ----------------------------------------------

  FunChatMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FunChatMessage& from);
  void MergeFrom(const FunChatMessage& from);
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
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string sender = 1;
  inline bool has_sender() const;
  inline void clear_sender();
  static const int kSenderFieldNumber = 1;
  inline const ::std::string& sender() const;
  inline void set_sender(const ::std::string& value);
  inline void set_sender(const char* value);
  inline void set_sender(const char* value, size_t size);
  inline ::std::string* mutable_sender();
  inline ::std::string* release_sender();
  inline void set_allocated_sender(::std::string* sender);

  // optional string text = 2;
  inline bool has_text() const;
  inline void clear_text();
  static const int kTextFieldNumber = 2;
  inline const ::std::string& text() const;
  inline void set_text(const ::std::string& value);
  inline void set_text(const char* value);
  inline void set_text(const char* value, size_t size);
  inline ::std::string* mutable_text();
  inline ::std::string* release_text();
  inline void set_allocated_text(::std::string* text);

  // @@protoc_insertion_point(class_scope:FunChatMessage)
 private:
  inline void set_has_sender();
  inline void clear_has_sender();
  inline void set_has_text();
  inline void clear_has_text();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* sender_;
  ::std::string* text_;
  friend void  protobuf_AddDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
  friend void protobuf_AssignDesc_funapi_2fservice_2fmulticast_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_funapi_2fservice_2fmulticast_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static FunChatMessage* default_instance_;
};
// ===================================================================

static const int kChatFieldNumber = 8;
extern ::google::protobuf::internal::ExtensionIdentifier< ::FunMulticastMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::FunChatMessage >, 11, false >
  chat;
static const int kMulticastFieldNumber = 8;
extern ::google::protobuf::internal::ExtensionIdentifier< ::FunMessage,
    ::google::protobuf::internal::MessageTypeTraits< ::FunMulticastMessage >, 11, false >
  multicast;

// ===================================================================

// FunMulticastMessage

// required string channel = 1;
inline bool FunMulticastMessage::has_channel() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FunMulticastMessage::set_has_channel() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FunMulticastMessage::clear_has_channel() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FunMulticastMessage::clear_channel() {
  if (channel_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_->clear();
  }
  clear_has_channel();
}
inline const ::std::string& FunMulticastMessage::channel() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.channel)
  return *channel_;
}
inline void FunMulticastMessage::set_channel(const ::std::string& value) {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_ = new ::std::string;
  }
  channel_->assign(value);
  // @@protoc_insertion_point(field_set:FunMulticastMessage.channel)
}
inline void FunMulticastMessage::set_channel(const char* value) {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_ = new ::std::string;
  }
  channel_->assign(value);
  // @@protoc_insertion_point(field_set_char:FunMulticastMessage.channel)
}
inline void FunMulticastMessage::set_channel(const char* value, size_t size) {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_ = new ::std::string;
  }
  channel_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FunMulticastMessage.channel)
}
inline ::std::string* FunMulticastMessage::mutable_channel() {
  set_has_channel();
  if (channel_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    channel_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:FunMulticastMessage.channel)
  return channel_;
}
inline ::std::string* FunMulticastMessage::release_channel() {
  clear_has_channel();
  if (channel_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = channel_;
    channel_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FunMulticastMessage::set_allocated_channel(::std::string* channel) {
  if (channel_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete channel_;
  }
  if (channel) {
    set_has_channel();
    channel_ = channel;
  } else {
    clear_has_channel();
    channel_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:FunMulticastMessage.channel)
}

// optional bool join = 2;
inline bool FunMulticastMessage::has_join() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FunMulticastMessage::set_has_join() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FunMulticastMessage::clear_has_join() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FunMulticastMessage::clear_join() {
  join_ = false;
  clear_has_join();
}
inline bool FunMulticastMessage::join() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.join)
  return join_;
}
inline void FunMulticastMessage::set_join(bool value) {
  set_has_join();
  join_ = value;
  // @@protoc_insertion_point(field_set:FunMulticastMessage.join)
}

// optional bool leave = 3;
inline bool FunMulticastMessage::has_leave() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FunMulticastMessage::set_has_leave() {
  _has_bits_[0] |= 0x00000004u;
}
inline void FunMulticastMessage::clear_has_leave() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void FunMulticastMessage::clear_leave() {
  leave_ = false;
  clear_has_leave();
}
inline bool FunMulticastMessage::leave() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.leave)
  return leave_;
}
inline void FunMulticastMessage::set_leave(bool value) {
  set_has_leave();
  leave_ = value;
  // @@protoc_insertion_point(field_set:FunMulticastMessage.leave)
}

// optional bool bounce = 4;
inline bool FunMulticastMessage::has_bounce() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void FunMulticastMessage::set_has_bounce() {
  _has_bits_[0] |= 0x00000008u;
}
inline void FunMulticastMessage::clear_has_bounce() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void FunMulticastMessage::clear_bounce() {
  bounce_ = false;
  clear_has_bounce();
}
inline bool FunMulticastMessage::bounce() const {
  // @@protoc_insertion_point(field_get:FunMulticastMessage.bounce)
  return bounce_;
}
inline void FunMulticastMessage::set_bounce(bool value) {
  set_has_bounce();
  bounce_ = value;
  // @@protoc_insertion_point(field_set:FunMulticastMessage.bounce)
}

// -------------------------------------------------------------------

// FunChatMessage

// optional string sender = 1;
inline bool FunChatMessage::has_sender() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FunChatMessage::set_has_sender() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FunChatMessage::clear_has_sender() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FunChatMessage::clear_sender() {
  if (sender_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_->clear();
  }
  clear_has_sender();
}
inline const ::std::string& FunChatMessage::sender() const {
  // @@protoc_insertion_point(field_get:FunChatMessage.sender)
  return *sender_;
}
inline void FunChatMessage::set_sender(const ::std::string& value) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::std::string;
  }
  sender_->assign(value);
  // @@protoc_insertion_point(field_set:FunChatMessage.sender)
}
inline void FunChatMessage::set_sender(const char* value) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::std::string;
  }
  sender_->assign(value);
  // @@protoc_insertion_point(field_set_char:FunChatMessage.sender)
}
inline void FunChatMessage::set_sender(const char* value, size_t size) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::std::string;
  }
  sender_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FunChatMessage.sender)
}
inline ::std::string* FunChatMessage::mutable_sender() {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    sender_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:FunChatMessage.sender)
  return sender_;
}
inline ::std::string* FunChatMessage::release_sender() {
  clear_has_sender();
  if (sender_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = sender_;
    sender_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FunChatMessage::set_allocated_sender(::std::string* sender) {
  if (sender_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete sender_;
  }
  if (sender) {
    set_has_sender();
    sender_ = sender;
  } else {
    clear_has_sender();
    sender_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:FunChatMessage.sender)
}

// optional string text = 2;
inline bool FunChatMessage::has_text() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FunChatMessage::set_has_text() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FunChatMessage::clear_has_text() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FunChatMessage::clear_text() {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_->clear();
  }
  clear_has_text();
}
inline const ::std::string& FunChatMessage::text() const {
  // @@protoc_insertion_point(field_get:FunChatMessage.text)
  return *text_;
}
inline void FunChatMessage::set_text(const ::std::string& value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::std::string;
  }
  text_->assign(value);
  // @@protoc_insertion_point(field_set:FunChatMessage.text)
}
inline void FunChatMessage::set_text(const char* value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::std::string;
  }
  text_->assign(value);
  // @@protoc_insertion_point(field_set_char:FunChatMessage.text)
}
inline void FunChatMessage::set_text(const char* value, size_t size) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::std::string;
  }
  text_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:FunChatMessage.text)
}
inline ::std::string* FunChatMessage::mutable_text() {
  set_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    text_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:FunChatMessage.text)
  return text_;
}
inline ::std::string* FunChatMessage::release_text() {
  clear_has_text();
  if (text_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = text_;
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void FunChatMessage::set_allocated_text(::std::string* text) {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete text_;
  }
  if (text) {
    set_has_text();
    text_ = text;
  } else {
    clear_has_text();
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:FunChatMessage.text)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_funapi_2fservice_2fmulticast_5fmessage_2eproto__INCLUDED
