#include <iostream>
#include <ctime>

void playerMove(char *game, char move);
void computerMove(char *game, char move);
void drawBoard(char *game);
bool checkWin(char *game,char player,char computer);
bool checkTie(char *game);

int main(){
    char game[] ={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(game);

    while(running){
        playerMove(game,player);
        drawBoard(game);
        if(checkWin(game,player,computer)){
            running = false;
            break;
        }
        else if(checkTie(game)){
            running = false;
            break;
        }

        computerMove(game,computer);
        drawBoard(game);
        if(checkWin(game,player,computer)){
            running = false;
            break;
        }
        else if(checkTie(game)){
            running = false;
            break;
        }
    }
    std::cout << "Thanks for Playing";
}

void playerMove(char *game, char move){
    int num;
    do{
        std::cout << "Enter the number of position you want to place(1-9)";
        std::cin >> num;
        num--;
        if(game[num]== ' '){
            game[num] = move;
            break;
        }
    }while(!num >0 || !num <8);
}
void computerMove(char *game, char move){
    srand(time(NULL));
    int rando;
    while(true){
        rando = rand() %9;
        if(game[rando] == ' '){
            game[rando] = move;
            break;
        }
    }
}
void drawBoard(char *game){
    std::cout << '\n';
    std::cout << "\t   |   |   \n";
    std::cout << "\t "<<game[0]<<" | "<<game[1]<<" | "<<game[2]<<" \n";
    std::cout << "\t___|___|___\n";
    std::cout << "\t   |   |   \n";
    std::cout << "\t "<<game[3]<<" | "<<game[4]<<" | "<<game[5]<<" \n";
    std::cout << "\t___|___|___\n";
    std::cout << "\t   |   |   \n";
    std::cout << "\t "<<game[6]<<" | "<<game[7]<<" | "<<game[8]<<" \n";
    std::cout << "\t   |   |   \n";
    std::cout <<'\n';
}
bool checkWin(char *game,char player,char computer){
    if(game[0]==game[1] && game[1]==game[2] && game[0]!=' '){
        game[0] == 'O'? std::cout << "YOU LOSE!\n": std::cout << "YOU WIN!\n";
    }
    else if(game[3]==game[4] && game[4]==game[5] && game[3]!=' '){
        game[3] == 'O'? std::cout << "YOU LOSE!\n": std::cout << "YOU WIN!\n";
    }
    else if(game[6]==game[7] && game[7]==game[8] && game[6]!=' '){
        game[6] == 'O'? std::cout << "YOU LOSE!\n": std::cout << "YOU WIN!\n";
    }
    else if(game[0]==game[3] && game[3]==game[6] && game[6]!=' '){
        game[0] == 'O'? std::cout << "YOU LOSE!\n": std::cout << "YOU WIN!\n";
    }
    else if(game[1]==game[4] && game[4]==game[7] && game[7]!=' '){
        game[1] == 'O'? std::cout << "YOU LOSE!\n": std::cout << "YOU WIN!\n";
    }
    else if(game[2]==game[5] && game[5]==game[8] && game[8]!=' '){
        game[2] == 'O'? std::cout << "YOU LOSE!\n": std::cout << "YOU WIN!\n";
    }
    else if(game[0]==game[4] && game[4]==game[8] && game[4]!=' '){
        game[0] == 'O'? std::cout << "YOU LOSE!\n": std::cout << "YOU WIN!\n";
    }
    else if(game[2]==game[4] && game[4]==game[6] && game[6]!=' '){
        game[6] == 'O'? std::cout << "YOU LOSE!\n": std::cout << "YOU WIN!\n";
    }
    else{
        return false;
    }
    return true;
}
bool checkTie(char *game){
    for(int i = 0; i< 9; i++){
        if(game[i] != ' ')
           return false;
    }
    std::cout << "IT'S A TIE!\n";
    return true;
}
