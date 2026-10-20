 #include <iostream> 
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


vector<vector<char>> ans;

    bool check(vector<vector<char>>& board, int j, int n, int i) {
        for (int l = 0; l < 9; l++) {
            if (board[n][l] == '0' + j) return false;
        }

        for (int k = 0; k < 9; k++) {
            if (board[k][i] == '0' + j) return false;
        }

        int startRow = (n / 3) * 3;
        int startCol = (i / 3) * 3;

        for (int a = startRow; a < startRow + 3; a++) {
            for (int b = startCol; b < startCol + 3; b++) {
                if (board[a][b] == '0' + j) return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board, int n, int i) {
        if (n == 9) {
            ans = board;
            return true;
        }

        if (i == 9) {
            return solve(board, n + 1, 0);
        }

        if (board[n][i] != '.') {
            return solve(board, n, i + 1);
        }

        for (int j = 1; j <= 9; j++) {
            if (check(board, j, n, i)) {
                board[n][i] = '0' + j;

                if (solve(board, n, i + 1)) {
                    return true;
                }

                board[n][i] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
    }