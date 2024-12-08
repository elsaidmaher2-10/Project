#include <iostream>
#include <cstdlib>
using namespace std;

enum Qlevel {
    easy = 1,
    med,
    hard,
    mix
};

enum Top {
    ADD = 1,
    SUB,
    MUL,
    DIV,
    MIX
};

struct Result {
    int user_ch = 0;
    int computer_ch = 0;
};

// Function for getting a valid number from the user within a specific range
int number(string message, int min, int max) {
    int number;
    do {
        cout << message << endl;
        cin >> number;
    } while (number < min || number > max); // Ensuring the number is within the range
    return number;
}

// Function to generate a random number within a given range
int randomnumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

// Function to select a question level and return a random number based on that level
int User_ch(Qlevel level) {
    switch (level) {
    case Qlevel::easy:
        return randomnumber(1, 10);
    case med:
        return randomnumber(10, 20);
    case hard:
        return randomnumber(30, 80);
    case mix:
        return randomnumber(1, 100);
    default:
        return 0; 
    }
}

void choice(Result& REs, int& us_counter, int& comp_counter) {
    // Select level of difficulty for the first and second number
    Qlevel level1 = (Qlevel)number("Enter Question level for first number [1]easy  [2]med   [3]hard   [4]mix ", 1, 4);

    int user_ch1 = User_ch(level1); // First random number based on selected level
    int user_ch2 = User_ch(level1); // Second random number based on level2

    REs.user_ch = 0;
    REs.computer_ch = 0;

    int operationChoice = number("Enter operation level [1] Add  [2] Sub   [3] mul   [4] div [5] mix ", 1, 5);

    switch (operationChoice) {
    case ADD:
        cout << user_ch1 << " + " << user_ch2 << " = ?" << endl;
        REs.computer_ch = user_ch1 + user_ch2;
        cin >> REs.user_ch;
        if (REs.user_ch == REs.computer_ch) {
            system("color 2F");
            us_counter++;
        }
        else {
            system("color 4F");
            comp_counter++;
        }
        break;

    case SUB:
        cout << user_ch1 << " - " << user_ch2 << " = ?" << endl;
        REs.computer_ch = user_ch1 - user_ch2;
        cin >> REs.user_ch;
        if (REs.user_ch == REs.computer_ch) {
            system("color 2F");
            us_counter++;
        }
        else {
            system("color 4F");
            comp_counter++;
        }
        break;

    case MUL:
        cout << user_ch1 << " * " << user_ch2 << " = ?" << endl;
        REs.computer_ch = user_ch1 * user_ch2;
        cin >> REs.user_ch;
        if (REs.user_ch == REs.computer_ch) {
            system("color 2F");
            us_counter++;
        }
        else {
            system("color 4F");
            comp_counter++;
        }
        break;

    case DIV:
        if (user_ch2 != 0) {
            cout << user_ch1 << " / " << user_ch2 << " = ?" << endl;
            REs.computer_ch = user_ch1 / user_ch2;
            cin >> REs.user_ch;
            if (REs.user_ch == REs.computer_ch) {
                system("color 2F");
                us_counter++;
            }
            else {
                system("color 4F");
                comp_counter++;
            }
        }
        else {
            cout << "Cannot divide by zero." << endl;
        }
        break;

    case MIX:
        cout << "Randomly selected operation: ";
        switch (randomnumber(1, 4)) {
        case ADD:
            cout << "Addition\n";
            REs.computer_ch = user_ch1 + user_ch2;
            break;
        case SUB:
            cout << "Subtraction\n";
            REs.computer_ch = user_ch1 - user_ch2;
            break;
        case MUL:
            cout << "Multiplication\n";
            REs.computer_ch = user_ch1 * user_ch2;
            break;
        case DIV:
            if (user_ch2 != 0) {
                cout << "Division\n";
                REs.computer_ch = user_ch1 / user_ch2;
            }
            else {
                cout << "Cannot divide by zero." << endl;
                return; 
            }
            break;
        }
        cin >> REs.user_ch;
        if (REs.user_ch == REs.computer_ch) {
            system("color 2F");
            us_counter++;
        }
        else {
            system("color 4F");
            comp_counter++;
        }
        break;

    default:
        cout << "Invalid operation." << endl;
    }
}

void stratgame(Result& REs, int& us_counter, int& comp_counter) {
    int number_of_round = number("Enter number of Round", 1, 100); 
    for (int i = 0; i < number_of_round; i++) {
        cout << "Question [" << i + 1 << " - " << number_of_round << "]" << endl;
        choice(REs, us_counter, comp_counter);
    }
}

int main() {
    srand(time(0));
    int us_counter = 0, comp_counter = 0;
    Result REs;

    cout << "Hello! Welcome to the Quiz Game!" << endl;
    stratgame(REs, us_counter, comp_counter);
    cout << "User Score: " << us_counter<< endl;

    return 0;
}