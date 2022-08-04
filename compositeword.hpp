// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include "word.hpp"

namespace Ghoti {

class CompositeWord : public Word {
  public:
    CompositeWord() {}
    ~CompositeWord() = default;

  private:
    void run_impl(Ghoti& ghoti) const override;
};

}  // namespace Ghoti

