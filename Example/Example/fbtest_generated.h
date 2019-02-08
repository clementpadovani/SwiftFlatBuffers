// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FBTEST_H_
#define FLATBUFFERS_GENERATED_FBTEST_H_

#include "flatbuffers/flatbuffers.h"

struct Vec3;

struct Ability;

struct Stat;

struct Monster;

enum Color {
  Color_Red = 1,
  Color_Green = 2,
  Color_Blue = 8,
  Color_NONE = 0,
  Color_ANY = 11
};

inline const char **EnumNamesColor() {
  static const char *names[] = {
    "Red",
    "Green",
    "",
    "",
    "",
    "",
    "",
    "Blue",
    nullptr
  };
  return names;
}

inline const char *EnumNameColor(Color e) {
  const size_t index = static_cast<int>(e) - static_cast<int>(Color_Red);
  return EnumNamesColor()[index];
}

enum Any {
  Any_NONE = 0,
  Any_Monster = 1,
  Any_Stat = 2,
  Any_MIN = Any_NONE,
  Any_MAX = Any_Stat
};

inline const char **EnumNamesAny() {
  static const char *names[] = {
    "NONE",
    "Monster",
    "Stat",
    nullptr
  };
  return names;
}

inline const char *EnumNameAny(Any e) {
  const size_t index = static_cast<int>(e);
  return EnumNamesAny()[index];
}

template<typename T> struct AnyTraits {
  static const Any enum_value = Any_NONE;
};

template<> struct AnyTraits<Monster> {
  static const Any enum_value = Any_Monster;
};

template<> struct AnyTraits<Stat> {
  static const Any enum_value = Any_Stat;
};

bool VerifyAny(flatbuffers::Verifier &verifier, const void *obj, Any type);
bool VerifyAnyVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(16) Vec3 FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;
  int32_t padding0__;
  double test1_;
  int8_t test2_;
  int8_t padding1__;  int16_t padding2__;  int32_t padding3__;

 public:
  Vec3() {
    memset(this, 0, sizeof(Vec3));
  }
  Vec3(const Vec3 &_o) {
    memcpy(this, &_o, sizeof(Vec3));
  }
  Vec3(float _x, float _y, float _z, double _test1, Color _test2)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)),
        padding0__(0),
        test1_(flatbuffers::EndianScalar(_test1)),
        test2_(flatbuffers::EndianScalar(static_cast<int8_t>(_test2))),
        padding1__(0),
        padding2__(0),
        padding3__(0) {
    (void)padding0__;
    (void)padding1__;    (void)padding2__;    (void)padding3__;
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
  double test1() const {
    return flatbuffers::EndianScalar(test1_);
  }
  Color test2() const {
    return static_cast<Color>(flatbuffers::EndianScalar(test2_));
  }
};
FLATBUFFERS_STRUCT_END(Vec3, 32);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Ability FLATBUFFERS_FINAL_CLASS {
 private:
  uint32_t id_;
  uint32_t distance_;

 public:
  Ability() {
    memset(this, 0, sizeof(Ability));
  }
  Ability(const Ability &_o) {
    memcpy(this, &_o, sizeof(Ability));
  }
  Ability(uint32_t _id, uint32_t _distance)
      : id_(flatbuffers::EndianScalar(_id)),
        distance_(flatbuffers::EndianScalar(_distance)) {
  }
  uint32_t id() const {
    return flatbuffers::EndianScalar(id_);
  }
  bool KeyCompareLessThan(const Ability *o) const {
    return id() < o->id();
  }
  int KeyCompareWithValue(uint32_t val) const {
    const auto key = id();
    return static_cast<int>(key > val) - static_cast<int>(key < val);
  }
  uint32_t distance() const {
    return flatbuffers::EndianScalar(distance_);
  }
};
FLATBUFFERS_STRUCT_END(Ability, 8);

struct Stat FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_VAL = 6,
    VT_COUNT = 8
  };
  const flatbuffers::String *id() const {
    return GetPointer<const flatbuffers::String *>(VT_ID);
  }
  int64_t val() const {
    return GetField<int64_t>(VT_VAL, 0);
  }
  uint16_t count() const {
    return GetField<uint16_t>(VT_COUNT, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_ID) &&
           verifier.Verify(id()) &&
           VerifyField<int64_t>(verifier, VT_VAL) &&
           VerifyField<uint16_t>(verifier, VT_COUNT) &&
           verifier.EndTable();
  }
};

struct StatBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(flatbuffers::Offset<flatbuffers::String> id) {
    fbb_.AddOffset(Stat::VT_ID, id);
  }
  void add_val(int64_t val) {
    fbb_.AddElement<int64_t>(Stat::VT_VAL, val, 0);
  }
  void add_count(uint16_t count) {
    fbb_.AddElement<uint16_t>(Stat::VT_COUNT, count, 0);
  }
  StatBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  StatBuilder &operator=(const StatBuilder &);
  flatbuffers::Offset<Stat> Finish() {
    const auto end = fbb_.EndTable(start_, 3);
    auto o = flatbuffers::Offset<Stat>(end);
    return o;
  }
};

