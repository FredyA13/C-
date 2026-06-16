/*
Write a program that:

    Starts with $0 in savings

    Repeatedly adds $100 every month

    Tracks how many months it takes to reach or exceed the target
*/

#include <iostream>

int main() {
    int goal = 750;
    int month = 0;
    // TODO: Start savings at 0
    int savings = 0;

    // TODO: Update the savings to add $100 every month
        // TODO: Print the month and the amount in savings
    
    while (savings < goal) {
        month++;
        savings += 100;
        std::cout << "Month: " << month << ", Savings: $" << savings << std::endl;
    }

    std::cout << "You reached your goal in " << month << " months!" << std::endl;
    return 0;
}
