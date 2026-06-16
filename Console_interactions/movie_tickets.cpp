/*
Write a program that:

    Asks the user to enter their age (int)

    Asks for the number of tickets they want (int)

    Then asks for their full name (std::getline)

    Then asks for their favorite movie title (std::getline)

    Prints a reservation summary
*/

#include <iostream>
#include <string>

int main() {
    int age;
    int tickets;
    std::string name;
    std::string movie;

    std::cout << "Welcome to the movie ticket reservation system!" << std::endl;

    // TODO: Get age
    std::cout << "Give your age: ";
    std::cin >> age;

    // TODO: Get number of tickets
    std::cout << "How many tickets do you want? ";
    std::cin >> tickets;

    //Clear the input buffer before using std::getline
    std::cin.ignore(1000, '\n');

    // TODO: Get full name
    std::cout << "Give your full name: ";
    std::getline(std::cin, name);

    // TODO: Get favorite movie
    std::cout << "What is your favorite movie? ";
    std::getline(std::cin, movie);

    // TODO: Print the ticket summary
    std::cout << "Reservation Summary:" << std::endl;

    std::cout << "Name: " << name << std::endl;
    std::cout << "Favorite Movie: " << movie << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Number of tickets: " << tickets << std::endl;

    return 0;
}
