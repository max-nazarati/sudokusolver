#include <iostream>
#include <vector>
#include "./headers/reader.hpp"
#include "./headers/solver.hpp"

int main(int argc, char** argv){
    std::vector<std::vector<int>> board = Reader().readFile("tstfile");
    Solver s = Solver(&board);
    if (s.solve())
    {
        std::cout << "+++++++++++++++++++++++" << std::endl;
        std::cout << "managed to solve sudoku" << std::endl;
        std::cout << "+++++++++++++++++++++++" << std::endl;
    }
    else
    {
        std::cout << "+++++++++++++++++++" << std::endl;
        std::cout << "sudoku not solvable" << std::endl;
        std::cout << "+++++++++++++++++++" << std::endl;
    }
    s.printBoard();
    return 0;
}