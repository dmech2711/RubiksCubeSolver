//
// Created by dhrum on 23-08-2026.
//

#ifndef RUBIKSCUBE3BY3_CORNERPATTERNDATABASE_H
#define RUBIKSCUBE3BY3_CORNERPATTERNDATABASE_H


#include "../Models/RubiksCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"
using namespace std;

class CornerPatternDatabase : public PatternDatabase {

    typedef RubiksCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const RubiksCube& cube) const;

};


#endif //RUBIKSCUBE3BY3_CORNERPATTERNDATABASE_H
