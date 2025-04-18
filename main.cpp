#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// ������� ��� ������ ������ �� �����
void readDataFromFile(const string& fileName, vector<string>& lines) {
    ifstream inputFile(fileName);
    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            lines.push_back(line);
        }
        inputFile.close();
    }
    else {
        cerr << "Error opening file." << endl;
    }
}

// ������� ��� ������ ������ � ����
void writeDataToFile(const vector<string>& lines, const string& destFileName) {
    ofstream outputFile(destFileName, ios::app);

    if (outputFile.is_open()) {
        for (const auto& line : lines) {
            outputFile << line << endl;
        }
        outputFile.close();
    }
    else {
        cerr << "Error opening file." << endl;
    }
}

// ������� ��� ������ ������� �� �����
void displayVector(const vector<string>& lines) {
	for (const auto& line : lines) {
		cout << line << endl;
	}
}

int main() {
    const string sourceFileName = "in.txt";
    const string destFileName = "out.txt";
    vector<string> lines;

    // ������ ������ �� �����
    readDataFromFile(sourceFileName, lines);

    // ����� ������� �� �����
    displayVector(lines);

    // ������ ������ � ����
    writeDataToFile(lines, destFileName);

    return 0;
}
