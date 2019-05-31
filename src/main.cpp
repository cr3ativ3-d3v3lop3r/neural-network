/*
 * Filename: Main.cpp
 * Author: Callum Cooper
 * Date: 26-04-19
 * Description: Entry point to the application.
 */

#include <iostream>
#include <vector>
#include "../include/FileReader.h"

using namespace std;

int main(void)
{

    FileReader* fr = new FileReader("../../resources/data.dat");

    vector<string> lines = fr->getFileLines();

    // Secondly, display the file lines
    for (size_t i = 0; i < lines.size(); ++i)
    {
        cout << lines[i] << endl;
    }

    delete fr;

    cin.ignore(0);

    return 0;
}
