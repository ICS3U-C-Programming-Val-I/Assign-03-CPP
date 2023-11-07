// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Nov 1, 2023
// This program asks the user to enter three numbers,
// it then tells them which number is the smallest.
#include <iostream>
#include <string>

int main() {
    std::cout << "Input 3 numbers, and I will tell you the smallest one.\n";

    // declaring variables of numbers as strings
    std::string first_num_str, second_num_str, third_num_str;

    // Input - getting the first number
    std::cout << "What's your first number:\n";
    std::cin >> first_num_str;

    try {
        float first_num_flt = std::stof(first_num_str);

        // Input - getting the second number
        std::cout << "What's your second number:\n";
        std::cin >> second_num_str;

        try {
            float second_num_flt = std::stof(second_num_str);

            // Input - getting the third number
            std::cout << "What's your third number:\n";
            std::cin >> third_num_str;

            try {
                float third_num_flt = std::stof(third_num_str);

                // process - checking which number(s) is the smallest.
                if (first_num_flt < second_num_flt && first_num_flt < third_num_flt) {
                    // Output- Display result (smallest number)
                    std::cout << first_num_flt << " is the smallest number.\n";
                } else if (second_num_flt < first_num_flt && second_num_flt < third_num_flt) {
                    std::cout << second_num_flt << " is the smallest number.\n";
                } else if (third_num_flt < first_num_flt && third_num_flt < second_num_flt) {
                    std::cout << third_num_flt << " is the smallest number.\n";
                } else {
                    if (first_num_flt == second_num_flt && first_num_flt == third_num_flt) {
                        std::cout << "All numbers are the same.\n";
                    } else if (first_num_flt == second_num_flt && first_num_flt < third_num_flt) {
                        std::cout << first_num_flt << " is the smallest number.\n";
                    } else if (first_num_flt == third_num_flt && first_num_flt < second_num_flt) {
                        std::cout << first_num_flt << " is the smallest number.\n";
                    } else {
                        std::cout << second_num_flt << " is the smallest number.\n";
                    }
                }
            } catch (std::invalid_argument) {
                std::cout << third_num_str << " is not a number.\n";
            }
        } catch (std::invalid_argument) {
            std::cout << second_num_str << " is not a number.\n";
        }
    } catch (std::invalid_argument) {
        std::cout << first_num_str << " is not a number.\n";
    }

    std::cout << "Thanks for using this program.\n";
}
