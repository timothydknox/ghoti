// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include <functional>
#include <vector>
#include <utility>

#include "ghoti.hpp"

namespace Ghoti {

class Word {
  public:
    using WordFunc = std::function<void(Ghoti&)>;
    using Words = std::vector<Word>;

    Word(std::string _name, WordFunc _run)
      : name(std::move(_name)), run(_run)
    {}

    static void addToStartup(Word&& word) {
      startupWords.emplace_back(word);
    }

    static const Words& getWords() {
      return startupWords;
    }


  private:
    std::string name;
    WordFunc run = nullptr;

    static Words startupWords;
};

}  // namespace Ghoti
