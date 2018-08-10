// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WeatherMessage.proto

#ifndef PROTOBUF_WeatherMessage_2eproto__INCLUDED
#define PROTOBUF_WeatherMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_WeatherMessage_2eproto();
void protobuf_AssignDesc_WeatherMessage_2eproto();
void protobuf_ShutdownFile_WeatherMessage_2eproto();

class WeatherMessage;
class WeatherMessage_Gps;
class WeatherMessage_Mode;
class WeatherMessage_Date;

// ===================================================================

class WeatherMessage_Gps : public ::google::protobuf::Message {
 public:
  WeatherMessage_Gps();
  virtual ~WeatherMessage_Gps();

  WeatherMessage_Gps(const WeatherMessage_Gps& from);

  inline WeatherMessage_Gps& operator=(const WeatherMessage_Gps& from) {
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
  static const WeatherMessage_Gps& default_instance();

  void Swap(WeatherMessage_Gps* other);

  // implements Message ----------------------------------------------

  WeatherMessage_Gps* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WeatherMessage_Gps& from);
  void MergeFrom(const WeatherMessage_Gps& from);
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

  // optional .WeatherMessage.Date DateTime = 1;
  inline bool has_datetime() const;
  inline void clear_datetime();
  static const int kDateTimeFieldNumber = 1;
  inline const ::WeatherMessage_Date& datetime() const;
  inline ::WeatherMessage_Date* mutable_datetime();
  inline ::WeatherMessage_Date* release_datetime();
  inline void set_allocated_datetime(::WeatherMessage_Date* datetime);

  // optional string Lat = 2;
  inline bool has_lat() const;
  inline void clear_lat();
  static const int kLatFieldNumber = 2;
  inline const ::std::string& lat() const;
  inline void set_lat(const ::std::string& value);
  inline void set_lat(const char* value);
  inline void set_lat(const char* value, size_t size);
  inline ::std::string* mutable_lat();
  inline ::std::string* release_lat();
  inline void set_allocated_lat(::std::string* lat);

  // optional string Lon = 3;
  inline bool has_lon() const;
  inline void clear_lon();
  static const int kLonFieldNumber = 3;
  inline const ::std::string& lon() const;
  inline void set_lon(const ::std::string& value);
  inline void set_lon(const char* value);
  inline void set_lon(const char* value, size_t size);
  inline ::std::string* mutable_lon();
  inline ::std::string* release_lon();
  inline void set_allocated_lon(::std::string* lon);

  // optional int64 Nosv = 4;
  inline bool has_nosv() const;
  inline void clear_nosv();
  static const int kNosvFieldNumber = 4;
  inline ::google::protobuf::int64 nosv() const;
  inline void set_nosv(::google::protobuf::int64 value);

  // optional int64 Fs = 5;
  inline bool has_fs() const;
  inline void clear_fs();
  static const int kFsFieldNumber = 5;
  inline ::google::protobuf::int64 fs() const;
  inline void set_fs(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:WeatherMessage.Gps)
 private:
  inline void set_has_datetime();
  inline void clear_has_datetime();
  inline void set_has_lat();
  inline void clear_has_lat();
  inline void set_has_lon();
  inline void clear_has_lon();
  inline void set_has_nosv();
  inline void clear_has_nosv();
  inline void set_has_fs();
  inline void clear_has_fs();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::WeatherMessage_Date* datetime_;
  ::std::string* lat_;
  ::std::string* lon_;
  ::google::protobuf::int64 nosv_;
  ::google::protobuf::int64 fs_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_WeatherMessage_2eproto();
  friend void protobuf_AssignDesc_WeatherMessage_2eproto();
  friend void protobuf_ShutdownFile_WeatherMessage_2eproto();

  void InitAsDefaultInstance();
  static WeatherMessage_Gps* default_instance_;
};
// -------------------------------------------------------------------

class WeatherMessage_Mode : public ::google::protobuf::Message {
 public:
  WeatherMessage_Mode();
  virtual ~WeatherMessage_Mode();

  WeatherMessage_Mode(const WeatherMessage_Mode& from);

