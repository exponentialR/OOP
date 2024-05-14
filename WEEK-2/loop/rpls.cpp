#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string userMove;
    string moves[5] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
    char playAgain = 'y';

    // Seed random number generator
    srand(time(0));

    while (playAgain == 'y') {
        // Computer's move
        int computerMoveIndex = rand() % 5;
        string computerMove = moves[computerMoveIndex];

        // User's move
        cout << "Enter your move (Rock, Paper, Scissors, Lizard, Spock) or 'q' to quit: ";
        cin >> userMove;
        if (userMove == "q") {
            break;
        }

        // Determine the winner
        if (userMove == computerMove) {
            cout << "It's a draw! You both chose " << userMove << ".\n";
        } else if ((userMove == "Rock" && (computerMove == "Scissors" || computerMove == "Lizard")) ||
                   (userMove == "Paper" && (computerMove == "Rock" || computerMove == "Spock")) ||
                   (userMove == "Scissors" && (computerMove == "Paper" || computerMove == "Lizard")) ||
                   (userMove == "Lizard" && (computerMove == "Spock" || computerMove == "Paper")) ||
                   (userMove == "Spock" && (computerMove == "Scissors" || computerMove == "Rock"))) {
            cout << "You win! " << userMove << " beats " << computerMove << ".\n";
        } else {
            cout << "You lose! " << computerMove << " beats " << userMove << ".\n";
        }

        // Ask to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!\n";
    return 0;
}
