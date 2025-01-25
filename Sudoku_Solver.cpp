#include <iostream>
#include <vector>

using namespace std;

#define N 9

// Function to print the Sudoku grid with box structure
void printGrid(const vector<vector<int>>& grid) {
    for (int i = 0; i < N; i++) {
        if (i % 3 == 0 && i != 0) {
            cout << "------+-------+------" << endl; // Line separating boxes
        }
        for (int j = 0; j < N; j++) {
            if (j % 3 == 0 && j != 0) {
                cout << "| "; // Vertical line separating boxes
            }
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

// Check if it's safe to place a number in the given row, column
bool isSafe(const vector<vector<int>>& grid, int row, int col, int num) {
    // Check if the number is not in the current row and column
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num || grid[x][col] == num) {
            return false;
        }
        if(grid[3*(row/3)+x/3][3*(col/3)+x%3]==num)
        {
            return false;
        }
    }

    // Check the 3x3 box
    // int startRow = row - row % 3, startCol = col - col % 3;
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         if (grid[i + startRow][j + startCol] == num) {
    //             return false;
    //         }
    //     }
    // }

    return true;
}

// Backtracking function to solve the Sudoku puzzle
bool solveSudoku(vector<vector<int>>& grid) {
    int row, col;
    bool empty = true;

    // Find an empty space in the grid
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) { // 0 means empty cell
                empty = false;
                break;
            }
        }
        if (!empty) break;
    }

    // If no empty space is found, the puzzle is solved
    if (empty) return true;

    // Try numbers from 1 to 9
    for (int num = 1; num <= N; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num; // Place the number

            // Recursively try to solve the rest of the puzzle
            if (solveSudoku(grid)) return true;

            // If it didn't work out, reset and try next number
            grid[row][col] = 0;
        }
    }

    return false; // Trigger backtracking
}

int main() {
    vector<vector<int>> grid(N, vector<int>(N));

    cout << "Enter the Sudoku puzzle (use 0 for empty cells):" << endl;

    // Input the Sudoku puzzle
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    if (solveSudoku(grid)) {
        cout << "Solved Sudoku:" << endl;
        printGrid(grid);
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}