  inline WeatherMessage_Mode& operator=(const WeatherMessage_Mode& from) {
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
  static const WeatherMessage_Mode& default_instance();

  void Swap(WeatherMessage_Mode* other);

  // implements Message ----------------------------------------------

  WeatherMessage_Mode* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WeatherMessage_Mode& from);
  void MergeFrom(const WeatherMessage_Mode& from);
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

  // optional int64 WorkMode = 1;
  inline bool has_workmode() const;
  inline void clear_workmode();
  static const int kWorkModeFieldNumber = 1;
  inline ::google::protobuf::int64 workmode() const;
  inline void set_workmode(::google::protobuf::int64 value);

  // optional int64 Rate = 2;
  inline bool has_rate() const;
  inline void clear_rate();
  static const int kRateFieldNumber = 2;
  inline ::google::protobuf::int64 rate() const;
  inline void set_rate(::google::protobuf::int64 value);

  // optional int64 ErrorCode = 3;
  inline bool has_errorcode() const;
  inline void clear_errorcode();
  static const int kErrorCodeFieldNumber = 3;
  inline ::google::protobuf::int64 errorcode() const;
  inline void set_errorcode(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:WeatherMessage.Mode)
 private:
  inline void set_has_workmode();
  inline void clear_has_workmode();
  inline void set_has_rate();
  inline void clear_has_rate();
  inline void set_has_errorcode();
  inline void clear_has_errorcode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 workmode_;
  ::google::protobuf::int64 rate_;
  ::google::protobuf::int64 errorcode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_WeatherMessage_2eproto();
  friend void protobuf_AssignDesc_WeatherMessage_2eproto();
  friend void protobuf_ShutdownFile_WeatherMessage_2eproto();

  void InitAsDefaultInstance();
  static WeatherMessage_Mode* default_instance_;
};
// -------------------------------------------------------------------

class WeatherMessage_Date : public ::google::protobuf::Message {
 public:
  WeatherMessage_Date();
  virtual ~WeatherMessage_Date();

  WeatherMessage_Date(const WeatherMessage_Date& from);

  inline WeatherMessage_Date& operator=(const WeatherMessage_Date& from) {
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
  static const WeatherMessage_Date& default_instance();

  void Swap(WeatherMessage_Date* other);

  // implements Message ----------------------------------------------

  WeatherMessage_Date* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WeatherMessage_Date& from);
  void MergeFrom(const WeatherMessage_Date& from);
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

  // optional int32 Year = 1;
  inline bool has_year() const;
  inline void clear_year();
  static const int kYearFieldNumber = 1;
  inline ::google::protobuf::int32 year() const;
  inline void set_year(::google::protobuf::int32 value);

  // optional int32 Month = 2;
  inline bool has_month() const;
  inline void clear_month();
  static const int kMonthFieldNumber = 2;
  inline ::google::protobuf::int32 month() const;
  inline void set_month(::google::protobuf::int32 value);

  // optional int32 Day = 3;
  inline bool has_day() const;
  inline void clear_day();
  static const int kDayFieldNumber = 3;
  inline ::google::protobuf::int32 day() const;
  inline void set_day(::google::protobuf::int32 value);

  // optional int32 Hour = 4;
  inline bool has_hour() const;
  inline void clear_hour();
  static const int kHourFieldNumber = 4;
  inline ::google::protobuf::int32 hour() const;
  inline void set_hour(::google::protobuf::int32 value);

  // optional int32 Miunte = 5;
  inline bool has_miunte() const;
  inline void clear_miunte();
  static const int kMiunteFieldNumber = 5;
  inline ::google::protobuf::int32 miunte() const;
  inline void set_miunte(::google::protobuf::int32 value);

