#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "function1.h"

using namespace std;

void readDataFromFile(const string& fileName, vector<string>& lines) {
    ifstream inputFile(fileName);
    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            lines.push_back(line);
        }
        inputFile.close();
    }
}
