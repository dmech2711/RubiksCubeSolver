//
// Created by dhrum on 23-08-2026.
//

#ifndef RUBIKSCUBE3BY3_CORNERDBMAKER_H
#define RUBIKSCUBE3BY3_CORNERDBMAKER_H

#include "CornerPatternDatabase.h"
#include "../Models/RubiksCubeBit.cpp"

using namespace std;

class CornerDBMaker {
private:
    string fileName;
    CornerPatternDatabase cornerDB;

public:
    CornerDBMaker(string _fileName);
    CornerDBMaker(string _fileName, uint8_t init_val);

    bool bfsAndStore();
};



#endif //RUBIKSCUBE3BY3_CORNERDBMAKER_H
