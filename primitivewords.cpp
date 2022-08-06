// Copyright 2022. Timothy "TDK" Knox

#include "ghoti.hpp"
#include "word.hpp"
#include "cell.hpp"

namespace Ghoti {

Word::Words Word::startupWords = {};

void Word::addToStartup(Word&& word) {
  Word::startupWords.emplace_back(word);
}

void Dup(Ghoti& ghoti) {
  auto ds = ghoti.getData();
  auto lhs = ds.pop();

  ds.push(lhs);
  ds.push(lhs);
}


void Add(Ghoti& ghoti) {
  auto ds = ghoti.getData();
  auto lhs = ds.pop();
  auto rhs = ds.pop();

  ds.push(Cell(std::get<std::int64_t>(lhs) + std::get<std::int64_t>(rhs)));
}

void Sub(Ghoti& ghoti) {
  auto ds = ghoti.getData();
  auto lhs = ds.pop();
  auto rhs = ds.pop();

  ds.push(Cell(std::get<std::int64_t>(lhs) - std::get<std::int64_t>(rhs)));
}

void Mul(Ghoti& ghoti) {
  auto ds = ghoti.getData();
  auto lhs = ds.pop();
  auto rhs = ds.pop();

  ds.push(Cell(std::get<std::int64_t>(lhs) * std::get<std::int64_t>(rhs)));
}

void Div(Ghoti& ghoti) {
  auto ds = ghoti.getData();
  auto lhs = ds.pop();
  auto rhs = ds.pop();

  ds.push(Cell(std::get<std::int64_t>(lhs) / std::get<std::int64_t>(rhs)));
}

void Mod(Ghoti& ghoti) {
  auto ds = ghoti.getData();
  auto lhs = ds.pop();
  auto rhs = ds.pop();

  ds.push(Cell(std::get<std::int64_t>(lhs) % std::get<std::int64_t>(rhs)));
}

void DivMod(Ghoti& ghoti) {
  auto ds = ghoti.getData();
  auto lhs = ds.pop();
  auto rhs = ds.pop();

  ds.push(Cell(std::get<std::int64_t>(lhs) % std::get<std::int64_t>(rhs)));
  ds.push(Cell(std::get<std::int64_t>(lhs) / std::get<std::int64_t>(rhs)));
}

void Word::initStartupWords() {
  Word::addToStartup(Word("dup", Dup, Dup));
  Word::addToStartup(Word("+", Add, Add));
  Word::addToStartup(Word("-", Sub, Sub));
  Word::addToStartup(Word("*", Mul, Mul));
  Word::addToStartup(Word("/", Div, Div));
  Word::addToStartup(Word("mod", Mod, Mod));
  Word::addToStartup(Word("/mod", DivMod, DivMod));
}

};  // namespace Ghoti
