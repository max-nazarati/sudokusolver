#include <iostream>
#include <vector>
#include "./reader.h"

int main(int argc, char** argv){
    std::vector<std::vector<int>> board = Reader().readFile("tstfile");
    std::for_each(board.begin(), board.end(),
        [](std::vector<int> row)
        {
            for_each(row.begin(), row.end(),
            [](int val)
            {
                std::cout << val;
            });
            std::cout << std::endl;
        });
    return 0;
}