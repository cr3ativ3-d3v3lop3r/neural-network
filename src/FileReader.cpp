/*
 * Filename: FileReader.cpp
 * Author: Callum Cooper
 * Date: 26-04-19
 * Description: Implementation to read file input.
 */

#include "../include/FileReader.h"

// Class constructor
FileReader::FileReader(string fileName)
{
    // Init members
    _fileName = fileName;
}

// CLass destructor
FileReader::~FileReader()
{
}

// FileName accessor
string FileReader::getFileName()
{
    return _fileName;
}

// FileLines accessor
vector<string> FileReader::getFileLines()
{

    // First lets read the file lines into
    // a vector we can deal with.
    readFileLines();

    return _fileLines;
}

// Read the lines of a file
void FileReader::readFileLines()
{
    ifstream file(_fileName);
    
    for (string line; getline(file, line); )
    {
       _fileLines.push_back(line);
    }
}
