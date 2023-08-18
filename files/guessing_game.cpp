#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    do{
        if(guessCount < guessLimit){
            cout << "Enter a number: ";
            cin >> guess;
            guessCount++;
        } else{
            outOfGuesses = true;
        }
        

    }while( secretNum != guess && !outOfGuesses);

    if(outOfGuesses){
        cout << "You are out of guesses."<< endl;
    } else {
        cout << "You win" << endl;
    }
    

    return 0;
}