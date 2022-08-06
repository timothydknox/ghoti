// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include <cstdint>
#include <variant>

#include "word.hpp"

namespace Ghoti {

using Cell = std::variant<std::int64_t, Word::WordFunc>;

}  // namespace Ghoti

