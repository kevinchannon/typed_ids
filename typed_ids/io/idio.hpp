#pragma once

#include "../id.hpp"

#include <iostream>

///////////////////////////////////////////////////////////////////////////////

namespace typed {

///////////////////////////////////////////////////////////////////////////////

template<typename Id_T, typename Value_T>
std::ostream& operator<<(std::ostream& os, const id< Id_T, Value_T >& x) {
  os << x.get();

  return os;
}

///////////////////////////////////////////////////////////////////////////////

}  // namespace typed

///////////////////////////////////////////////////////////////////////////////
