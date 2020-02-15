#include <iostream>
#include <vector>

std::vector<char> CreateBoard();
void DisplayBoard(std::vector<char> board);
int GetPlayerChoice();
std::vector<char> PlaceMarker(std::vector<char> board, int m, int turn);

int main() {
    int move;
    std::vector board = CreateBoard();
    for(int i = 0; i < 9; i++){
        DisplayBoard(board);
        move = GetPlayerChoice();
        board = PlaceMarker(board, move, i);
    }
    DisplayBoard(board);
}

std::vector<char> CreateBoard(){
    std::vector<char> b = {'_','_','_','_','_','_','_','_','_'};
    return b;
}

void DisplayBoard(std::vector<char> board){
    for (int i = 0; i < (int)board.size(); i++){
        std::cout << " " <<board.at(i) << " ";
        if ((i+1)%3==0){
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

int GetPlayerChoice() {
    std::cout << "left -> Right, Top -> bottom (1-9)" << std::endl;
    std::cout << "Enter choice:  ";
    int pc = 0;
    std::cin >> pc;
    std::cout << std::endl;
    return pc;
}

std::vector<char> PlaceMarker(std::vector<char> board, int m, int turn){
    if (turn%2==0){
        board.at(m-1) = 'X';
    } else {
        board.at(m-1) = 'O';
    }
    return board;
}
