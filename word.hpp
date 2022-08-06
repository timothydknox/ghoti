// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include <functional>
#include <string>
#include <vector>
#include <utility>

namespace Ghoti {

class Ghoti;

class Word {
  public:
    using WordFunc = std::function<void(Ghoti&)>;
    using Words = std::vector<Word>;

    Word(std::string _name, WordFunc _run, WordFunc _compile)
      : name(std::move(_name)), run(_run), compile(_compile)
    {}

    static void initStartupWords();

    static void addToStartup(Word&& word);

    static const Words& getWords() {
      return startupWords;
    }


  private:
    std::string name;
    WordFunc run;
    WordFunc compile;

    static Words startupWords;
};

}  // namespace Ghoti
