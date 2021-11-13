#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::cout;
using std::string;
using std::vector;
using namespace std;
void ReadBoardFile();
// TODO: Add the ReadBoardFile function here.

// PrintBoard not used in this exercise
void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

void ReadBoardFile()
{
  std::ifstream inFile;
  inFile.open("1.board");
    if(inFile)
    {
      string line;
      while(getline(inFile, line))
      {
        cout<<line<<endl;
      }
      inFile.close();
    }
  else
  {
  cout <<"could not open the file";
  }
}
int main() {
  // TODO: Call the ReadBoardFile function here.
  
  // Leave the following line commented out.
  //PrintBoard(board);
  ReadBoardFile();
}