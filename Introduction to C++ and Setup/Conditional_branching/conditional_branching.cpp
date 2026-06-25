/*
Write a program that:

    Asks the user for the length of their password

    Then outputs:

        "Too short" if length < 6

        "Acceptable" if between 6 and 12

        "Strong" if longer than 12
*/

#include <iostream>
#include <string>

int main() {
    std::string password;
    std::cout << "Enter your password: ";
    std::getline(std::cin, password);

    // TODO: Condition for short password
    std::cout << "Password is: " << password << std::endl;
    std::cout << "The length of password is: " << password.length() << std::endl;

    if(password.length() < 6){
        std::cout << "Too Short" << std::endl;
    }else if(password.length() > 6 && password.length() < 12){
        std::cout << "Acceptable" << std::endl;
    }else{
        std::cout << "Strong" << std::endl;
    }

    // TODO: Condition for acceptable password

    // TODO: Condition for strong password

    return 0;
}