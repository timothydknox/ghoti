// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include <memory>
#include <vector>

#include "ghoti.hpp"
#include "cell.hpp"

namespace Ghoti {

class IStack {
  public:
    IStack() {}

    void run(Ghoti& ghoti) const;

  private:
    std::vector<std::shared_ptr<Cell>> iStack;
};

}  // namespace Ghoti
