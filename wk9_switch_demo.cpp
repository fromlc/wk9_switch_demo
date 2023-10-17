//------------------------------------------------------------------------------
// wk9_switch_demo.cpp
// 
// Demos enum, switch with enum
//------------------------------------------------------------------------------
#include <iostream>

using namespace std;

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
constexpr int ASCII_A = 65;
constexpr int ASCII_Z = 90;

//------------------------------------------------------------------------------
// globals
//------------------------------------------------------------------------------
enum Meals {
    BREAKFAST,
    LUNCH,
    DINNER,
    NUM_MEALS,
};

enum Fruits {
    APPLE = 'A',
    BANANA = 'B',
    ORANGE = 'O',
    PEAR = 'P',
};

//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
char snack_choice();

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    // manually display Meals enum values
    cout << "BREAKFAST=" << BREAKFAST
        << " LUNCH=" << LUNCH
        << " DINNER=" << DINNER
        << " NUM_MEALS=" << NUM_MEALS
        << "\n\n";

    srand((unsigned int)time(0));

    // why declare variable snack outside do-while loop?
    int snack = snack_choice();

    // get user choice and process it
    do {
        snack = snack_choice();

        switch (snack) {
        case (APPLE):
            cout << ">>apple\n";
            break;
        case BANANA:
            cout << ">>banana\n";
            break;
        case ORANGE:
            cout << ">>orange\n";
            break;
        case PEAR:
            cout << ">>pear\n";
            break;
        default:
            cout << "unknown option: " << snack << ' ' << (char)snack << '\n';
            break;
        }

    } while (snack != APPLE);

    cout << "Goodbye!\n";
}

//------------------------------------------------------------------------------
// returns user input as char 
// #TODO code cout prompt and cin, generate random char A-Z for now
//------------------------------------------------------------------------------
char snack_choice() {

    int choice = rand() % (ASCII_Z - ASCII_A + 1) + ASCII_A;
    return (char)choice;
}
