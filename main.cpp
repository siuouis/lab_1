#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Функция для чтения данных из файла
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

// Функция для записи данных в файл
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

// Функция для вывода вектора на экран
void displayVector(const vector<string>& lines) {
	for (const auto& line : lines) {
		cout << line << endl;
	}
}

int main() {
    const string sourceFileName = "in.txt";
    const string destFileName = "out.txt";
    vector<string> lines;

    // Чтение данных из файла
    readDataFromFile(sourceFileName, lines);

    // Вывод вектора на экран
    displayVector(lines);

    // Запись данных в файл
    writeDataToFile(lines, destFileName);

    return 0;
}
