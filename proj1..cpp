#include <iostream>
#include <time.h>
using namespace std;
int main() {
  // Sets the random() seed to a relatively random number
  srand(time(0));
  // Variables are defined
  int RandomNumber = rand() % 200 + 1, UserSelection, Tries = 5;
  // Gets a number from the user
  cout << " Guess a number between 101 and 200, you have five tries to find "
          "the correct number.\n :";
  cin >> UserSelection;
  // Prevents the user from selecting a number out of bounds
  while (UserSelection > 200 || UserSelection < 101) {
    cout << " I said between 101 and 200. select a new number BETWEEN 101 AND "
            "200!\n :";
    cin >> UserSelection;
  }
  // Stuck in while till they guess right, or run out of tries
  while (UserSelection != RandomNumber) {
    // kicks user from the loop when they run out of tries
    Tries -= 1;
    if (Tries == 0) {
      break;
    }
    // Tells the user they got the wrong number and how many tries they have
    // left
    cout << " The Number was not correct, you have " << Tries
         << " more Guess(es) left.";
    // Tells the user if they are above the number
    if (UserSelection > RandomNumber) {
      cout << " Try guessing a little lower\n :";
    }
    // Tells the user if they are bellow the number
    else if (UserSelection < RandomNumber) {
      cout << " Try guessing a little higher\n :";
    }
    // User input if the number is wrong they stay in the loop, if they are
    // right they fail the condition for the loop and get dialogue according to
    // how many tries they have left
    cin >> UserSelection;
    // Prevents the user from selecting a number out of bounds
    // If the number is greater than 200 or less than 101 they are prompted to
    // select a new number
    while (UserSelection > 200 || UserSelection < 101) {
      cout << " I said between 101 and 200. select a new number BETWEEN 101 "
              "AND 200!\n :";
      cin >> UserSelection;
    }
  }
  // The amount of tries the user has left determines what dialogue they get
  // First try win
  if (Tries == 5) {
    cout << " That's not luck, that's skill. you got the number right on the "
            "first try.\n ";
    system("pause");
  }
  // Second try win
  else if (Tries == 4) {
    cout << " That's pretty good luck, you guessed it right on the second "
            "try.\n ";
    system("pause");
  }
  // Third try win
  else if (Tries == 3) {
    cout << " Could be better, but it could also be way worse. You got it "
            "right on the third try.\n ";
    system("pause");
  }
  // Fourth try win
  else if (Tries == 2) {
    cout << " Could be worse, but it could also be a lot better. You got it "
            "right on your fourth try.\n ";
    system("pause");
  }
  // Fifth try win
  else if (Tries == 1) {
    cout << " I hope you don't gamble much. You got it right on your last "
            "guess.\n ";
    system("pause");
  }
  // Losing dialogue
  else {
    cout << " You guessed wrong all five times, the right number was "
         << RandomNumber << "\n ";
  }
  return 0;
}