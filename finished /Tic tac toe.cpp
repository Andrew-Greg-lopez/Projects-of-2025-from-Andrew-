#include <iostream>
using namespace std;


void displayBoard(char board[3][3]);
bool checkWin(char board[3][3], char player);
bool isDraw(char board[3][3]);

int main() {
    char board[3][3] = { {'1', '2', '3'},
                         {'4', '5', '6'},
                         {'7', '8', '9'} };
    char currentPlayer = 'X';
    int move;
    bool gameWon = false;
  while (!gameWon && !isDraw(board)) {
  displayBoard(board);

  cout << "Player " << currentPlayer << ", enter your move (1-9): ";
  cin >> move;

    int row = (move - 1) / 3;
    int col = (move - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
      board[row][col] = currentPlayer;
      gameWon = checkWin(board, currentPlayer);

      currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else {
        cout<< "Invalid move! Try again.\n";
    }
  }

  displayBoard(board);
  if (gameWon) {
    cout << "Player"<< (currentPlayer == 'X' ? 'O' : 'X') << "wins!\n";
  } else{
    cout << "It's a draw!\n";
  }
      

 return 0;
}

void displayBoard(char board[3][3]){
  cout << "\n";
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
cout << board[i][j] << " ";
}
cout << "\n";
}
cout << "\n";
}

bool checkWin (char board[3][3], char player) {

  for (int i = 0; i < 3; i++) {
    if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
      (board[0][i] == player && board[1][i] == player && board[2][i] == player)){
return true;
    }
  }
if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
      (board[0][2] == player && board[1][1] == player && board[2][0] == player)){
return true;
}
return false;
}

bool isDraw(char board[3][3]){
  for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
if (board[i][j] != 'X' && board[i][j] != 'O') {
return false;
}
}
  }
return true;
}

