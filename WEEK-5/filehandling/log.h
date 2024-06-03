//
// Created by vboxuser on 28/05/2024.
//
#ifndef LOG_H
#define LOG_H

#include <string>
#include <fstream>

class Log {
private:
    std::string filename;
    std::ofstream file;

public:
    Log(const std::string& fname);
    ~Log();

    void writeLog(const std::string& message);
    void readLog() const;
    void clearLog();
    void close();
};

#endif // LOG_H
