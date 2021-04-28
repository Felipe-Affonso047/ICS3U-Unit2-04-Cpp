// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: April 2021
// This program calculates the circumference of a circle

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const float  HST = 0.13;
    float pizza_size;
    float cost;
    float tax;
    float total_cost;
    
    std::cout << "What size of pizza do you want in inches?" << std::endl;
    std::cin >> pizza_size;
    
    cost = 0.5 * pizza_size + 1.75;
    tax = cost * 0.13;
    total_cost = tax + cost;

    std::cout << std::endl;
    std::cout << "Cost: $" << std::fixed << std::setprecision(2) << std::setfill('0') << cost << std::endl;
    std::cout << "HST: $" << std::fixed << std::setprecision(2) << std::setfill('0') << tax << std::endl;
    std::cout << "Total Cost: $"<<  std::fixed << std::setprecision(2) << std::setfill('0') << total_cost << std::endl;
}
