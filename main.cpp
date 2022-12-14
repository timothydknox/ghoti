// Copyright 2022. Timothy "TDK" Knox

#include <unistd.h>

#include <iostream>
#include <string>
#include <vector>
#include <utility>

#include "ghoti.hpp"
#include "environment.hpp"

extern char **environ;

int main(int argc, const char* argv[]) {
  Ghoti::Args args;

  for (int i = 0; i < argc; ++i) {
    args.push_back(argv[i]);
  }

  std::vector<std::string> envp;

  for (int i = 0; environ[i] != nullptr; ++i) {
    envp.push_back(environ[i]);
  }

  Ghoti::Ghoti ghoti(args, Ghoti::Environment(std::move(envp)));

  return ghoti.run();
}

