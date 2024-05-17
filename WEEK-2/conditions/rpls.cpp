#include <iostream>
#include <cstdlib>
#include <ctime>

enum Gesture { ROCK, PAPER, SCISSORS, LIZARD, SPOCK };

std::string gestureToString(Gesture gesture) {
    switch (gesture) {
        case ROCK: return "Rock";
        case PAPER: return "Paper";
        case SCISSORS: return "Scissors";
        case LIZARD: return "Lizard";
        case SPOCK: return "Spock";
        default: return "Unknown";
    }
}

Gesture getComputerChoice() {
    return static_cast<Gesture>(rand() % 5);
}

bool doesFirstGestureWin(Gesture first, Gesture second) {
    return (first == ROCK && (second == SCISSORS || second == LIZARD)) ||
           (first == PAPER && (second == ROCK || second == SPOCK)) ||
           (first == SCISSORS && (second == PAPER || second == LIZARD)) ||
           (first == LIZARD && (second == PAPER || second == SPOCK)) ||
           (first == SPOCK && (second == SCISSORS || second == ROCK));
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    std::cout << "======================\n";
    std::cout << "Rock Paper Scissors Lizard Spock! \n";
    std::cout << "======================\n";
    std::cout << "You have 20 tries. Let's begin!\n";

    int totalPlays = 20;

    for (int play = 1; play <= totalPlays; ++play) {
        std::cout << "\nPlay " << play << " of " << totalPlays << std::endl;

        std::cout << "0) ✊ (Rock)\n";
        std::cout << "1) ✋ (Paper)\n";
        std::cout << "2) ✌️ (Scissors)\n";
        std::cout << "3) 🦎 (Lizard)\n";
        std::cout << "4) 🖖 (Spock)\n";

        std::cout << "Shoot! ";

        int userChoice;
        std::cin >> userChoice;

        if (userChoice < 0 || userChoice > 4) {
            std::cout << "Invalid choice!" << std::endl;
            --play;  // Retry the current play
            continue;
        }

        Gesture userGesture = static_cast<Gesture>(userChoice);
        Gesture computerGesture = getComputerChoice();

        std::cout << "Your random number is " << computerGesture << std::endl;
        std::cout << "You chose: " << gestureToString(userGesture) << std::endl;
        std::cout << "Computer chose: " << gestureToString(computerGesture) << std::endl;

        if (userGesture == computerGesture) {
            std::cout << "It's a tie!" << std::endl;
        } else if (doesFirstGestureWin(userGesture, computerGesture)) {
            std::cout << "You win!" << std::endl;
        } else {
            std::cout << "Computer wins!" << std::endl;
        }

        std::cout << "Remaining plays: " << totalPlays - play << std::endl;
    }

    std::cout << "\nGame over! Thanks for playing.\n";
    return 0;
}
