#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char);
void chooseWinner(char, char);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice is: ";
    showChoice(player);

    computer = getComputerChoice();
}

char getUserChoice(){

    char player;
    std::cout << "Rock Paper-Scissors Game!" << std::endl;

    do {
        std::cout << "Choose one of the following" << std::endl;
        std::cout << "*************************" << std::endl;
        std::cout <<"'r' for rock" << std::endl;
        std::cout <<"'p' for paper" << std::endl;
        std::cout <<"'s' for scissors" << std::endl;
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice(){

}

void showChoice(char choice){
    switch(choice) {
        case 'r':
            std::cout << "Rock" << std::endl;
            break;
        case 'p':
            std::cout << "Paper" << std::endl;
            break;
        case 's':
            std::cout << "Scissors" << std::endl;
            break;
    }
}

void chooseWinner(char player, char computer){

}
