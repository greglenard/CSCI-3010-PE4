#include <iostream>
#include <vector>

//void DisplayBoard();
std::vector<char> CreateBoard();
void DisplayBoard(std::vector<char> board);

int main() {
    std::vector board = CreateBoard();
}

std::vector<char> CreateBoard(){
    std::vector<char> b = {'_','_','_','_','_','_','_','_','_'};
    return b;
}

void DisplayBoard(std::vector<char> board){
    for (int i = 0; i < board.size(); i++){
        std::cout << " " <<board.at(i) << " ";
        if ((i+1)%3==0){
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}


