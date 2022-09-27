// Copyright (c) 2022 Marshall Demars All rights reserved
//
// Created by: Marshall Demars
// Created on: Sept 2022
// This program calculates the area and perimeter of a rectangle

#include <iostream>
#include <cmath>


int main() {
    // this function calculates area and perimeter of a rectangle
    int lengthOfRectangle;
    int widthOfRectangle;
    double areaOfRectangle;
    double perimeterOfRectangle;

    // input
    std::cout << "Enter length of the rectangle (mm): ";
    std::cin >> lengthOfRectangle;
    std::cout << "Enter width of the rectangle (mm): ";
    std::cin >> widthOfRectangle;

    // process
    areaOfRectangle = lengthOfRectangle * widthOfRectangle;
    perimeterOfRectangle = 2 * (lengthOfRectangle + widthOfRectangle);

    // output
    std::cout << "\nArea is " << (areaOfRectangle) << " mm²." << std::endl;
    std::cout << "Perimeter is " << (perimeterOfRectangle) << " mm."
    << std::endl;
    std::cout << "\nDone." << std::endl;
}
