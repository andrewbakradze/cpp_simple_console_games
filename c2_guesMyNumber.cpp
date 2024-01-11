#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;


int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 1000 + 1;
    int tries = 0, guess;
    cout << "\tWelcome to Guess Му Number\n\n";
    do
    {
        cout << "Enter a guess: ";
        cin >> guess;
        if (guess > secretNumber){
            cout << "\nTOO HIGH!!!";
        }
        else if (guess < secretNumber){
            cout << "\nTOO LOW!!!";
        }
        else{
            cout << "\nTHAT'S IT! You got it in " << tries << "guesses!" << endl;
        }
        ++tries;
        
    } while (!(guess == secretNumber));
    return 0;

}