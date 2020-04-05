//
//  parser.hpp
//  sudokusolver
//
//  Created by Maximilian Nazarati on 05.04.20.
//  Copyright © 2020 Maximilian Nazarati. All rights reserved.
//

#ifndef parser_hpp
#define parser_hpp

#include <fstream>
#include <vector>
#include <string>
#include <iostream>

std::vector<std::vector<int>> parseSudokuFile(std::ifstream *f);


#endif /* parser_hpp */
