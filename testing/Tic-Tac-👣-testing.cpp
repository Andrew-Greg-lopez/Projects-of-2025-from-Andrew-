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
  } else{
  court << "It's a draw!\n";
  }

 return0;
}

void displayBoard(char board[3][3]){
  
