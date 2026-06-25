/*
Write a program that tracks how many pages a student read each day over a week.

This version uses a vector instead of a fixed-size array.

The program should:
1. Ask the user to enter 7 values (pages read each day)
2. Store those values in a std::vector
3. Print how many pages were read each day
4. Print the total pages read at the end
*/

#include <iostream>
#include <vector>

int main() {
    std::vector<int> pages;
    int input;
    int total = 0;

    std::cout << "Enter pages read each day (7 days):\n";

    // TODO: Take user input

    // To add values to the end of a vector you can use the .push_back() method
    // ex: my_vector.push_back(1); would add the integer 1 to the end of the vector
    for(int i = 0; i < 7; i++){
        std::cout << "Day " << (i+1) << ": ";
        std::cin >> input;
        pages.push_back(input);

        total += pages[i];
    }


    // TODO: Print the pages read each day

    // Print total pages
    std::cout << "\nTotal pages: " << total << std::endl;

    return 0;
}
