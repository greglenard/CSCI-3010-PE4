#include <iostream>
#include <vector>

//void DisplayBoard();
std::vector<char> CreateBoard();

int main() {
    std::vector board = CreateBoard();
}

std::vector<char> CreateBoard(){
    std::vector<char> b = {'_','_','_','_','_','_','_','_','_'};
    return b;
}
