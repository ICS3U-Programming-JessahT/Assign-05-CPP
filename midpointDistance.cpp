// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 12/12/2022
// This program ask the for four points and calculates
// the midpoint and distance using a create function

#include<iostream>
#include<cmath>

float midpointX(float xOne, float xTwo) {
// declare variables for x midpoint
    float xPoint, yPoint;
// calculate x point
    xPoint = (xOne + xTwo) / 2;
// return x point
    return xPoint;
}

float midpointY(float yOne, float yTwo) {
// declare variables for y midpoint
    float xPoint, yPoint;
// calculate y point
    yPoint = (yOne + yTwo) / 2;
// return y point
    return yPoint;
}

float distance(float xOne, float yOne, float xTwo, float yTwo) {
// declare variables for distance function
    float xBracket, yBracket, add, squareRoot;

// calculate for distance
    xBracket = (xTwo - xOne);
    xBracket = pow(xBracket, 2);

    yBracket = (yTwo - yOne);
    yBracket = pow(yBracket, 2);
    add = xBracket + yBracket;
    squareRoot = sqrt(add);
// return distance
    return squareRoot;
}

int main() {
// declaring variables fro main
    float userXOne, userYOne, userXTwo, userYTwo;
    float calcXMidpoint, calcYMidpoint, calcDistance;
    std::string decision, playAgain;
    std::string userXOneStr, userYOneStr, userXTwoStr, userYTwoStr;

// loop program
    while (true) {
// get user input
    std::cout << "Enter a value for x1: ";
    std::cin >> userXOneStr;
    std::cout << "Enter a value for y1: ";
    std::cin >> userYOneStr;
    std::cout << "Enter a value for x2: ";
    std::cin >> userXTwoStr;
    std::cout << "Enter a value for y2: ";
    std::cin >> userYTwoStr;
    // catch for any strings
    try {
        userXOne = std::stof(userXOneStr);
        userYOne = std::stof(userYOneStr);
        userXTwo = std::stof(userXTwoStr);
        userYTwo = std::stof(userYTwoStr);
// ask if user wants distance
        std::cout << "Do you also want the distance? (y/n): ";
        std::cin >> decision;

        if (decision == "y" || decision == "Y") {  // print with distance
            calcXMidpoint = midpointX(userXOne, userXTwo);
            calcYMidpoint = midpointY(userYOne, userYTwo);
            calcDistance = distance(userXOne, userYOne, userXTwo, userYTwo);
            std::cout << "The midpoint for x is " << calcXMidpoint << std::endl;
            std::cout << "The midpoint for y is " << calcYMidpoint << std::endl;
            std::cout << "The distance is " << calcDistance << std::endl;
        } else {  // print without distance
            calcXMidpoint = midpointY(userXOne, userXTwo);
            calcYMidpoint = midpointX(userYOne, userYTwo);

            std::cout << "The midpoint for x is " << calcXMidpoint << std::endl;
            std::cout << "The midpoint for y is " << calcYMidpoint << std::endl;
        }
// ask if user wants to play again
        std::cout << "Do you want to continue?" << std::endl;
        std::cout << "If not press q to quit: ";
        std::cin >> playAgain;
        if (playAgain == "q") {  // if press q end program
            std::cout << "Thanks for playing" << std::endl;
            break;
        }
    } catch (std::invalid_argument) {  // catch any strings
        std::cout << "Invalid input" << std::endl;
    }
    }
}
