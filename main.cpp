// Copyright 2022. Timothy "TDK" Knox

#include <unistd.h>

#include <iostream>
#include <string>
#include <vector>

extern char **environ;

int main(int argc, const char* argv[]) {
  std::vector<std::string> args;

  for (int i = 0; i < argc; ++i) {
    std::cout << argv[i] << std::endl;
    args.push_back(argv[i]);
  }

  std::cout << "environ[]" << std::endl;

  for (int i = 0; environ[i] != nullptr; ++i) {
    std::cout << environ[i] << std::endl;
  }

  return 0;
}

