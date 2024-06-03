//
// Created by vboxuser on 28/05/2024.
//
#include "Log.h"

int main() {
    Log log("log.txt");

    log.writeLog("First log entry");
    log.writeLog("Second log entry");

    std::cout << "Log contents:\n";
    log.readLog();

    log.clearLog();
    std::cout << "Log cleared.\n";

    log.writeLog("New log entry after clearing");

    std::cout << "Log contents after clearing:\n";
    log.readLog();

    log.close();

    return 0;
}
