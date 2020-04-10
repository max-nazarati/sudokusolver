#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "../headers/reader.hpp"

std::vector<std::vector<int>> Reader::readFile(std::string filename){
    std::vector<std::vector<int>> sudokuBoard;
    std::ifstream file(filename);
    if (file.is_open()){
        std::string line;
        while (std::getline(file, line))
        {
            std::vector<int> row;
            std::for_each(line.begin(), line.end(), [&row](char n)
                {
                    if (n >= '0' && n <= '9')
                    {
                        row.push_back((int) n - 48);
                    }
                });
            sudokuBoard.push_back(row);
        }
    }
    file.close();
    return sudokuBoard;
}
