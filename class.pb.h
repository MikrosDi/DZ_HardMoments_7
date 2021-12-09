// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: class.proto

#ifndef PROTOBUF_INCLUDED_class_2eproto
#define PROTOBUF_INCLUDED_class_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_class_2eproto 

namespace protobuf_class_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_class_2eproto
namespace foo {
namespace bar {
class FullName;
class FullNameDefaultTypeInternal;
extern FullNameDefaultTypeInternal _FullName_default_instance_;
class Student;
class StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class StudentsGroup;
class StudentsGroupDefaultTypeInternal;
extern StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace bar
}  // namespace foo
namespace google {
namespace protobuf {
template<> ::foo::bar::FullName* Arena::CreateMaybeMessage<::foo::bar::FullName>(Arena*);
template<> ::foo::bar::Student* Arena::CreateMaybeMessage<::foo::bar::Student>(Arena*);
template<> ::foo::bar::StudentsGroup* Arena::CreateMaybeMessage<::foo::bar::StudentsGroup>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace foo {
namespace bar {

// ===================================================================

class FullName : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:foo.bar.FullName) */ {
 public:
  FullName();
  virtual ~FullName();

  FullName(const FullName& from);

  inline FullName& operator=(const FullName& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FullName(FullName&& from) noexcept
    : FullName() {
    *this = ::std::move(from);
  }

  inline FullName& operator=(FullName&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FullName& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FullName* internal_default_instance() {
    return reinterpret_cast<const FullName*>(
               &_FullName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(FullName* other);
  friend void swap(FullName& a, FullName& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FullName* New() const final {
    return CreateMaybeMessage<FullName>(NULL);
  }

  FullName* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FullName>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FullName& from);
  void MergeFrom(const FullName& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FullName* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string surname = 2;
  void clear_surname();
  static const int kSurnameFieldNumber = 2;
  const ::std::string& surname() const;
  void set_surname(const ::std::string& value);
  #if LANG_CXX11
  void set_surname(::std::string&& value);
  #endif
  void set_surname(const char* value);
  void set_surname(const char* value, size_t size);
  ::std::string* mutable_surname();
  ::std::string* release_surname();
  void set_allocated_surname(::std::string* surname);

  // string patronimic = 3;
  void clear_patronimic();
  static const int kPatronimicFieldNumber = 3;
  const ::std::string& patronimic() const;
  void set_patronimic(const ::std::string& value);
  #if LANG_CXX11
  void set_patronimic(::std::string&& value);
  #endif
  void set_patronimic(const char* value);
  void set_patronimic(const char* value, size_t size);
  ::std::string* mutable_patronimic();
  ::std::string* release_patronimic();
  void set_allocated_patronimic(::std::string* patronimic);

  // @@protoc_insertion_point(class_scope:foo.bar.FullName)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr surname_;
  ::google::protobuf::internal::ArenaStringPtr patronimic_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_class_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Student : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:foo.bar.Student) */ {
 public:
  Student();
  virtual ~Student();

  Student(const Student& from);

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(Student&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Student& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Student* other);
  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return CreateMaybeMessage<Student>(NULL);
  }

  Student* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 grades = 2;
  int grades_size() const;
  void clear_grades();
  static const int kGradesFieldNumber = 2;
  ::google::protobuf::int32 grades(int index) const;
  void set_grades(int index, ::google::protobuf::int32 value);
  void add_grades(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      grades() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_grades();

  // .foo.bar.FullName full_name = 1;
  bool has_full_name() const;
  void clear_full_name();
  static const int kFullNameFieldNumber = 1;
  private:
  const ::foo::bar::FullName& _internal_full_name() const;
  public:
  const ::foo::bar::FullName& full_name() const;
  ::foo::bar::FullName* release_full_name();
  ::foo::bar::FullName* mutable_full_name();
  void set_allocated_full_name(::foo::bar::FullName* full_name);

  // double GPA = 3;
  void clear_gpa();
  static const int kGPAFieldNumber = 3;
  double gpa() const;
  void set_gpa(double value);

  // @@protoc_insertion_point(class_scope:foo.bar.Student)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > grades_;
  mutable int _grades_cached_byte_size_;
  ::foo::bar::FullName* full_name_;
  double gpa_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_class_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class StudentsGroup : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:foo.bar.StudentsGroup) */ {
 public:
  StudentsGroup();
  virtual ~StudentsGroup();

  StudentsGroup(const StudentsGroup& from);

  inline StudentsGroup& operator=(const StudentsGroup& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StudentsGroup(StudentsGroup&& from) noexcept
    : StudentsGroup() {
    *this = ::std::move(from);
  }

  inline StudentsGroup& operator=(StudentsGroup&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const StudentsGroup& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StudentsGroup* internal_default_instance() {
    return reinterpret_cast<const StudentsGroup*>(
               &_StudentsGroup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(StudentsGroup* other);
  friend void swap(StudentsGroup& a, StudentsGroup& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StudentsGroup* New() const final {
    return CreateMaybeMessage<StudentsGroup>(NULL);
  }

  StudentsGroup* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<StudentsGroup>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const StudentsGroup& from);
  void MergeFrom(const StudentsGroup& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StudentsGroup* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .foo.bar.Student student = 1;
  int student_size() const;
  void clear_student();
  static const int kStudentFieldNumber = 1;
  ::foo::bar::Student* mutable_student(int index);
  ::google::protobuf::RepeatedPtrField< ::foo::bar::Student >*
      mutable_student();
  const ::foo::bar::Student& student(int index) const;
  ::foo::bar::Student* add_student();
  const ::google::protobuf::RepeatedPtrField< ::foo::bar::Student >&
      student() const;

  // @@protoc_insertion_point(class_scope:foo.bar.StudentsGroup)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::foo::bar::Student > student_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_class_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FullName

// string name = 1;
inline void FullName::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FullName::name() const {
  // @@protoc_insertion_point(field_get:foo.bar.FullName.name)
  return name_.GetNoArena();
}
inline void FullName::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:foo.bar.FullName.name)
}
#if LANG_CXX11
inline void FullName::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:foo.bar.FullName.name)
}
#endif
inline void FullName::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:foo.bar.FullName.name)
}
inline void FullName::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:foo.bar.FullName.name)
}
inline ::std::string* FullName::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:foo.bar.FullName.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FullName::release_name() {
  // @@protoc_insertion_point(field_release:foo.bar.FullName.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FullName::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:foo.bar.FullName.name)
}

// string surname = 2;
inline void FullName::clear_surname() {
  surname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FullName::surname() const {
  // @@protoc_insertion_point(field_get:foo.bar.FullName.surname)
  return surname_.GetNoArena();
}
inline void FullName::set_surname(const ::std::string& value) {
  
  surname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:foo.bar.FullName.surname)
}
#if LANG_CXX11
inline void FullName::set_surname(::std::string&& value) {
  
  surname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:foo.bar.FullName.surname)
}
#endif
inline void FullName::set_surname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  surname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:foo.bar.FullName.surname)
}
inline void FullName::set_surname(const char* value, size_t size) {
  
  surname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:foo.bar.FullName.surname)
}
inline ::std::string* FullName::mutable_surname() {
  
  // @@protoc_insertion_point(field_mutable:foo.bar.FullName.surname)
  return surname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FullName::release_surname() {
  // @@protoc_insertion_point(field_release:foo.bar.FullName.surname)
  
  return surname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FullName::set_allocated_surname(::std::string* surname) {
  if (surname != NULL) {
    
  } else {
    
  }
  surname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), surname);
  // @@protoc_insertion_point(field_set_allocated:foo.bar.FullName.surname)
}

// string patronimic = 3;
inline void FullName::clear_patronimic() {
  patronimic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FullName::patronimic() const {
  // @@protoc_insertion_point(field_get:foo.bar.FullName.patronimic)
  return patronimic_.GetNoArena();
}
inline void FullName::set_patronimic(const ::std::string& value) {
  
  patronimic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:foo.bar.FullName.patronimic)
}
#if LANG_CXX11
inline void FullName::set_patronimic(::std::string&& value) {
  
  patronimic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:foo.bar.FullName.patronimic)
}
#endif
inline void FullName::set_patronimic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  patronimic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:foo.bar.FullName.patronimic)
}
inline void FullName::set_patronimic(const char* value, size_t size) {
  
  patronimic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:foo.bar.FullName.patronimic)
}
inline ::std::string* FullName::mutable_patronimic() {
  
  // @@protoc_insertion_point(field_mutable:foo.bar.FullName.patronimic)
  return patronimic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FullName::release_patronimic() {
  // @@protoc_insertion_point(field_release:foo.bar.FullName.patronimic)
  
  return patronimic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FullName::set_allocated_patronimic(::std::string* patronimic) {
  if (patronimic != NULL) {
    
  } else {
    
  }
  patronimic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), patronimic);
  // @@protoc_insertion_point(field_set_allocated:foo.bar.FullName.patronimic)
}

