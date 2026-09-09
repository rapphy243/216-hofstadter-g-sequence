#include <iostream>

#include "src/sequence.hpp"

int main() {
  std::cout << "The Hofstadter G Sequence of 1 is " << nativeSequence(1) << std::endl;
  std::cout << "The Hofstadter G Sequence of 2 is " << nativeSequence(2) << std::endl;
  std::cout << "The Hofstadter G Sequence of 3 is " << nativeSequence(3) << std::endl;

  std::cout << "The Hofstadter G Sequence of 1 is " << optimizedSequence(1) << std::endl;
  std::cout << "The Hofstadter G Sequence of 2 is " << optimizedSequence(2) << std::endl;
  std::cout << "The Hofstadter G Sequence of 3 is " << optimizedSequence(3) << std::endl;
}
