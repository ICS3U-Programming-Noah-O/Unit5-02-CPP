// Copyright (c) 2022 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Jan. 19, 2022
// This program uses separate functions to calculate the area
// of a triangle

#include <unistd.h>
#include <iostream>
#include <iomanip>


float CalculateArea(float base, float height) {
    // This function cakcukates the area of the triangle
    float area;
    // Use the area formula
    area = (base * height) / 2;

    // Print the final result
    std::cout <<"The area is " << area << " cm²";
}

int main() {
    // This function gets length and width
    std::string heightFromUser;
    std::string baseFromUser;
    float heightFromUserFloat;
    float baseFromUserFloat;
    do {
        // Get user input for height
        std::cout << "Enter the height of your triangle (cm): ";
        std::cin >> heightFromUser;
        // Make sure that the input is a number
        try {
            heightFromUserFloat = std::stof(heightFromUser);
            std::cout << "Enter the base of your triangle (cm): ";
            std::cin >> baseFromUser;
            // Make sure that the input is a number
            try {
                // Get user input for base
                baseFromUserFloat = std::stof(baseFromUser);
                // Call the function
                CalculateArea(baseFromUserFloat, heightFromUserFloat);
                break;
            // Print error message if input is invalid
            } catch (std::invalid_argument) {
                std::cout << "Input must be a number \n";
            }
        // Print error message if input is invalid
        } catch (std::invalid_argument) {
            std::cout << "Input must be a number \n";
        }
        std::cout << " \n";
    } while (heightFromUserFloat != 1);
}
