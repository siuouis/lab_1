#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "function23.h"

void writeDataToFile(const std::vector<std::string>& lines, const std::string& destFileName) {
    std::ofstream outputFile(destFileName, std::ios::app);
    if (outputFile.is_open()) {
        for (const auto& line : lines) {
            outputFile << line << std::endl;
        }
        outputFile.close();
    }
}

void writeVectorToFile(const std::vector<int>& vec, const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << "���������� �������: ";
        for (const auto& element : vec) {
            outFile << element << " ";
        }
        outFile << std::endl;
        outFile.close();
        std::cout << "������ ������� �������� � ���� " << filename << std::endl;
    } else {
        std::cerr << "�� ������� ������� ���� ��� ������" << std::endl;
    }
}
