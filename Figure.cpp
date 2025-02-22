#include <vector>
#include <iostream>

class Figure{
private:
    std::vector<std::vector<char>> field = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
public:
    Figure(){
    }
    
};

class X : public Figure{
private:
std::vector<std::vector<char>> field = {{'\\', ' ', '/'}, {' ', 'X', ' '}, {'/', ' ', '\\'}};
public:
    X(){
    }
};

class O : public Figure{
private:
std::vector<std::vector<char>> field = {{'/', '-', '\\'}, {'|', ' ', '|'}, {'\\', '_', '/'}};
public:
    O(){
    }
};