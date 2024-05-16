#include <algorithm>
#include <iostream>
#include <vector>

bool checkRow(std::vector<std::vector<char>> &board) {
  for (int i = 0; i < board.size(); i++) {
    std::vector<char> tmp;
    for (int j = 0; j < board[i].size(); j++) {
      if (board[i][j] == '.') {
        continue;
      }
      if (std::find(tmp.begin(), tmp.end(), board[i][j]) != tmp.end()) {
        return false;
      } else {
        tmp.push_back(board[i][j]);
      }
    }
  }
  return true;
}

bool checkCol(std::vector<std::vector<char>> &board) {
  for (int i = 0; i < board.size(); i++) {
    std::vector<char> tmp;
    for (int j = 0; j < board[i].size(); j++) {
      if (board[j][i] == '.') {
        continue;
      }
      if (std::find(tmp.begin(), tmp.end(), board[j][i]) != tmp.end()) {
        return false;
      } else {
        tmp.push_back(board[j][i]);
      }
    }
  }
  return true;
};

void grid3x3(std::vector<std::vector<char>> &board){
  int x = 2;
  for (int i = 0; i < board.size(); i++) {
  	x += 2;
    for (int j = 0; j <= 2; j++) {
      std::cout << board[i][j] ;
    }
   	std::cout << '\n';
  }
}

int main() {
  std::vector<std::vector<char>> board = {
      {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
      {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
      {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
      {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
      {'4', '.', '.', '8', '.', '3', '.', '6', '1'},
      {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
      {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
      {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
      {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

  std::cout << std::boolalpha << checkRow(board) << std::endl;
  std::cout << std::boolalpha << checkCol(board) << std::endl;
  grid3x3(board);
  
  return 0;
}
