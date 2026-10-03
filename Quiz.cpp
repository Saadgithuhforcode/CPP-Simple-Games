#include <iostream>

using namespace std;

int main(){

string questions[] = {"1. What year was C++ created?",
                        "2. Is Rust better than C++?",
                            "3. Does Python use a interpreter or a compiler",
                                "4. Does C use a interpreter or a compiler"};

string options[][4]  = {{"A. 1967", "B. 1985", "C. 67 BCE", "D. 1989"},
                        {"A. Yes", "B. No", "C. 'Both are equally good'", "D.STFU"},
                        {"A. Interpreter", "B. Compiler", "C. Both", "D. None"},
                        {"A. Interpreter", "B. Compiler", "C. Both", "D. None"}};

char ans_keys[] = {'B' , 'D' , 'A' , 'B'};

int size = sizeof(questions)/sizeof(questions[0]);
char guess;
int score = 0;

for(int i = 0 ; i < size ; i+= 1){
    std::cout << "----------------------------" << "\n";
    std::cout << questions[i] << "\n";
    std::cout << "----------------------------" << "\n";

    for(int j = 0 ; j < sizeof(options[i])/sizeof(options[i][0]) ; j++){
        std::cout << options[i][j] << "\n";
    }

    std::cin >> guess;
    guess = toupper(guess);

    if(guess == ans_keys[i]){
        std::cout << "CORRECT!" << "\n";
        score += 1;
    }else{
        std::cout << "WRONG!!" << "\n";
        std::cout << "The correct answer was: " << ans_keys[i] << "\n" ; 
    }

}

std::cout << "-----------------------------------" << "\n";
std::cout << "                RESULT             " << "\n";
std::cout << "-----------------------------------" << "\n";
std::cout << "You got " << score << " questions right out of " << size << " questions" << "\n";
std::cout << "You got " << (score/(double)size)*100 <<"%"; 


return 0;
}