// -------------------------------------------------------------------

// Student

// .foo.bar.FullName full_name = 1;
inline bool Student::has_full_name() const {
  return this != internal_default_instance() && full_name_ != NULL;
}
inline void Student::clear_full_name() {
  if (GetArenaNoVirtual() == NULL && full_name_ != NULL) {
    delete full_name_;
  }
  full_name_ = NULL;
}
inline const ::foo::bar::FullName& Student::_internal_full_name() const {
  return *full_name_;
}
inline const ::foo::bar::FullName& Student::full_name() const {
  const ::foo::bar::FullName* p = full_name_;
  // @@protoc_insertion_point(field_get:foo.bar.Student.full_name)
  return p != NULL ? *p : *reinterpret_cast<const ::foo::bar::FullName*>(
      &::foo::bar::_FullName_default_instance_);
}
inline ::foo::bar::FullName* Student::release_full_name() {
  // @@protoc_insertion_point(field_release:foo.bar.Student.full_name)
  
  ::foo::bar::FullName* temp = full_name_;
  full_name_ = NULL;
  return temp;
}
inline ::foo::bar::FullName* Student::mutable_full_name() {
  
  if (full_name_ == NULL) {
    auto* p = CreateMaybeMessage<::foo::bar::FullName>(GetArenaNoVirtual());
    full_name_ = p;
  }
  // @@protoc_insertion_point(field_mutable:foo.bar.Student.full_name)
  return full_name_;
}
inline void Student::set_allocated_full_name(::foo::bar::FullName* full_name) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete full_name_;
  }
  if (full_name) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      full_name = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, full_name, submessage_arena);
    }
    
  } else {
    
  }
  full_name_ = full_name;
  // @@protoc_insertion_point(field_set_allocated:foo.bar.Student.full_name)
}

