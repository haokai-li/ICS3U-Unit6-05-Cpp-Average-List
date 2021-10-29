// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate average and list

#include <iostream>
#include <string>
#include <list>

float calculatedaverageNumber(std::list<int> calculateAverageList) {
    // This function calculate average and list
    float totalNumber = 0;
    int totalNumberInt = 0;

    // process
    for (float loopNumberSecond : calculateAverageList) {
        totalNumber += loopNumberSecond;
    }

    totalNumber = totalNumber / calculateAverageList.size();
    totalNumberInt = totalNumber + 0.5;

    return totalNumberInt;
}

int main() {
    // This Program calculate average
    std::list<int> averageList;
    int averageNumber;

    std::string userString;
    int userNumber = 0;

    // output
    std::cout << "Please enter 1 mark at a time. Enter -1 to end." << std::endl;
    std::cout << "" << std::endl;

    while (userNumber != -1) {
        // input
        std::cout << "What is your mark? (as %): ";
        std::cin >> userString;
        try {
            userNumber = std::stoi(userString);
            averageList.push_back(userNumber);
        } catch (std::invalid_argument) {
            // output
            std::cout << "You didn't enter an integer." << std::endl;
        }
    }

    // remove -1
    averageList.pop_back();

    // call functions
    averageNumber = calculatedaverageNumber(averageList);

    // output
    std::cout << "" << std::endl;
    std::cout << "The average is: " <<averageNumber << "%" << std::endl;

    std::cout << "\nDone." << std::endl;
}
