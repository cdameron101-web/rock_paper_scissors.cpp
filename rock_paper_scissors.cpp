/*
This program plays Rock Paper Scissors against the computer.
The user selects Rock (1), Paper (2), or Scissors (3).
The computer randomly selects Rock, Paper, or Scissors.
The program compares choices and prints the winner.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {

  // Live long and prosper

  srand(time(NULL));

  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n\n";

  std::cout << "shoot! ";
  std::cin >> user;

  std::cout << "\n";

  // Tie
  if (user == computer) {
    std::cout << "It's a tie!\n";
  }
  // User wins cases
  else if ((user == 1 && computer == 3) ||  // Rock beats Scissors
           (user == 2 && computer == 1) ||  // Paper beats Rock
           (user == 3 && computer == 2)) {  // Scissors beats Paper
    std::cout << "You win!\n";
  }
  // Otherwise computer wins
  else {
    std::cout << "Computer wins!\n";
  }

  return 0;
}