// repeated int32 grades = 2;
inline int Student::grades_size() const {
  return grades_.size();
}
inline void Student::clear_grades() {
  grades_.Clear();
}
inline ::google::protobuf::int32 Student::grades(int index) const {
  // @@protoc_insertion_point(field_get:foo.bar.Student.grades)
  return grades_.Get(index);
}
inline void Student::set_grades(int index, ::google::protobuf::int32 value) {
  grades_.Set(index, value);
  // @@protoc_insertion_point(field_set:foo.bar.Student.grades)
}
inline void Student::add_grades(::google::protobuf::int32 value) {
  grades_.Add(value);
  // @@protoc_insertion_point(field_add:foo.bar.Student.grades)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Student::grades() const {
  // @@protoc_insertion_point(field_list:foo.bar.Student.grades)
  return grades_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Student::mutable_grades() {
  // @@protoc_insertion_point(field_mutable_list:foo.bar.Student.grades)
  return &grades_;
}

// double GPA = 3;
inline void Student::clear_gpa() {
  gpa_ = 0;
}
inline double Student::gpa() const {
  // @@protoc_insertion_point(field_get:foo.bar.Student.GPA)
  return gpa_;
}
inline void Student::set_gpa(double value) {
  
  gpa_ = value;
  // @@protoc_insertion_point(field_set:foo.bar.Student.GPA)
}

// -------------------------------------------------------------------

// StudentsGroup

// repeated .foo.bar.Student student = 1;
inline int StudentsGroup::student_size() const {
  return student_.size();
}
inline void StudentsGroup::clear_student() {
  student_.Clear();
}
inline ::foo::bar::Student* StudentsGroup::mutable_student(int index) {
  // @@protoc_insertion_point(field_mutable:foo.bar.StudentsGroup.student)
  return student_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::foo::bar::Student >*
StudentsGroup::mutable_student() {
  // @@protoc_insertion_point(field_mutable_list:foo.bar.StudentsGroup.student)
  return &student_;
}
inline const ::foo::bar::Student& StudentsGroup::student(int index) const {
  // @@protoc_insertion_point(field_get:foo.bar.StudentsGroup.student)
  return student_.Get(index);
}
inline ::foo::bar::Student* StudentsGroup::add_student() {
  // @@protoc_insertion_point(field_add:foo.bar.StudentsGroup.student)
  return student_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::foo::bar::Student >&
StudentsGroup::student() const {
  // @@protoc_insertion_point(field_list:foo.bar.StudentsGroup.student)
  return student_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace bar
}  // namespace foo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_class_2eproto
