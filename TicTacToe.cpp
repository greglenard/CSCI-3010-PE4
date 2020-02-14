#include <iostream>
#include <vector>

void DisplayBoard(vector<char> b);
std::vector<char> CreateBoard();

int main() {
    std::vector board = CreateBoard();
}

std::vector<char> CreateBoard()
{
    std::vector<char> b = {{'_','_','_'},
						   {'_','_','_'},
						   {'_','_','_'}};
    return b;
}

void DisplayBoard(vector<char> b)
{
	for (int i = 0; i < b.size(); i++)
	{
		for (int j = 0; j < b[i].size(); j++)
		{
			std::cout << b[i][j]; << " ";
		}
		std::cout << endl;
	}
}