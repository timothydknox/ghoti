// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include "word.hpp"

namespace Ghoti {

class PrimitiveWord : public Word {
  public:
    PrimitiveWord() {}
    ~PrimitiveWord() = default;

  private:
    void run_impl(Ghoti& ghoti) const override;
};

}  // namespace Ghoti
