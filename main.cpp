#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "function1.h"
#include "function23.h"
using namespace std;

int main() {
    const string sourceFileName = "in.txt";
    const string destFileName = "out.txt";
    vector<string> lines;

    readDataFromFile(sourceFileName, lines);

    writeDataToFile(lines, destFileName);

    return 0;
}
