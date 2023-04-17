#include <iostream>
#include <stdlib.h>

/* This program emulates logic from the famous game rock, paper, scissors, lizard, spock, in
The Big Bang Theory*/

int main() {
  // Menu
  std::cout << "ROCK PAPER SCISSORS\n\n";
  std::cout << "Choose your weapon:\n";
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";
  //User input
  int user;
  std::cin >> user;

  // Computers Logic
  srand(time(NULL));
  int computer = std::rand() % 5 + 1;
  std::cout << computer << "\n";

  // Winner & Loser logic
  if (user == computer) {

    std::cout << "TIE\n";

  } else if (user == 1 && computer == 2) {

    std::cout << "You LOSE!\n";

  } else if (user == 2 && computer == 1) {

    std::cout << "You WIN!\n";

  } else if (user == 2 && computer == 3) {

    std::cout << "you LOSE!\n";

  } else if (user == 3 && computer == 2) {

    std::cout << "you WIN!\n";

  } else if (user == 3 && computer == 1) {

    std::cout << "you LOSE!\n";

  } else if (user == 1 && computer == 3) {

    std::cout << "you WIN!\n";
// lizard 4,  spock 5
  } else if (user == 4 && computer == 1) {

    std::cout << "you LOSE\n";
    std::cout << "Lizard is crushed by rock\n";

  } else if (user == 1 && computer == 4) {

    std::cout << "you WIN\n";
    std::cout << "Rock crushes lizard\n";

  } else if (user == 4 && computer == 2) {

    std::cout << "you WIN\n";
    std::cout << "Lizard eats paper\n";

  } else if (user == 2 && computer == 4) {

    std::cout << "you LOSE\n";
    std::cout << "Paper is eatin by lizard\n";

  } else if (user == 4 && computer == 3) {

    std::cout << "you LOSE\n";
    std::cout << "Lizard decapitated by scissors\n";

  } else if (user == 3 && computer == 4) {

    std::cout << "you WIN\n";
    std::cout << "Scissors decapitates lizard\n";

  } else if (user == 4 && computer == 5) {

    std::cout << "you WIN\n";
    std::cout << "Lizard poisons Spock\n";

  } else if (user == 5 && computer == 4) {

    std::cout << "you LOSE\n";
    std::cout << "Spock was poisoned by lizard\n";

  } else if (user == 5 && computer == 1) {

    std::cout << "you WIN\n";\
    std::cout << "Spock vaporizes rock\n";

  } else if (user == 1 && computer == 5) {

    std::cout << "you LOSE\n";
    std::cout << "Rock was vaporized by Spock\n";

  } else if (user == 5 && computer == 2) {

    std::cout << "you LOSE\n";
    std::cout << "Paper disproves Spock\n";

  } else if (user == 2 && computer == 5) {

    std::cout << "you WIN\n";
    std::cout << "Paper disproves Spock\n";

  } else if (user == 5 && computer == 3) {

    std::cout << "you WIN\n";
    std::cout << "Spock smashes scissors\n";

  } else if (user == 3 && computer == 5) {

    std::cout << "you LOSE\n";
    std::cout << "Scissors were smashed by Spock\n";

  }



  // Player decision Output

  if (user == 1) {

     std::cout << "User: Rock\n";

  } else if (user == 2) {

    std::cout << "User: Paper\n";

  } else if (user == 3) {

    std::cout << "User: Scissors\n";

  } else if (user == 4) {

    std::cout << "User: Lizard\n";

  } else if (user == 5) {

    std::cout << "User: Spock\n";

  }

  // Computer Decision Output
  if (computer == 1) {

     std::cout << "Computer: Rock\n";

  } else if (computer == 2) {

    std::cout << "Computer: Paper\n";

  } else if (computer == 3) {

    std::cout << "Computer: Scissors\n";

  } else if (computer == 4) {

    std::cout << "Computer: Lizard\n";

  } else if (computer == 5) {

    std::cout << "Copmuter: Spock\n";

  }
}