inline flatbuffers::Offset<Stat> CreateStat(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> id = 0,
    int64_t val = 0,
    uint16_t count = 0) {
  StatBuilder builder_(_fbb);
  builder_.add_val(val);
  builder_.add_id(id);
  builder_.add_count(count);
  return builder_.Finish();
}

inline flatbuffers::Offset<Stat> CreateStatDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *id = nullptr,
    int64_t val = 0,
    uint16_t count = 0) {
  return CreateStat(
      _fbb,
      id ? _fbb.CreateString(id) : 0,
      val,
      count);
}

struct Monster FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_POS = 4,
    VT_MANA = 6,
    VT_HP = 8,
    VT_NAME = 10,
    VT_INVENTORY = 14,
    VT_COLOR = 16,
    VT_TESTARRAYOFTABLES = 18,
    VT_TESTARRAYOFSTRING = 20,
    VT_TESTARRAYOFBOOLS = 22,
    VT_TESTARRAYOFSORTEDSTRUCT = 24,
    VT_TEST_TYPE = 26,
    VT_TEST = 28
  };
  const Vec3 *pos() const {
    return GetStruct<const Vec3 *>(VT_POS);
  }
  int16_t mana() const {
    return GetField<int16_t>(VT_MANA, 150);
  }
  int16_t hp() const {
    return GetField<int16_t>(VT_HP, 100);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool KeyCompareLessThan(const Monster *o) const {
    return *name() < *o->name();
  }
  int KeyCompareWithValue(const char *val) const {
    return strcmp(name()->c_str(), val);
  }
  const flatbuffers::Vector<uint8_t> *inventory() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_INVENTORY);
  }
  Color color() const {
    return static_cast<Color>(GetField<int8_t>(VT_COLOR, 8));
  }
  const flatbuffers::Vector<flatbuffers::Offset<Stat>> *testarrayoftables() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Stat>> *>(VT_TESTARRAYOFTABLES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *testarrayofstring() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_TESTARRAYOFSTRING);
  }
  const flatbuffers::Vector<uint8_t> *testarrayofbools() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_TESTARRAYOFBOOLS);
  }
  const flatbuffers::Vector<const Ability *> *testarrayofsortedstruct() const {
    return GetPointer<const flatbuffers::Vector<const Ability *> *>(VT_TESTARRAYOFSORTEDSTRUCT);
  }
  Any test_type() const {
    return static_cast<Any>(GetField<uint8_t>(VT_TEST_TYPE, 0));
  }
  const void *test() const {
    return GetPointer<const void *>(VT_TEST);
  }
  template<typename T> const T *test_as() const;
  const Monster *test_as_Monster() const {
    return test_type() == Any_Monster ? static_cast<const Monster *>(test()) : nullptr;
  }
  const Stat *test_as_Stat() const {
    return test_type() == Any_Stat ? static_cast<const Stat *>(test()) : nullptr;
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Vec3>(verifier, VT_POS) &&
           VerifyField<int16_t>(verifier, VT_MANA) &&
           VerifyField<int16_t>(verifier, VT_HP) &&
           VerifyOffsetRequired(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyOffset(verifier, VT_INVENTORY) &&
           verifier.Verify(inventory()) &&
           VerifyField<int8_t>(verifier, VT_COLOR) &&
           VerifyOffset(verifier, VT_TESTARRAYOFTABLES) &&
           verifier.Verify(testarrayoftables()) &&
           verifier.VerifyVectorOfTables(testarrayoftables()) &&
           VerifyOffset(verifier, VT_TESTARRAYOFSTRING) &&
           verifier.Verify(testarrayofstring()) &&
           verifier.VerifyVectorOfStrings(testarrayofstring()) &&
           VerifyOffset(verifier, VT_TESTARRAYOFBOOLS) &&
           verifier.Verify(testarrayofbools()) &&
           VerifyOffset(verifier, VT_TESTARRAYOFSORTEDSTRUCT) &&
           verifier.Verify(testarrayofsortedstruct()) &&
           VerifyField<uint8_t>(verifier, VT_TEST_TYPE) &&
           VerifyOffset(verifier, VT_TEST) &&
           VerifyAny(verifier, test(), test_type()) &&
           verifier.EndTable();
  }
};

template<> inline const Monster *Monster::test_as<Monster>() const {
  return test_as_Monster();
}

template<> inline const Stat *Monster::test_as<Stat>() const {
  return test_as_Stat();
}

