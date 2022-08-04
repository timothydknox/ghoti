// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include <string>
#include <vector>
#include <utility>

#include "environment.hpp"

namespace Ghoti {

using Args = std::vector<std::string>;

class Ghoti {
  public:
    explicit Ghoti(Args _args, Environment _env)
      : args(std::move(_args)), env(std::move(_env))
    {}

    int run() noexcept;

  private:
    void reset() noexcept;

    Args args;
    Environment env;
};

}  // namespace Ghoti
