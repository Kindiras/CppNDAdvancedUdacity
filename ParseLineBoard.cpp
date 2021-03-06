#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;


vector<int> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<int> row;
    while (sline >> n >> c && c == ',') {
      row.push_back(n);
    }
    return row;
}

// TODO: Change the return type of ReadBoardFile.
vector<vector<int>> ReadBoardFile("1.board") {
  ifstream myfile (path);
  vector<vector<int>> board;
  // TODO: Declare an empty board variable here with
  // type vector<vector<int>>.
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      vector<int> row = ParseLine(line);
      board.push_back(row);
      // TODO: Replace the "cout" code with a call to ParseLine for each line and push the results of ParseLine to the back of the board.
      //cout << line << "\n";
    }
  }
  return board;
  // TODO: Return the board variable.
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Store the output of ReadBoardFile in the "board" variable.
  //vector<vector<int>> board =ReadBoardFile("1.board");
  // TODO: Uncomment PrintBoard below to print "board".
  PrintBoard(ReadBoardFile("1.board"));
}
