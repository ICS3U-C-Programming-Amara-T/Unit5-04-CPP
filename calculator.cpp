// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: May 13, 2025
// This is a calculator program

#include <iostream>
#include <string>
#include <cmath>

float calculator(float num1Float, float num2Float, std::string operatorStr) {
    if (operatorStr == "/") {
        return num1Float / num2Float;
    }
    if (operatorStr == "%") {
        return num1Float - num2Float*floor(num1Float / num2Float);
    }
    if (operatorStr == "*") {
        return num1Float * num2Float;
    }
    if (operatorStr == "+") {
        return num1Float + num2Float;
    }
    if (operatorStr == "-") {
        return num1Float - num2Float;
    }
}

int main() {
    // Define variables
    std::string operatorStr;
    float num1Float;
    float num2Float;
    std::string num2Str;
    std::string num1Str;

    // Ask User for a two numbers and an operator
    std::cout << "Enter a  number: ";
    std::cin >> num1Str;
    std::cout << "Enter a second number: ";
    std::cin >> num2Str;
    std::cout << "Choose an operator (/,%,*,+,-) :";
    std::cin >> operatorStr;

    // Check if the user's age matches the grandparents' criteria
    try {
        int num1Float = std::stof(num1Str);
        int num2Float = std::stof(num2Str);

        if (operatorStr == "/") {
            float answer = calculator(num1Float, num2Float, operatorStr);
            std::cout << num1Float << "/" << num2Float
            << " = " << answer << std::endl;
        }
        if (operatorStr == "%") {
            float answer = calculator(num1Float, num2Float, operatorStr);
            std::cout
                << num1Float << "%" << num2Float
                << " = " << answer << std::endl;
        }
        if (operatorStr == "*") {
            float answer = calculator(num1Float, num2Float, operatorStr);
            std::cout
                << num1Float << "*"
                << num2Float << " = " << answer << std::endl;
        }
        if (operatorStr == "+") {
            float answer = calculator(num1Float, num2Float, operatorStr);
            std::cout
                << num1Float << "+"
                << num2Float << " = " << answer << std::endl;
        }
        if (operatorStr == "-") {
            float answer = calculator(num1Float, num2Float, operatorStr);
            std::cout
                << num1Float << "-"
                << num2Float << " = " << answer << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid number ";
    }
    std::cout << " Thanks for playing!" << std::endl;
}

