/*
Write a program that tracks how many pages a student read each day over a week. 

Your program should use the pages array and print out the amount of pages read each day of the week

Lastly, your program should print the total pages read for the week at the end
*/

#include <iostream>
#include <vector>

int main() {
    int pages[7] = {10, 15, 12, 14, 15, 40, 60};
    int total = 0;

    // TODO: Print pages for each day of the week
    std::cout << "----- Pages read per day -----" << std::endl;
    // size of my array
    int arrayLength = sizeof(pages) / sizeof(pages[0]);

    for(int i = 0; i < arrayLength; i++){
        std::cout << "Pages read in day: " << i + 1 << " - " <<pages[i] << std::endl;
    }

    // TODO: Keep a track of total pages read

    // Print total pages
    for(int i = 0; i < arrayLength; i++){
        total += pages[i];
    }
    std::cout << "\nTotal pages: " << total << std::endl;

    return 0;
}
