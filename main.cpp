#include <iostream>
#include <vector>
#include "./reader.h"
#include "./solver.h"

int main(int argc, char** argv){
    std::vector<std::vector<int>> board = Reader().readFile("tstfile");
    
    return 0;
}