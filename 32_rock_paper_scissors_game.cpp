#include<iostream>

char getUserChoise();
char getComputerChoise();
void showChoice(char choice);
void showWinner(char player, char computer);

int main() {
     char player;
     char computer;

     player = getUserChoise();
     std::cout << "your choice :";
     showChoice(player);
    return 0;
}


char getUserChoise(){
    char player;
    
    do{
    std::cout << "Choise one of the following :  \n"; 
    std::cout << "Rock - paper scissors game :\n";
    std::cout << "****************************** \n";
    std::cout << " 'r' for Rock \n";
    std::cout << " 'p' for Paper \n";
    std::cout << " 's' for Scissors \n";
    std::cin >> player;
    }
    while(player != 'r' && player != 'p' && player != 's');

    return player;


}
char getComputerChoise(){


}
void showChoice(char choice){
    switch(choice)
    {
        case 'r' : std::cout << "Rock \n";
                  break;
        case 'p' : std::cout << "Paper \n";
                    break;
        case 's' : std::cout << "Scissors \n";
                   break;

    }

}
void showWinner(char player, char computer){

}