struct MonsterBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_pos(const Vec3 *pos) {
    fbb_.AddStruct(Monster::VT_POS, pos);
  }
  void add_mana(int16_t mana) {
    fbb_.AddElement<int16_t>(Monster::VT_MANA, mana, 150);
  }
  void add_hp(int16_t hp) {
    fbb_.AddElement<int16_t>(Monster::VT_HP, hp, 100);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Monster::VT_NAME, name);
  }
  void add_inventory(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> inventory) {
    fbb_.AddOffset(Monster::VT_INVENTORY, inventory);
  }
  void add_color(Color color) {
    fbb_.AddElement<int8_t>(Monster::VT_COLOR, static_cast<int8_t>(color), 8);
  }
  void add_testarrayoftables(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Stat>>> testarrayoftables) {
    fbb_.AddOffset(Monster::VT_TESTARRAYOFTABLES, testarrayoftables);
  }
  void add_testarrayofstring(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> testarrayofstring) {
    fbb_.AddOffset(Monster::VT_TESTARRAYOFSTRING, testarrayofstring);
  }
  void add_testarrayofbools(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> testarrayofbools) {
    fbb_.AddOffset(Monster::VT_TESTARRAYOFBOOLS, testarrayofbools);
  }
  void add_testarrayofsortedstruct(flatbuffers::Offset<flatbuffers::Vector<const Ability *>> testarrayofsortedstruct) {
    fbb_.AddOffset(Monster::VT_TESTARRAYOFSORTEDSTRUCT, testarrayofsortedstruct);
  }
  void add_test_type(Any test_type) {
    fbb_.AddElement<uint8_t>(Monster::VT_TEST_TYPE, static_cast<uint8_t>(test_type), 0);
  }
  void add_test(flatbuffers::Offset<void> test) {
    fbb_.AddOffset(Monster::VT_TEST, test);
  }
  MonsterBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MonsterBuilder &operator=(const MonsterBuilder &);
  flatbuffers::Offset<Monster> Finish() {
    const auto end = fbb_.EndTable(start_, 13);
    auto o = flatbuffers::Offset<Monster>(end);
    fbb_.Required(o, Monster::VT_NAME);
    return o;
  }
};

inline flatbuffers::Offset<Monster> CreateMonster(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Vec3 *pos = 0,
    int16_t mana = 150,
    int16_t hp = 100,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> inventory = 0,
    Color color = Color_Blue,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Stat>>> testarrayoftables = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> testarrayofstring = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> testarrayofbools = 0,
    flatbuffers::Offset<flatbuffers::Vector<const Ability *>> testarrayofsortedstruct = 0,
    Any test_type = Any_NONE,
    flatbuffers::Offset<void> test = 0) {
  MonsterBuilder builder_(_fbb);
  builder_.add_test(test);
  builder_.add_testarrayofsortedstruct(testarrayofsortedstruct);
  builder_.add_testarrayofbools(testarrayofbools);
  builder_.add_testarrayofstring(testarrayofstring);
  builder_.add_testarrayoftables(testarrayoftables);
  builder_.add_inventory(inventory);
  builder_.add_name(name);
  builder_.add_pos(pos);
  builder_.add_hp(hp);
  builder_.add_mana(mana);
  builder_.add_test_type(test_type);
  builder_.add_color(color);
  return builder_.Finish();
}

inline flatbuffers::Offset<Monster> CreateMonsterDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Vec3 *pos = 0,
    int16_t mana = 150,
    int16_t hp = 100,
    const char *name = nullptr,
    const std::vector<uint8_t> *inventory = nullptr,
    Color color = Color_Blue,
    const std::vector<flatbuffers::Offset<Stat>> *testarrayoftables = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *testarrayofstring = nullptr,
    const std::vector<uint8_t> *testarrayofbools = nullptr,
    const std::vector<const Ability *> *testarrayofsortedstruct = nullptr,
    Any test_type = Any_NONE,
    flatbuffers::Offset<void> test = 0) {
  return CreateMonster(
      _fbb,
      pos,
      mana,
      hp,
      name ? _fbb.CreateString(name) : 0,
      inventory ? _fbb.CreateVector<uint8_t>(*inventory) : 0,
      color,
      testarrayoftables ? _fbb.CreateVector<flatbuffers::Offset<Stat>>(*testarrayoftables) : 0,
      testarrayofstring ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*testarrayofstring) : 0,
      testarrayofbools ? _fbb.CreateVector<uint8_t>(*testarrayofbools) : 0,
      testarrayofsortedstruct ? _fbb.CreateVector<const Ability *>(*testarrayofsortedstruct) : 0,
      test_type,
      test);
}

inline bool VerifyAny(flatbuffers::Verifier &verifier, const void *obj, Any type) {
  switch (type) {
    case Any_NONE: {
      return true;
    }
    case Any_Monster: {
      auto ptr = reinterpret_cast<const Monster *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Any_Stat: {
      auto ptr = reinterpret_cast<const Stat *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return false;
  }
}

inline bool VerifyAnyVector(flatbuffers::Verifier &verifier, const flatbuffers::Vector<flatbuffers::Offset<void>> *values, const flatbuffers::Vector<uint8_t> *types) {
  if (values->size() != types->size()) return false;
  for (flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyAny(
        verifier,  values->Get(i), types->GetEnum<Any>(i))) {
      return false;
    }
  }
  return true;
}

inline const Monster *GetMonster(const void *buf) {
  return flatbuffers::GetRoot<Monster>(buf);
}

inline bool VerifyMonsterBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Monster>(nullptr);
}

inline void FinishMonsterBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Monster> root) {
  fbb.Finish(root);
}

#endif  // FLATBUFFERS_GENERATED_FBTEST_H_
