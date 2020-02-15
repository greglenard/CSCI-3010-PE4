/* CSCI 3010 PE 4 Part 2
*  Greg Lenard
*  Joy Mace
*  02_14_2020
*/

#include <iostream>
#include <vector>

std::vector<char> CreateBoard();
void DisplayBoard(std::vector<char> board);
std::vector<char> PlaceMarker(std::vector<char> board, int m, int turn);
int GetPlayerChoice();

int main() {
    int move;
    std::vector board = CreateBoard();
    // Simulates a game of Tic Tac Toe for 9 turns
    for(int i = 0; i < 9; i++){
        DisplayBoard(board);
        move = GetPlayerChoice();
        board = PlaceMarker(board, move, i);
    }
    DisplayBoard(board);
}

// Creates a Tic Tac Toe board
std::vector<char> CreateBoard(){
    std::vector<char> b = {'1','2','3','4','5','6','7','8','9'};
    return b;
}

// Reqeusts and returns user's Tic Tac Toe marker spot
int GetPlayerChoice() {	
	int choice;
	std::cout << "Choose an open spot (1-9) to place your marker: ";
	std::cin >> choice;
	return choice;
}

// Displays the Board
void DisplayBoard(std::vector<char> board){
    for (int i = 0; i < (int)board.size(); i++){
        std::cout << " " <<board.at(i) << " ";
        if ((i+1)%3==0){
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

// Places player marker at chosen location
std::vector<char> PlaceMarker(std::vector<char> board, int m, int turn){
    if (turn%2==0){
        board.at(m-1) = 'X';
    } else {
        board.at(m-1) = 'O';
    }
    return board;
}

