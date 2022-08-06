// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include <stdexcept>
#include <vector>

#include "cell.hpp"

namespace Ghoti {

class Stack {
  public:
    Stack() = default;
    void push(Cell cell) {
      aStack.push_back(cell);
    }

    Cell pop() {
      if (aStack.empty()) {
        throw std::underflow_error("Stack is empty.");
      }

      auto cell = aStack.back();
      aStack.pop_back();
      return cell;
    }

  private:
    std::vector<Cell> aStack;
};

}  // namespace Ghoti
