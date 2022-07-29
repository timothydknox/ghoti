// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include <string>
#include <vector>
#include <utility>

#include "environment.hpp"

namespace Ghoti {

class Ghoti {
  public:
    explicit Ghoti(std::vector<std::string> _args, Environment _env)
      : args(std::move(_args)), env(std::move(_env))
    {}

    int run();

  private:
    std::vector<std::string> args;
    Environment env;
};

}  // namespace Ghoti
