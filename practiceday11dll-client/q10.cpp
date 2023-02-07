#include <assert.h>

class SudokuSolver {
   static bool Solve(int unsolvedSudoku[9][9]);
};

bool SudokuSolver::Solve(int unsolvedSudoku[9][9]) {
    
}

int main() {
    int unsolvedSudoku[9][9] = {
    { 0, 2, 0, 0, 0, 4, 3, 0, 0 },
    { 9, 0, 0, 0, 2, 0, 0, 0, 8 },
    { 0, 0, 0, 6, 0, 9, 0, 5, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 1 },
    { 0, 7, 2, 5, 0, 3, 6, 8, 0 },
    { 6, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 8, 0, 2, 0, 5, 0, 0, 0 },
    { 1, 0, 0, 0, 9, 0, 0, 0, 3 },
    { 0, 0, 9, 8, 0, 0, 0, 6, 0 }
    };

    bool solved = SudokuSolver::Solve(unsolvedSudoku);
    assert(solved);

    int solvedSudoku[9][9]{
    { 8, 2, 7, 1, 5, 4, 3, 9, 6 },
    { 9, 6, 5, 3, 2, 7, 1, 4, 8 },
    { 3, 4, 1, 6, 8, 9, 7, 5, 2 },
    { 5, 9, 3, 4, 6, 8, 2, 7, 1 },
    { 4, 7, 2, 5, 1, 3, 6, 8, 9 },
    { 6, 1, 8, 9, 7, 2, 4, 3, 5 },
    { 7, 8, 6, 2, 3, 5, 9, 1, 4 },
    { 1, 5, 4, 7, 9, 6, 8, 2, 3 },
    { 2, 3, 9, 8, 4, 1, 5, 6, 7 }
    };

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            assert(unsolvedSudoku[i][j] == solvedSudoku[i][j]);
        }
    }
}
