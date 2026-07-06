#include <iostream>
using namespace std;

const int N = 9;

// Check if placing num is valid
bool isSafe(int board[N][N], int row, int col, int num) {
    // Check row
    for (int x = 0; x < N; x++) {
        if (board[row][x] == num)
            return false;
    }

    // Check column
    for (int x = 0; x < N; x++) {
        if (board[x][col] == num)
            return false;
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[startRow + i][startCol + j] == num)
                return false;
        }
    }

    return true;
}

// Solve Sudoku using Backtracking
bool solveSudoku(int board[N][N]) {
    int row = -1, col = -1;
    bool empty = false;

    // Find an empty cell
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 0) {
                row = i;
                col = j;
                empty = true;
                break;
            }
        }
        if (empty)
            break;
    }

    // No empty cell means solved
    if (!empty)
        return true;

    // Try numbers 1 to 9
    for (int num = 1; num <= 9; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;

            if (solveSudoku(board))
                return true;

            // Backtrack
            board[row][col] = 0;
        }
    }

    return false;
}

// Print Sudoku
void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int board[N][N] = {
        {3,0,6,5,0,8,4,0,0},
        {5,2,0,0,0,0,0,0,0},
        {0,8,7,0,0,0,0,3,1},
        {0,0,3,0,1,0,0,8,0},
        {9,0,0,8,6,3,0,0,5},
        {0,5,0,0,9,0,6,0,0},
        {1,3,0,0,0,0,2,5,0},
        {0,0,0,0,0,0,0,7,4},
        {0,0,5,2,0,6,3,0,0}
    };

    if (solveSudoku(board))
        printBoard(board);
    else
        cout << "No solution exists";

    return 0;
}