#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()
#include <string>  // Required for using the string type

using namespace std;

int main() {
    // Array containing possible responses from the Magic 8-Ball
    string responses[] = {
        "It is certain.", "It is decidedly so.", "Without a doubt.",
        "Yes - definitely.", "You may rely on it.", "As I see it, yes.",
        "Most likely.", "Outlook good.", "Yes.", "Signs point to yes.",
        "Reply hazy, try again.", "Ask again later.", "Better not tell you now.",
        "Cannot predict now.", "Concentrate and ask again.",
        "Don't count on it.", "My reply is no.", "My sources say no.",
        "Outlook not so good.", "Very doubtful."
    };
    int num_responses = sizeof(responses) / sizeof(string);

    cout << "Number of responses = " << num_responses;

    // Initialize random seed
    srand(time(0));

    // Variables to store user input
    string question;

    // Prompt user for a question
    cout << "Magic 8-Ball, please enter your question: ";
    getline(cin, question);

    // Generate a random index and use it to select a response
    int index = rand() % num_responses;
    string answer = responses[index];

    // Output the Magic 8-Ball's response
    cout << "Magic 8-Ball says: " << answer << endl;

    return 0;
}
