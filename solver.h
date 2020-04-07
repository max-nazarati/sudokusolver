#pragma once
#include <vector>

class Solver{
    bool checkRow(int val, int row, int col);
    bool checkCol(int val, int row, int col);
    bool checkSquare(int val, int row, int col);
    int squareOriginRow(int row);
    int squareOriginCol(int col);
    
    std::vector<std::vector<int>> *mboard;
    public:
        Solver(std::vector<std::vector<int>> *board);
        std::vector<std::vector<int>> solve(std::vector<std::vector<int>> board);
        bool solved(std::vector<std::vector<int>> board);
};