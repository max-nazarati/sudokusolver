#include "../headers/solver.hpp"
#include <vector>
#include <iostream>

using namespace std;

Solver::Solver(vector<vector<int>> *board)
{
    mboard = board;
}

void Solver::printBoard()
{
    for (vector<int> row : (*mboard))
    {
        for (int val : row)
        {
            cout << val;
        }
        cout << endl;
    }
    cout << "---------------------------------------" << endl;
}
bool Solver::checkRow(int val, int row, int col)
{
    for (int i = 0; i < (*mboard)[row].size(); i++)
    {
        if ((*mboard)[row][i] == val && i != col)
        {
            return false;
        }
    }
    return true;
}

bool Solver::checkCol(int val, int row, int col)
{
    for (int i = 0; i < mboard->size(); i++)
    {
        if ((*mboard)[i][col] == val && i != row)
        {
            return false;
        }
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
            if ((*mboard)[squareOriginRow + i][squareOriginCol + j] == val && 
            squareOriginRow + i == row && squareOriginCol + j == col)
            {
                return false;
            }
        }
    }
    return true;
}

bool Solver::solved()
{
    for (std::vector<int> row : (*mboard))
    {
        for (int cell : row)
        {
            if (cell == 0)
                return false;
        }
    }
    return true;
}

bool Solver::solve()
{
    for (int row = 0; row < mboard->size(); row++)
    {
        for (int col = 0; col < mboard->size(); col++)
        {
            if ((*mboard)[row][col] != 0)
                {
                    continue;
                }
            for (int candidate = 1; candidate < 10; candidate++)
            {
                if (this->checkRow(candidate, row, col) && this->checkCol(candidate, row, col)
                        && this->checkSquare(candidate, row, col))
                {
                    (*mboard)[row][col] = candidate;
                    if (this->solved())
                    {
                        return true;
                    }

                    // recursive call to find next piece of the solution
                    else if (this->solve())
                    {
                        return true;
                    }
                    // Backtracking; current candidate value doesn't allow for future placements, 
                    // so try next candidate
                    else
                    {
                        (*mboard)[row][col] = 0;
                    }
                }
                //  Backtracking; exhausted all possibilites for the current cell
                else if (candidate == 9)
                {
                    return false;
                }
                
            }
            return false;
        }
    }
    return false;
}