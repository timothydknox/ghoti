// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include <string>
#include <vector>
#include <utility>

#include "environment.hpp"
#include "stack.hpp"
#include "dictionary.hpp"

namespace Ghoti {

using Args = std::vector<std::string>;

class Ghoti {
  public:
    explicit Ghoti(Args _args, Environment _env)
      : args(std::move(_args)), env(std::move(_env)), dataStack(), returnStack()
    {}

    int run() noexcept;

    Stack& getData() {
      return dataStack;
    }

    Stack& getReturn() {
      return returnStack;
    }

  private:
    void reset() noexcept;

    Args args;
    Environment env;
    Stack dataStack;
    Stack returnStack;
    Dictionary words;
};

}  // namespace Ghoti
