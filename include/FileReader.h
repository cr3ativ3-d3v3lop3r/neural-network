/*
 * Filename: FileReader.h
 * Author: Callum Cooper
 * Date: 26-04-19
 * Description: Interface to read file input.
 */

#ifndef FILE_READER_H_
#define FILE_READER_H_

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class FileReader
{
    public:
        FileReader(string fileName = "");
        ~FileReader();

        string getFileName();
        vector<string> getFileLines();
       
    private:
        string _fileName;
        vector<string> _fileLines;

        void readFileLines();
};

#endif
