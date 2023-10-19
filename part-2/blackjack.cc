// Ibraheem Muhammad
// imuhammad23@csu.fullerton.edu
// @imuhammad23csuf
// Partners: @ctrochez67, @jordang101

#include <iostream>
#include <string>
#include <vector>

#include "blackjack_functions.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);

  if (arguments.size() != 3) {
    std::cout << "error: you must supply two arguments" << std::endl;
    return 1;
  }
  std::string first_card_name = arguments[1];
  std::string second_card_name = arguments[2];

  if (!IsCardName(first_card_name) || !IsCardName(second_card_name)) {
    std::cout << "error: invalid card name" << std::endl;
    return 1;
  }

  int total_score = TwoCardHandScore(first_card_name, second_card_name);
  std::cout << total_score << std::endl;
  return 0;
}
