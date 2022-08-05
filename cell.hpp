// Copyright 2022. Timothy "TDK" Knox

#pragma once

#include "word.hpp"

namespace Ghoti {

enum class CellType { NUMBER, FUNCTOR };

class Cell {
  public:
    Cell(long _num)
      : cellType(CellType::NUMBER), num(_num)
    {}
    Cell(Word::WordFunc _func)
      : cellType(CellType::FUNCTOR), func(_func)
    {}

    long eval(Ghoti& ghoti) const {
      long retVal = 0;
      if (cellType == CellType::NUMBER) {
        retVal = num;
      } else if (cellType == CellType::FUNCTOR) {
        func(ghoti);
      }

      return retVal;
    }

    bool isNumber() const {
      return cellType == CellType::NUMBER;
    }

  private:
    CellType cellType;
    union {
      long num;
      Word::WordFunc func;
    };
};

}  // namespace Ghoti

