#include <iostream>
#include <vector>
using namespace std;
void PrintBoard(vector<vector<int>> board);

// TODO: Add PrintBoard function here.

int main() {
  vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 1, 0, 0, 0, 0},
                            {0, 0, 0, 0, 1, 0}};
  // TODO: Call PrintBoard function here.
  PrintBoard(board);
  
}
void PrintBoard(vector<vector<int>> board)
{
  for(auto row=0; row<board.size();row++)
  { 
    for(auto col=0;col < board[row].size();col++)
  { 
      cout << board[row][col];
  }
   cout << "\n";
  }
}
  