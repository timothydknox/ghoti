// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include <vector>

#include "ghoti.hpp"
#include "cell.hpp"

namespace Ghoti {

class Stack {
  public:
    Stack();

  private:
    std::vector<Cell> aStack;
};

}  // namespace Ghoti
