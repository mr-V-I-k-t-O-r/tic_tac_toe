#include <iostream>

#include "Filed.h"

int main(){
    char again = 'y';
    int row = 0;
    int col = 0;
    Field field(width, height);
    while(again == 'y' || again == 'Y'){
        while(game){
            std::cout << "Choose row for your move: ";
            std::cin >> row;
            std::cout << "Choose col for your move: ";
            std::cin >> col;
            //check place for move
            
            //make move

            //print field

            //check winner
            
            //make our move

        }
        field.clear();

        std::cout << "Would you like to play again? (y/n): ";
        std::cin >> again;
    }
    return 0;
}