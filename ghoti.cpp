// Copyright 2022. Timothy "TDK" Knox

#include <stdexcept>

#include "ghoti.hpp"
#include "word.hpp"

namespace Ghoti {

int Ghoti::run() noexcept {
  reset();

  while(true) {
    try {
      // Run things
    }
    catch (std::underflow_error& ue) {
      // Handle it
    }
    catch (std::bad_variant_access& bva) {
      // Handle it
    }
  }

  return 0;
}

void Ghoti::reset() noexcept {
  Word::initStartupWords();
  Ghoti::words.reset();
}

}  // namespace Ghoti
