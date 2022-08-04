// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include "ghoti.hpp"

namespace Ghoti {

class Word {
  public:
    Word() {}
    virtual ~Word() = default;

    void run(Ghoti& ghoti) const;

  private:
    virtual void run_impl(Ghoti& ghoti) const;
};

}  // namespace Ghoti
