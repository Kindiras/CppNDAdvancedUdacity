#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::cout;
using std::ifstream;
using std::string;
using std::vector;
using std::istringstream;

vector<int> ParseLine( string line);
void PrintVector(vector<int> v);

// TODO: Add the ParseLine function here.

void ReadBoardFile(string path) {
  ifstream myfile (path);
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      cout << line << "\n";
    }
  }
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

//#include "test.cpp" // For testing.

int main() {
  string line ="0,1,0,0,0";
  //ReadBoardFile("1.board");
  //TestParseLine(); // For testing.
  ParseLine(line);
  // Leave commented out.
  // PrintBoard(board);
}

vector<int> ParseLine( string line)
{
  vector<int> vline;
  istringstream check_string(line);
  int n;
  char c;
  while(check_string >> n >>c)
  {
    vline.push_back(n);
  }
  PrintVector(vline);
 return vline;
}

void PrintVector(vector<int> v)
{
  for(auto item: v)
  {
    cout << item << " ";
  }
}
