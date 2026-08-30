cmake_minimum_required(VERSION 4.3)
project(RubiksCube3by3)

set(CMAKE_CXX_STANDARD 20)

add_executable(RubiksCube3by3 main.cpp
        Models/RubiksCube.cpp
        Models/RubiksCube1DArray.cpp
        Models/RubiksCube3DArray.cpp
        Models/RubiksCubeBit.cpp
        Models/RubiksCube.h
        PatternDatabases/CornerDBMaker.cpp
        PatternDatabases/CornerDBMaker.h
        PatternDatabases/CornerPatternDatabase.cpp
        PatternDatabases/CornerPatternDatabase.h
        PatternDatabases/NibbleArray.cpp
        PatternDatabases/NibbleArray.h
        PatternDatabases/PatternDatabase.cpp
        PatternDatabases/PatternDatabase.h
        PatternDatabases/math.cpp
        PatternDatabases/math.h
        PatternDatabases/PermutationIndexer.h
        Solver/BFSSolver.h
        Solver/DFSSolver.h
        Solver/IDAstarSolver.h
        Solver/IDDFSSolver.h
        Models/PatternDatabse/PatternDatabase.h)
