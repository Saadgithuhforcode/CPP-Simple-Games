#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));

    int guess;
    int tries = 0;

    int randnum = rand()%100 +1;

    cout << "************Welcome to the Number Guesser Game!************" << endl;
    
    do{

    cout << "Please chose a number between 1 and 100: ";
    cin >> guess;
    tries++;

    if(guess > randnum){
        cout << "Your guess is too high! Try again!" << endl;
    }else if(guess < randnum){
        cout << "Your guess is too low! Try again!" << endl;
    }/*else{
        cout << "Congratulations! You guessed the number in " << tries << " tries!" << endl;
    }*/
    }while(guess != randnum);

    cout << "Congratulations! You guessed the number in " << tries << " tries!" << endl;

    return 0;
}