// Copyright 2022. Timothy "TDK" Knox

#include <algorithm>

#include "ghoti.hpp"
#include "word.hpp"
#include "cell.hpp"
#include "dictionary.hpp"

namespace Ghoti {

void Dictionary::reset() {
  words.clear();
  auto startupWords = Word::getWords();
  
  std::copy(startupWords.begin(), startupWords.end(), words.begin());
}

};  // namespace Ghoti
