#include <iostream>

int main(){
    std::cout << "**********************";
    std::cout << "QUIZ...c PLUS PLUS....\n\n";
    std::string MCQ[20][2] = {{{"What is the main purpose of the 'using' keyword in C++?\n"},
                               {"A) To declare a variable\nB) To import a namespace\nC) To define a function\nD) To include a library\n"}},
                              {{"Which of the following is a correct way to declare a constant in C++?\n"},
                               {"A) const int x = 5;\nB) int const x = 5;\nC) Both A and B\nD) Neither A nor B"}}};
    char Att[20][2];
    char Ans[20][2];
    std::cout << "Answer the following:\n";
    for(int i = 0; i<2;i++){
        for (int j = 0 ; j<2;j++){
            std::cout << MCQ[i][j];
            std::cin >> Att[i][j];
            if(Att[i][j] == Ans[i][j]{
                
            })
        }
    }

    return 0;
}