#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);

    while(running){
        // Player move
        playMove(spaces, player);
        drawBoard(spaces);

        if(checkWinner(spaces, player, computer)){
            std::cout << "You win!\n";
            break;
        }
        else if(checkTie(spaces)){
            std::cout << "It's a tie!\n";
            break;
        }

        // Computer move
        computerMove(spaces, computer);
        drawBoard(spaces);

        if(checkWinner(spaces, player, computer)){
            std::cout << "Computer wins!\n";
            break;
        }
        else if(checkTie(spaces)){
            std::cout << "It's a tie!\n";
            break;
        }
    }

    return 0;
}

void drawBoard(char *spaces){
    std::cout << '\n';
    std::cout << "     |     |     "  << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << '\n';
    std::cout << "_____|_____|_____"  << '\n';
    std::cout << "     |     |     "  << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << '\n';
    std::cout << "_____|_____|_____"  << '\n';
    std::cout << "     |     |     "  << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}

void playMove(char *spaces, char player){
    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--; // convert to 0–8 index

        if(number >= 0 && number <= 8 && spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
        else{
            std::cout << "Invalid move! Try again.\n";
        }
    }while(true);
}

void computerMove(char *spaces, char computer){
    int number;
    srand(time(0));
    while(true){
        number = rand() % 9; // random 0–8
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer){
    int wins[8][3] = {
        {0,1,2}, {3,4,5}, {6,7,8}, // rows
        {0,3,6}, {1,4,7}, {2,5,8}, // columns
        {0,4,8}, {2,4,6}           // diagonals
    };

    for(int i=0; i<8; i++){
        if(spaces[wins[i][0]] != ' ' &&
           spaces[wins[i][0]] == spaces[wins[i][1]] &&
           spaces[wins[i][1]] == spaces[wins[i][2]]){
            return true;
        }
    }
    return false;
}

bool checkTie(char *spaces){
    for(int i=0; i<9; i++){
        if(spaces[i] == ' ') return false;
    }
    return true;
}
