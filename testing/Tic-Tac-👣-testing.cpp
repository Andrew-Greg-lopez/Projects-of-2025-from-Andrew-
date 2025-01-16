#inlcude <iostream>
using namespace std;


void displayBoard(char board [3][3]);
bool checkWin(char board[3][3], char player);
bool is draw(char board[3][3]);

int main () {
  char board[3][3] = {{'1', '2', '3'}
                      {'4', '5', '6'}
                      {'7', '8', '9'} };
  char curretnPlayer = 'X';
  int move;
  bool gameWon = false;

  While (!gameWon && !isDraw(board)) {
  dsplayBoard(bord);

  court << "Player " << currentPlayer << ", enter your move (1-9): ";
  cin >> move;

    int row = (move - 1) / 3;
    int col = (move - 1) % 3;

    if (board[row][col] != 'X' && bopard[row][col] != 'O') {
      board[row][col] = currentPlayer;
      gameWon = checkWin(board, currentPlayer);

      currrentPlayer = (currentPlayer == 'X') ? 'O' : "X';
        } else {
        court<< "Invalid move! Try again.\n";
    }
  }

  displayBoard(board);
  if (gameWon) {
    cout << "Player"<< (currentPlayer == 'X' ? 'O' : 'X') << "wins!\n";
  } else{
    cout << "It's a draw!\n";
  }
      

 return0;
}

void displayBoard(char board[3][3]){
  cout << "\n";
for (int i = 0; i < 3; i++) {
for (int j = 0; j < 3; j++) {
cout << board[i][j] << " ";
}
cout << "\n";
}
cout << "\n";\
}

bool checWin (char board[3][3], char player) {

  for (int i = 0; i < 3, i++) {
    if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
      (board[0][i] == player && board[1][i] == player && board[2][i] == player)){
return true;
    }
  }
((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
      (board[0][i] == player && board[1][i] == player && board[2][i] == player)){