  // optional int32 Second = 6;
  inline bool has_second() const;
  inline void clear_second();
  static const int kSecondFieldNumber = 6;
  inline ::google::protobuf::int32 second() const;
  inline void set_second(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:WeatherMessage.Date)
 private:
  inline void set_has_year();
  inline void clear_has_year();
  inline void set_has_month();
  inline void clear_has_month();
  inline void set_has_day();
  inline void clear_has_day();
  inline void set_has_hour();
  inline void clear_has_hour();
  inline void set_has_miunte();
  inline void clear_has_miunte();
  inline void set_has_second();
  inline void clear_has_second();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 year_;
  ::google::protobuf::int32 month_;
  ::google::protobuf::int32 day_;
  ::google::protobuf::int32 hour_;
  ::google::protobuf::int32 miunte_;
  ::google::protobuf::int32 second_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_WeatherMessage_2eproto();
  friend void protobuf_AssignDesc_WeatherMessage_2eproto();
  friend void protobuf_ShutdownFile_WeatherMessage_2eproto();

  void InitAsDefaultInstance();
  static WeatherMessage_Date* default_instance_;
};
// -------------------------------------------------------------------

class WeatherMessage : public ::google::protobuf::Message {
 public:
  WeatherMessage();
  virtual ~WeatherMessage();

  WeatherMessage(const WeatherMessage& from);

  inline WeatherMessage& operator=(const WeatherMessage& from) {
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
  static const WeatherMessage& default_instance();

  void Swap(WeatherMessage* other);

  // implements Message ----------------------------------------------

  WeatherMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WeatherMessage& from);
  void MergeFrom(const WeatherMessage& from);
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

  typedef WeatherMessage_Gps Gps;
  typedef WeatherMessage_Mode Mode;
  typedef WeatherMessage_Date Date;

  // accessors -------------------------------------------------------

  // optional .WeatherMessage.Gps GpsMessage = 1;
  inline bool has_gpsmessage() const;
  inline void clear_gpsmessage();
  static const int kGpsMessageFieldNumber = 1;
  inline const ::WeatherMessage_Gps& gpsmessage() const;
  inline ::WeatherMessage_Gps* mutable_gpsmessage();
  inline ::WeatherMessage_Gps* release_gpsmessage();
  inline void set_allocated_gpsmessage(::WeatherMessage_Gps* gpsmessage);

  // optional float Temp = 2;
  inline bool has_temp() const;
  inline void clear_temp();
  static const int kTempFieldNumber = 2;
  inline float temp() const;
  inline void set_temp(float value);

  // optional float Humi = 3;
  inline bool has_humi() const;
  inline void clear_humi();
  static const int kHumiFieldNumber = 3;
  inline float humi() const;
  inline void set_humi(float value);

  // optional float Speed = 4;
  inline bool has_speed() const;
  inline void clear_speed();
  static const int kSpeedFieldNumber = 4;
  inline float speed() const;
  inline void set_speed(float value);

  // optional float Rain = 5;
  inline bool has_rain() const;
  inline void clear_rain();
  static const int kRainFieldNumber = 5;
  inline float rain() const;
  inline void set_rain(float value);

  // optional float AtmPressure = 6;
  inline bool has_atmpressure() const;
  inline void clear_atmpressure();
  static const int kAtmPressureFieldNumber = 6;
  inline float atmpressure() const;
  inline void set_atmpressure(float value);

  // optional .WeatherMessage.Mode ModeMessage = 7;
  inline bool has_modemessage() const;
  inline void clear_modemessage();
  static const int kModeMessageFieldNumber = 7;
  inline const ::WeatherMessage_Mode& modemessage() const;
  inline ::WeatherMessage_Mode* mutable_modemessage();
  inline ::WeatherMessage_Mode* release_modemessage();
  inline void set_allocated_modemessage(::WeatherMessage_Mode* modemessage);

  // optional float WindDirection = 8;
  inline bool has_winddirection() const;
  inline void clear_winddirection();
  static const int kWindDirectionFieldNumber = 8;
  inline float winddirection() const;
  inline void set_winddirection(float value);

  // optional .WeatherMessage.Date DateMessage = 9;
  inline bool has_datemessage() const;
  inline void clear_datemessage();
  static const int kDateMessageFieldNumber = 9;
  inline const ::WeatherMessage_Date& datemessage() const;
  inline ::WeatherMessage_Date* mutable_datemessage();
  inline ::WeatherMessage_Date* release_datemessage();
  inline void set_allocated_datemessage(::WeatherMessage_Date* datemessage);

