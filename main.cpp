#include <iostream>

#include "Filed.h"
#include "Figure.cpp"

int main(){
    char again = 'y';
    int row = 0;
    int col = 0;
    bool game = true;
    Figure f;
    X x;
    O o;
    Field field(width, height);
    while(again == 'y' || again == 'Y'){
        while(game){
            std::cout << "Choose row for your move: ";
            std::cin >> row;
            std::cout << "Choose col for your move: ";
            std::cin >> col;

            if(field.isFree(row, col)){
                field.move(row, col, user);
            }

            field.print();

            if(field.isFree(row, col)){
                field.move(row, col, computer);
            }
        }
        field.clear();

        std::cout << "Would you like to play again? (y/n): ";
        std::cin >> again;
    }
    return 0;
}