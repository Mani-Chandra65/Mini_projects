#include <iostream>
#include <ctime>
int User();
int Comp();
void show(char);
void res(int,int);
int main(){

    std::cout << "*********************************\n";
    std::cout << "***Hello!Welcome to the game!****\n";
    std::cout << "*********************************\n";
    char player , computer;
    player = User();
    std::cout << "Your Choice: ";
    show(player);
    computer = Comp();
    std::cout << "Computer's Choice: ";
    show(computer);
    res(player,computer); 
    std::cout << "*********************************\n";


    return 0;
}

int User(){
    int user;
    do{
        std::cout << "Enter your choice from the below!\n";
        std::cout << "*********************************\n";
        std::cout << "1.Rock\n2.Paper\n3.Scissor\n";
        std::cin >> user;
    }while(user>3 || user <1);
    return user;
}
int Comp(){
    int Comp;
    srand(time(0));
    Comp = rand()%3 +1;
    return Comp;
}
void show(char Choice){
    switch(Choice){
        case 1: std::cout << "Rock\n";break;
        case 2: std::cout << "Paper\n";break;
        case 3: std::cout << "Scissor\n";break;
    }
}
void res(int player, int computer){
    switch (computer){
        case 1:{
            if(player == 1){
                printf("It's a tie!\n");
            }
            else if(player == 2){
                printf("You win!\n");
            }
            else {
                printf("You lose!\n");
            }
            break;
        }
        case 2:{
            if(player == 2){
                printf("It's a tie!\n");
            }
            else if(player == 3){
                printf("You win!\n");
            }
            else {
                printf("You lose!\n");
            }
            break;
        }
        case 3:{
            if(player == 3){
                printf("It's a tie!\n");
            }
            else if(player == 1){
                printf("You win!\n");
            }
            else {
                printf("You lose!\n");
            }
            break;
        }

    }
}