  // @@protoc_insertion_point(class_scope:WeatherMessage)
 private:
  inline void set_has_gpsmessage();
  inline void clear_has_gpsmessage();
  inline void set_has_temp();
  inline void clear_has_temp();
  inline void set_has_humi();
  inline void clear_has_humi();
  inline void set_has_speed();
  inline void clear_has_speed();
  inline void set_has_rain();
  inline void clear_has_rain();
  inline void set_has_atmpressure();
  inline void clear_has_atmpressure();
  inline void set_has_modemessage();
  inline void clear_has_modemessage();
  inline void set_has_winddirection();
  inline void clear_has_winddirection();
  inline void set_has_datemessage();
  inline void clear_has_datemessage();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::WeatherMessage_Gps* gpsmessage_;
  float temp_;
  float humi_;
  float speed_;
  float rain_;
  ::WeatherMessage_Mode* modemessage_;
  float atmpressure_;
  float winddirection_;
  ::WeatherMessage_Date* datemessage_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];

  friend void  protobuf_AddDesc_WeatherMessage_2eproto();
  friend void protobuf_AssignDesc_WeatherMessage_2eproto();
  friend void protobuf_ShutdownFile_WeatherMessage_2eproto();

  void InitAsDefaultInstance();
  static WeatherMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// WeatherMessage_Gps

// optional .WeatherMessage.Date DateTime = 1;
inline bool WeatherMessage_Gps::has_datetime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WeatherMessage_Gps::set_has_datetime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WeatherMessage_Gps::clear_has_datetime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WeatherMessage_Gps::clear_datetime() {
  if (datetime_ != NULL) datetime_->::WeatherMessage_Date::Clear();
  clear_has_datetime();
}
inline const ::WeatherMessage_Date& WeatherMessage_Gps::datetime() const {
  return datetime_ != NULL ? *datetime_ : *default_instance_->datetime_;
}
inline ::WeatherMessage_Date* WeatherMessage_Gps::mutable_datetime() {
  set_has_datetime();
  if (datetime_ == NULL) datetime_ = new ::WeatherMessage_Date;
  return datetime_;
}
inline ::WeatherMessage_Date* WeatherMessage_Gps::release_datetime() {
  clear_has_datetime();
  ::WeatherMessage_Date* temp = datetime_;
  datetime_ = NULL;
  return temp;
}
inline void WeatherMessage_Gps::set_allocated_datetime(::WeatherMessage_Date* datetime) {
  delete datetime_;
  datetime_ = datetime;
  if (datetime) {
    set_has_datetime();
  } else {
    clear_has_datetime();
  }
}

