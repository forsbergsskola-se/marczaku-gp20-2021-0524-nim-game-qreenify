#include <iostream>

using namespace std;

void PrintGrid();
void RestartGame();
string gridPos[9];
string player1 = "X";
string player2 = "O";

//Obviously im not done but I just started getting in the groove. Life!

int main() {
    int player1Input;
    int player2Input;
    for (int i = 0; i < 9; ++i) {
        gridPos[i] = " ";
    }
    cout << "A TicTacToe game of TicTacToe, P1 = X, P2 = O" << endl;
    PrintGrid();
    cout << "P1 choose a position to place your X" << endl;
    cin >> player1Input;
    gridPos[player1Input-1] = player1;
    PrintGrid();
    cout << "P2 choose a position to place your O" << endl;
    cin >> player2Input;
    gridPos[player2Input-1] = player2;
    PrintGrid();
    cout << "P1 choose a position to place your X" << endl;
    cin >> player1Input;
    gridPos[player1Input-1] = player1;
    PrintGrid();
    cout << "P2 choose a position to place your O" << endl;
    cin >> player2Input;
    gridPos[player2Input-1] = player2;
    PrintGrid();
    cout << "P1 choose a position to place your X" << endl;
    cin >> player1Input;
    gridPos[player1Input-1] = player1;
    PrintGrid();
    cout << "P2 choose a position to place your O" << endl;
    cin >> player2Input;
    gridPos[player2Input-1] = player2;
    PrintGrid();
    cout << "P1 choose a position to place your X" << endl;
    cin >> player1Input;
    gridPos[player1Input-1] = player1;
    PrintGrid();
    cout << "P2 choose a position to place your O" << endl;
    cin >> player2Input;
    gridPos[player2Input-1] = player2;
    PrintGrid();
}

void PrintGrid(){
    cout << "  1   2   3" << endl;
    cout << "1 " << gridPos[0] << " | " << gridPos[1] << " | " << gridPos[2] << endl;
    cout << "4 " << gridPos[3] << " | " << gridPos[4] << " | " << gridPos[5] << endl;
    cout << "6 " << gridPos[6] << " | " << gridPos[7] << " | " << gridPos[8] << endl << endl;
}