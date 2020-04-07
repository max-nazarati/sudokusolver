#include "./solver.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;

Solver::Solver(vector<vector<int>> *board)
{
    mboard = board;
}

bool Solver::checkRow(int val, int row, int col)
{
    for (int i = 0; i < mboard[row].size(); i++)
    {
        if (mboard->at(row).at(i) == val && i != col)
            return false;
    }
    return true;
}

bool Solver::checkCol(int val, int row, int col)
{
    for (int i = 0; i < mboard->size(); i++)
    {
        if ((*mboard)[i][col] == val && i != row)
            return false;
    }
    return true;
}

int Solver::squareOriginRow(int row)
{
    if (row < 3)
    {
        return 0;
    }
    else if (row < 6)
    {
        return 3;
    }
    return 6;
}


int Solver::squareOriginCol(int col)
{
    if (col < 3)
    {
        return 0;
    }
    else if (col < 6)
    {
        return 3;
    }
    return 6; 
}

bool Solver::checkSquare(int val, int row, int col)
{
    int squareOriginRow = this->squareOriginRow(row);
    int squareOriginCol = this->squareOriginCol(col);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((*mboard)[i][j] == val && i == row && j == col)
                return false;
        }
    }
    return true;
}

bool Solver::solved(std::vector<std::vector<int>> board)
{
    for (std::vector<int> row : board)
    {
        for (int cell : row)
        {
            if (cell == 0)
                return false;
        }
    }
    return true;
}

std::vector<std::vector<int>> Solver::solve(std::vector<std::vector<int>> board)
{
    
    return std::vector<std::vector<int>>();
}