#include <iostream>

int ver = 0, i,sum,sum1,sum2;
std::string card,card1;
void getCard();
void printCard();
void checkCard();
int split(int);
int main(){

    std::string card;
    std::cout << "Valid credit card checker...\n";
    getCard();
    std::cout << "Checking....\n";
    checkCard();
    printCard();
    if(ver == 0){
        std::cout << "The card is invalid,\n";
    }
    else{
        std::cout << "The card is valid.\n";
    }
}

void getCard(){
    std::cout << "Enter the credit card number..\n";
    std::cin >> card;
}

void printCard(){
    std::cout << "You've entered: "<< card << '\n';
}

void checkCard(){
    for(i=0;i<16;i+=2){
        sum+=split((card[i]-'0')*2);
    }
    for(i=1;i<16;i+=2){
        sum1+=(card[i]-'0');
    }
    sum2 = sum + sum1;
    if(sum2 % 10 == 0)
        ver = 1;
}

int split(int num){
    return num%10 + (num/10)%10;
}