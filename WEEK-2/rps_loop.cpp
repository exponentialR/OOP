#include <iostream>
#include <cstdlib>  // For std::rand() and std::srand()
#include <ctime>    // For std::time()

using namespace std;

string getComputerChoice() {
    srand(time(NULL)); // Seed the random number generator with the current time
    int randomNum = rand() % 3; // Generate a random number between 0 and 2
    switch (randomNum) {
        case 0:
            return "Rock";
        case 1:
            return "Paper";
        case 2:
            return "Scissors";
        default:
            return "Rock"; // Default case to avoid uninitialized return value warning
    }
}

string getUserChoice() {
    string choice;
    cout << "Enter Rock, Paper, or Scissors: ";
    cin >> choice;
    // Convert user input to the correct format if needed (optional)
    return choice;
}

void determineWinner(const string& userChoice, const string& computerChoice) {
    if ((userChoice == "Rock" && computerChoice == "Scissors") ||
        (userChoice == "Scissors" && computerChoice == "Paper") ||
        (userChoice == "Paper" && computerChoice == "Rock")) {
        cout << "You win! Computer chose " << computerChoice << ".\n";
        } else if (userChoice == computerChoice) {
            cout << "It's a draw! Both chose " << userChoice << ".\n";
        } else {
            cout << "You lose! Computer chose " << computerChoice << ".\n";
        }
}

int main() {
    string userChoice, computerChoice;
    char playAgain = 'y';

    while (tolower(playAgain) == 'y') {
        userChoice = getUserChoice();
        computerChoice = getComputerChoice();
        determineWinner(userChoice, computerChoice);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing!\n";
    return 0;
}