// optional string Lat = 2;
inline bool WeatherMessage_Gps::has_lat() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WeatherMessage_Gps::set_has_lat() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WeatherMessage_Gps::clear_has_lat() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WeatherMessage_Gps::clear_lat() {
  if (lat_ != &::google::protobuf::internal::kEmptyString) {
    lat_->clear();
  }
  clear_has_lat();
}
inline const ::std::string& WeatherMessage_Gps::lat() const {
  return *lat_;
}
inline void WeatherMessage_Gps::set_lat(const ::std::string& value) {
  set_has_lat();
  if (lat_ == &::google::protobuf::internal::kEmptyString) {
    lat_ = new ::std::string;
  }
  lat_->assign(value);
}
inline void WeatherMessage_Gps::set_lat(const char* value) {
  set_has_lat();
  if (lat_ == &::google::protobuf::internal::kEmptyString) {
    lat_ = new ::std::string;
  }
  lat_->assign(value);
}
inline void WeatherMessage_Gps::set_lat(const char* value, size_t size) {
  set_has_lat();
  if (lat_ == &::google::protobuf::internal::kEmptyString) {
    lat_ = new ::std::string;
  }
  lat_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* WeatherMessage_Gps::mutable_lat() {
  set_has_lat();
  if (lat_ == &::google::protobuf::internal::kEmptyString) {
    lat_ = new ::std::string;
  }
  return lat_;
}
inline ::std::string* WeatherMessage_Gps::release_lat() {
  clear_has_lat();
  if (lat_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = lat_;
    lat_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void WeatherMessage_Gps::set_allocated_lat(::std::string* lat) {
  if (lat_ != &::google::protobuf::internal::kEmptyString) {
    delete lat_;
  }
  if (lat) {
    set_has_lat();
    lat_ = lat;
  } else {
    clear_has_lat();
    lat_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string Lon = 3;
inline bool WeatherMessage_Gps::has_lon() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WeatherMessage_Gps::set_has_lon() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WeatherMessage_Gps::clear_has_lon() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WeatherMessage_Gps::clear_lon() {
  if (lon_ != &::google::protobuf::internal::kEmptyString) {
    lon_->clear();
  }
  clear_has_lon();
}
inline const ::std::string& WeatherMessage_Gps::lon() const {
  return *lon_;
}
inline void WeatherMessage_Gps::set_lon(const ::std::string& value) {
  set_has_lon();
  if (lon_ == &::google::protobuf::internal::kEmptyString) {
    lon_ = new ::std::string;
  }
  lon_->assign(value);
}
inline void WeatherMessage_Gps::set_lon(const char* value) {
  set_has_lon();
  if (lon_ == &::google::protobuf::internal::kEmptyString) {
    lon_ = new ::std::string;
  }
  lon_->assign(value);
}
inline void WeatherMessage_Gps::set_lon(const char* value, size_t size) {
  set_has_lon();
  if (lon_ == &::google::protobuf::internal::kEmptyString) {
    lon_ = new ::std::string;
  }
  lon_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* WeatherMessage_Gps::mutable_lon() {
  set_has_lon();
  if (lon_ == &::google::protobuf::internal::kEmptyString) {
    lon_ = new ::std::string;
  }
  return lon_;
}
inline ::std::string* WeatherMessage_Gps::release_lon() {
  clear_has_lon();
  if (lon_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = lon_;
    lon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void WeatherMessage_Gps::set_allocated_lon(::std::string* lon) {
  if (lon_ != &::google::protobuf::internal::kEmptyString) {
    delete lon_;
  }
  if (lon) {
    set_has_lon();
    lon_ = lon;
  } else {
    clear_has_lon();
    lon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 Nosv = 4;
inline bool WeatherMessage_Gps::has_nosv() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WeatherMessage_Gps::set_has_nosv() {
  _has_bits_[0] |= 0x00000008u;
}
inline void WeatherMessage_Gps::clear_has_nosv() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void WeatherMessage_Gps::clear_nosv() {
  nosv_ = GOOGLE_LONGLONG(0);
  clear_has_nosv();
}
inline ::google::protobuf::int64 WeatherMessage_Gps::nosv() const {
  return nosv_;
}
inline void WeatherMessage_Gps::set_nosv(::google::protobuf::int64 value) {
  set_has_nosv();
  nosv_ = value;
}

// optional int64 Fs = 5;
inline bool WeatherMessage_Gps::has_fs() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void WeatherMessage_Gps::set_has_fs() {
  _has_bits_[0] |= 0x00000010u;
}
inline void WeatherMessage_Gps::clear_has_fs() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void WeatherMessage_Gps::clear_fs() {
  fs_ = GOOGLE_LONGLONG(0);
  clear_has_fs();
}
inline ::google::protobuf::int64 WeatherMessage_Gps::fs() const {
  return fs_;
}
inline void WeatherMessage_Gps::set_fs(::google::protobuf::int64 value) {
  set_has_fs();
  fs_ = value;
}

// -------------------------------------------------------------------

// WeatherMessage_Mode

// optional int64 WorkMode = 1;
inline bool WeatherMessage_Mode::has_workmode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WeatherMessage_Mode::set_has_workmode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WeatherMessage_Mode::clear_has_workmode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WeatherMessage_Mode::clear_workmode() {
  workmode_ = GOOGLE_LONGLONG(0);
  clear_has_workmode();
}
inline ::google::protobuf::int64 WeatherMessage_Mode::workmode() const {
  return workmode_;
}
inline void WeatherMessage_Mode::set_workmode(::google::protobuf::int64 value) {
  set_has_workmode();
  workmode_ = value;
}

// optional int64 Rate = 2;
inline bool WeatherMessage_Mode::has_rate() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WeatherMessage_Mode::set_has_rate() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WeatherMessage_Mode::clear_has_rate() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WeatherMessage_Mode::clear_rate() {
  rate_ = GOOGLE_LONGLONG(0);
  clear_has_rate();
}
inline ::google::protobuf::int64 WeatherMessage_Mode::rate() const {
  return rate_;
}
inline void WeatherMessage_Mode::set_rate(::google::protobuf::int64 value) {
  set_has_rate();
  rate_ = value;
}

// optional int64 ErrorCode = 3;
inline bool WeatherMessage_Mode::has_errorcode() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WeatherMessage_Mode::set_has_errorcode() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WeatherMessage_Mode::clear_has_errorcode() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WeatherMessage_Mode::clear_errorcode() {
  errorcode_ = GOOGLE_LONGLONG(0);
  clear_has_errorcode();
}
inline ::google::protobuf::int64 WeatherMessage_Mode::errorcode() const {
  return errorcode_;
}
inline void WeatherMessage_Mode::set_errorcode(::google::protobuf::int64 value) {
  set_has_errorcode();
  errorcode_ = value;
}

// -------------------------------------------------------------------

// WeatherMessage_Date

// optional int32 Year = 1;
inline bool WeatherMessage_Date::has_year() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WeatherMessage_Date::set_has_year() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WeatherMessage_Date::clear_has_year() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WeatherMessage_Date::clear_year() {
  year_ = 0;
  clear_has_year();
}
inline ::google::protobuf::int32 WeatherMessage_Date::year() const {
  return year_;
}
inline void WeatherMessage_Date::set_year(::google::protobuf::int32 value) {
  set_has_year();
  year_ = value;
}

// optional int32 Month = 2;
inline bool WeatherMessage_Date::has_month() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WeatherMessage_Date::set_has_month() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WeatherMessage_Date::clear_has_month() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WeatherMessage_Date::clear_month() {
  month_ = 0;
  clear_has_month();
}
inline ::google::protobuf::int32 WeatherMessage_Date::month() const {
  return month_;
}
inline void WeatherMessage_Date::set_month(::google::protobuf::int32 value) {
  set_has_month();
  month_ = value;
}

// optional int32 Day = 3;
inline bool WeatherMessage_Date::has_day() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WeatherMessage_Date::set_has_day() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WeatherMessage_Date::clear_has_day() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WeatherMessage_Date::clear_day() {
  day_ = 0;
  clear_has_day();
}
inline ::google::protobuf::int32 WeatherMessage_Date::day() const {
  return day_;
}
inline void WeatherMessage_Date::set_day(::google::protobuf::int32 value) {
  set_has_day();
  day_ = value;
}

// optional int32 Hour = 4;
inline bool WeatherMessage_Date::has_hour() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WeatherMessage_Date::set_has_hour() {
  _has_bits_[0] |= 0x00000008u;
}
inline void WeatherMessage_Date::clear_has_hour() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void WeatherMessage_Date::clear_hour() {
  hour_ = 0;
  clear_has_hour();
}
inline ::google::protobuf::int32 WeatherMessage_Date::hour() const {
  return hour_;
}
inline void WeatherMessage_Date::set_hour(::google::protobuf::int32 value) {
  set_has_hour();
  hour_ = value;
}

// optional int32 Miunte = 5;
inline bool WeatherMessage_Date::has_miunte() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void WeatherMessage_Date::set_has_miunte() {
  _has_bits_[0] |= 0x00000010u;
}
inline void WeatherMessage_Date::clear_has_miunte() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void WeatherMessage_Date::clear_miunte() {
  miunte_ = 0;
  clear_has_miunte();
}
inline ::google::protobuf::int32 WeatherMessage_Date::miunte() const {
  return miunte_;
}
inline void WeatherMessage_Date::set_miunte(::google::protobuf::int32 value) {
  set_has_miunte();
  miunte_ = value;
}

// optional int32 Second = 6;
inline bool WeatherMessage_Date::has_second() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void WeatherMessage_Date::set_has_second() {
  _has_bits_[0] |= 0x00000020u;
}
inline void WeatherMessage_Date::clear_has_second() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void WeatherMessage_Date::clear_second() {
  second_ = 0;
  clear_has_second();
}
inline ::google::protobuf::int32 WeatherMessage_Date::second() const {
  return second_;
}
inline void WeatherMessage_Date::set_second(::google::protobuf::int32 value) {
  set_has_second();
  second_ = value;
}

// -------------------------------------------------------------------

// WeatherMessage

// optional .WeatherMessage.Gps GpsMessage = 1;
inline bool WeatherMessage::has_gpsmessage() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WeatherMessage::set_has_gpsmessage() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WeatherMessage::clear_has_gpsmessage() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WeatherMessage::clear_gpsmessage() {
  if (gpsmessage_ != NULL) gpsmessage_->::WeatherMessage_Gps::Clear();
  clear_has_gpsmessage();
}
inline const ::WeatherMessage_Gps& WeatherMessage::gpsmessage() const {
  return gpsmessage_ != NULL ? *gpsmessage_ : *default_instance_->gpsmessage_;
}
inline ::WeatherMessage_Gps* WeatherMessage::mutable_gpsmessage() {
  set_has_gpsmessage();
  if (gpsmessage_ == NULL) gpsmessage_ = new ::WeatherMessage_Gps;
  return gpsmessage_;
}
inline ::WeatherMessage_Gps* WeatherMessage::release_gpsmessage() {
  clear_has_gpsmessage();
  ::WeatherMessage_Gps* temp = gpsmessage_;
  gpsmessage_ = NULL;
  return temp;
}
inline void WeatherMessage::set_allocated_gpsmessage(::WeatherMessage_Gps* gpsmessage) {
  delete gpsmessage_;
  gpsmessage_ = gpsmessage;
  if (gpsmessage) {
    set_has_gpsmessage();
  } else {
    clear_has_gpsmessage();
  }
}

// optional float Temp = 2;
inline bool WeatherMessage::has_temp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WeatherMessage::set_has_temp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WeatherMessage::clear_has_temp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WeatherMessage::clear_temp() {
  temp_ = 0;
  clear_has_temp();
}
inline float WeatherMessage::temp() const {
  return temp_;
}
inline void WeatherMessage::set_temp(float value) {
  set_has_temp();
  temp_ = value;
}

// optional float Humi = 3;
inline bool WeatherMessage::has_humi() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WeatherMessage::set_has_humi() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WeatherMessage::clear_has_humi() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WeatherMessage::clear_humi() {
  humi_ = 0;
  clear_has_humi();
}
inline float WeatherMessage::humi() const {
  return humi_;
}
inline void WeatherMessage::set_humi(float value) {
  set_has_humi();
  humi_ = value;
}

// optional float Speed = 4;
inline bool WeatherMessage::has_speed() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WeatherMessage::set_has_speed() {
  _has_bits_[0] |= 0x00000008u;
}
inline void WeatherMessage::clear_has_speed() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void WeatherMessage::clear_speed() {
  speed_ = 0;
  clear_has_speed();
}
inline float WeatherMessage::speed() const {
  return speed_;
}
inline void WeatherMessage::set_speed(float value) {
  set_has_speed();
  speed_ = value;
}

// optional float Rain = 5;
inline bool WeatherMessage::has_rain() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void WeatherMessage::set_has_rain() {
  _has_bits_[0] |= 0x00000010u;
}
inline void WeatherMessage::clear_has_rain() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void WeatherMessage::clear_rain() {
  rain_ = 0;
  clear_has_rain();
}
inline float WeatherMessage::rain() const {
  return rain_;
}
inline void WeatherMessage::set_rain(float value) {
  set_has_rain();
  rain_ = value;
}

// optional float AtmPressure = 6;
inline bool WeatherMessage::has_atmpressure() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void WeatherMessage::set_has_atmpressure() {
  _has_bits_[0] |= 0x00000020u;
}
inline void WeatherMessage::clear_has_atmpressure() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void WeatherMessage::clear_atmpressure() {
  atmpressure_ = 0;
  clear_has_atmpressure();
}
inline float WeatherMessage::atmpressure() const {
  return atmpressure_;
}
inline void WeatherMessage::set_atmpressure(float value) {
  set_has_atmpressure();
  atmpressure_ = value;
}

// optional .WeatherMessage.Mode ModeMessage = 7;
inline bool WeatherMessage::has_modemessage() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void WeatherMessage::set_has_modemessage() {
  _has_bits_[0] |= 0x00000040u;
}
inline void WeatherMessage::clear_has_modemessage() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void WeatherMessage::clear_modemessage() {
  if (modemessage_ != NULL) modemessage_->::WeatherMessage_Mode::Clear();
  clear_has_modemessage();
}
inline const ::WeatherMessage_Mode& WeatherMessage::modemessage() const {
  return modemessage_ != NULL ? *modemessage_ : *default_instance_->modemessage_;
}
inline ::WeatherMessage_Mode* WeatherMessage::mutable_modemessage() {
  set_has_modemessage();
  if (modemessage_ == NULL) modemessage_ = new ::WeatherMessage_Mode;
  return modemessage_;
}
inline ::WeatherMessage_Mode* WeatherMessage::release_modemessage() {
  clear_has_modemessage();
  ::WeatherMessage_Mode* temp = modemessage_;
  modemessage_ = NULL;
  return temp;
}
inline void WeatherMessage::set_allocated_modemessage(::WeatherMessage_Mode* modemessage) {
  delete modemessage_;
  modemessage_ = modemessage;
  if (modemessage) {
    set_has_modemessage();
  } else {
    clear_has_modemessage();
  }
}

// optional float WindDirection = 8;
inline bool WeatherMessage::has_winddirection() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void WeatherMessage::set_has_winddirection() {
  _has_bits_[0] |= 0x00000080u;
}
inline void WeatherMessage::clear_has_winddirection() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void WeatherMessage::clear_winddirection() {
  winddirection_ = 0;
  clear_has_winddirection();
}
inline float WeatherMessage::winddirection() const {
  return winddirection_;
}
inline void WeatherMessage::set_winddirection(float value) {
  set_has_winddirection();
  winddirection_ = value;
}

// optional .WeatherMessage.Date DateMessage = 9;
inline bool WeatherMessage::has_datemessage() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void WeatherMessage::set_has_datemessage() {
  _has_bits_[0] |= 0x00000100u;
}
inline void WeatherMessage::clear_has_datemessage() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void WeatherMessage::clear_datemessage() {
  if (datemessage_ != NULL) datemessage_->::WeatherMessage_Date::Clear();
  clear_has_datemessage();
}
inline const ::WeatherMessage_Date& WeatherMessage::datemessage() const {
  return datemessage_ != NULL ? *datemessage_ : *default_instance_->datemessage_;
}
inline ::WeatherMessage_Date* WeatherMessage::mutable_datemessage() {
  set_has_datemessage();
  if (datemessage_ == NULL) datemessage_ = new ::WeatherMessage_Date;
  return datemessage_;
}
inline ::WeatherMessage_Date* WeatherMessage::release_datemessage() {
  clear_has_datemessage();
  ::WeatherMessage_Date* temp = datemessage_;
  datemessage_ = NULL;
  return temp;
}
inline void WeatherMessage::set_allocated_datemessage(::WeatherMessage_Date* datemessage) {
  delete datemessage_;
  datemessage_ = datemessage;
  if (datemessage) {
    set_has_datemessage();
  } else {
    clear_has_datemessage();
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_WeatherMessage_2eproto__INCLUDED
