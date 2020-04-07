#pragma once
#include <vector>

class Solver{
    public:
        Solver(std::vector<std::vector<int>> *board);
        bool solved();
        bool solve();
        void printBoard();
    
    private:
        bool checkSquare(int val, int row, int col);
        bool checkRow(int val, int row, int col);
        bool checkCol(int val, int row, int col);
        int squareOriginRow(int row);
        int squareOriginCol(int col);

        std::vector<std::vector<int>> *mboard;
};