// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include "word.hpp"

namespace Ghoti {

class Dictionary {
  public:
    Dictionary() {}
    void reset();

  private:
    Word::Words words;
};

}  // namespace Ghoti
