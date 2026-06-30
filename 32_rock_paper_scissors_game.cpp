#include<iostream>
#include<ctime>

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

     computer = getComputerChoise();
     std::cout << "Computer choice ";
     showChoice(computer);

     showWinner(player, computer);


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
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num) {
        case 1:  return 'r';
        case 2:  return 'p';
        case 3:  return 's';
    }

    


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
    switch(player)
    {
        case 'r' : if(computer == 'r'){
            std::cout << "it is tie ! \n";


        }
        else if(computer == 'p'){
            std::cout << "You lose";

        }
            else{
            std::cout << "You win  ";
        }
        break;

        case 'p' : if(computer == 'r'){
            std::cout << "You win ! \n";


        }
        else if(computer == 'p'){
            std::cout << "You Tie";

        }
            else{
            std::cout << "You lose  ";
        }
        break;

        case 's' : if(computer == 'r'){
            std::cout << "You lose  ! \n";


        }
        else if(computer == 'p'){
            std::cout << "You win";

        }
            else{
            std::cout << "it's Tie  ";
        }
        break;
        
    }

}