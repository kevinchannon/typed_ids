
#include "identifiable.hpp"

///////////////////////////////////////////////////////////////////////////////

namespace {

///////////////////////////////////////////////////////////////////////////////

/// <summary>
/// A sheep is identifiable and we use the identifiable_mixin to provide our id-related data and methods.
/// </summary>
struct Sheep : public typed::identifiable_mixin< Sheep, size_t > {
  constexpr Sheep(id_type id) : typed::identifiable_mixin< Sheep, size_t >{id} {}
};

///////////////////////////////////////////////////////////////////////////////

TEST(IdentifiableTests, ConstructWithIdHasTheRightId) {
  constexpr auto x = Sheep{Sheep::id_type{1234}};
  ASSERT_EQ(Sheep::id_type{1234}, x.id());
}

TEST(IdentifiableTests, SettingId) {
  auto x = Sheep{Sheep::id_type{4321}};
  x.set_id(Sheep::id_type{5678});
  ASSERT_EQ(Sheep::id_type{5678}, x.id());
}

///////////////////////////////////////////////////////////////////////////////

}  // namespace

///////////////////////////////////////////////////////////////////////////////
