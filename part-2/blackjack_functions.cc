// Ibraheem Muhammad
// imuhammad23@csu.fullerton.edu
// @imuhammad23csuf
// Partners: @ctrochez67, @jordang101

#include "blackjack_functions.h"

bool IsAce(const std::string& card_name) {
  // DONE: Use an if statement to decide whether card_name is "A".
  // If so, return true; if not, return false.
  if (card_name == "A") {
    return true;
  }
  return false;
}

bool IsFaceCard(const std::string& card_name) {
  // DONE: Use an if statement to decide whether card_name is one of "J", "Q",
  // or "K".
  // If so, return true; if not, return false.
  if (card_name == "J" || card_name == "Q" || card_name == "K") {
    return true;
  }
  return false;
}

bool IsNumberCard(const std::string& card_name) {
  // DONE: Use an if statement to decide whether card_name is one of "2", "3",
  // "4", ..., "10".
  // If so, return true; if not, return false.
  if (card_name == "2" || card_name == "3" || card_name == "4" ||
      card_name == "5" || card_name == "6" || card_name == "7" ||
      card_name == "8" || card_name == "9" || card_name == "10") {
    return true;
  }
  return false;
}

bool IsCardName(const std::string& str) {
  // DONE: Use an if statement to decide whether card_name is an ace, face
  // card, or number card.
  // If so, return true; if not, return false.
  // HINT: This function may call IsAce, IsFaceCard, and IsNumberCard.
  if (IsAce(str)) {
    return true;
  }
  if (IsFaceCard(str)) {
    return true;
  }
  if (IsNumberCard(str)) {
    return true;
  }
  return false;
}

int CardPoints(const std::string& card_name) {
  // DONE: Write code to calculate the number of points for card_name.
  // HINT: You will probably need to write an if statement.
  // HINT: This function may call IsAce, IsFaceCard, and IsNumberCard.
  if (IsAce(card_name)) {
    return 1;
  } else if (IsFaceCard(card_name)) {
    return 10;
  } else if (IsNumberCard(card_name)) {
    return std::stoi(card_name);
  }
  return 0;
}

bool IsBust(int score) {
  // DONE: Use an if statement to decide whether score is greater than 21.
  if (score > 21) {
    return true;
  }
  return false;
}

int TwoCardHandScore(const std::string& card_1, const std::string& card_2) {
  // DONE: Write code to calculate the score for two cards.
  if (IsBust(CardPoints(card_1) + CardPoints(card_2))) {
    return 0;
  } else if (CardPoints(card_1) + CardPoints(card_2) == 21) {
    return 21;
  } else if (CardPoints(card_1) + CardPoints(card_2) < 21 &&
             (IsAce(card_1) || IsAce(card_2))) {
    return CardPoints(card_1) + CardPoints(card_2) + 10;
  } else {
    return CardPoints(card_1) + CardPoints(card_2);
  }
}
