//
// Created by vboxuser on 28/05/2024.
//

#include "log.h"
#include <iostream>
#include <fstream>

Log::Log(const std::string& fname) : filename(fname) {
    file.open(filename, std::ios::out | std::ios::app);
    if (!file) {
        std::cerr << "Failed to open log file: " << filename << "\n";
    }
}

Log::~Log() {
    if (file.is_open()) {
        file.close();
    }
    std::cout << "Log file closed: " << filename << "\n";
}

void Log::writeLog(const std::string& message) {
    if (file.is_open()) {
        file << message << "\n";
    }
}

void Log::readLog() const {
    std::ifstream infile(filename);
    if (!infile) {
        std::cerr << "Failed to open log file for reading: " << filename << "\n";
        return;
    }
    std::string line;
    while (std::getline(infile, line)) {
        std::cout << line << "\n";
    }
    infile.close();
}

void Log::clearLog() {
    file.close();
    file.open(filename, std::ios::out | std::ios::trunc);
    if (!file) {
        std::cerr << "Failed to clear log file: " << filename << "\n";
    }
}

void Log::close() {
    if (file.is_open()) {
        file.close();
    }
}
