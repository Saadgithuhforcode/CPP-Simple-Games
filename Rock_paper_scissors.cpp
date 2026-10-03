#include <iostream>
#include <print> 

//made using c++ 23 features

char getUserChoice();
char getCompChoice();

void showChoice(char choice);
void chooseWinner(char player , char comp);

int main(){
    char player;
    char comp;

    std::println("----------------------------");
    std::println("-- Rock , Paper , Scissors --");
    std::println("__________Game! ____________");
    std::println("----------------------------");

    player = getUserChoice();
    std::cout << "Your choice: \n";
    showChoice(player);

    comp = getCompChoice();
    std::cout << "Computer Choice: \n";
    showChoice(comp);

    std::println("The result:");
    chooseWinner(player,comp);
    return 0;
}

char getUserChoice(){

    char player;


    do{
        std::println(" Choose one or the other! ");
        std::println(" 'r' for Rock");
        std::println(" 'P' for Paper");
        std::println(" 's' for Scissors");
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getCompChoice(){
    int num;
    char choice;
    srand(time(0));
    num = (rand() % 3) + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
        default: std::println("BRuh wth!!!");
            return 'r'; 
    }
}

void showChoice(char choice){

    switch(choice){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
        default:
            std::cout << "Invalid choice!\n";
    }
}

void chooseWinner(char player , char comp){

    switch(player){

        case 'r' : 
            if(comp == 'r'){
                std::println(" Its a tie!");
            }else if(comp == 'p'){
                std::println(" You lose!");
            }else{
                std::println(" You win!");
            }
            break;
        case 'p' : 
            if(comp == 'p'){
                std::println(" Its a tie!");
            }else if(comp == 's'){
                std::println(" You lose!");
            }else{
                std::println(" You win!");
            }
            break;
        case 's' : 
            if(comp == 's'){
                std::println(" Its a tie!");
            }else if(comp == 'r'){
                std::println(" You lose!");
            }else{
                std::println(" You win!");
            }
            break;

    }
}