// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include <string>
#include <vector>
#include <utility>
#include <unordered_map>

namespace Ghoti {

class Environment {
  public:
    explicit Environment(std::vector<std::string>&& _envp) {
      for (auto e : _envp) {
        auto pos = e.find_first_of('=');
        auto k = e.substr(0, pos);
        auto v = e.substr(pos + 1);

        env.insert(std::make_pair<std::string, std::string>(std::move(k), std::move(v)));
      };

    };

  private:
    std::unordered_map<std::string, std::string> env;
};

}  // namespace Ghoti
