#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int, int> r[9],c[9], b[9];
            for(int i=0; i<9; i++) {
                for(int j=0; j<9; j++) {
                    if(board[i][j] == '.') continue;
                        int x = board[i][j] - '0';
                        int k = (i/3)*3 + (j/3);
                        r[i][x]++;
                        c[j][x]++;
                        b[k][x]++;
                        if(r[i][x] > 1 || c[j][x] > 1 || b[k][x] > 1) {
                                return false;
                            }
                        }
                    }
                    return true;
                }   
        };
int main() {
         Solution s;
        
            vector<vector<char>> board = {
                {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                {'7', '.', '.', '2', '.', '.', '.', '.', '6'},
                {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
            };
        
            bool result = s.isValidSudoku(board);
        
            if(result) {
                cout << "The Sudoku board is valid." << endl;
            } else {
                cout << "The Sudoku board is invalid." << endl;
            }
        
            return 0;
        }
