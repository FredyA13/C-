/* Task:
Write a program that declares variables for the following real-world data. You must choose the correct type from:

    int

    float

    double

    char

    std::string

    bool

Then, print all the values in a clear sentence. */

/*
Variables to declare:
Description                         Variable Name   Expected Value
Number of siblings	                siblings	    3
Average temperature (in Celsius)	temperature	    36.65
Your middle initial	                middleInitial	'J'
Whether you passed the exam	        passedExam	    true
Your full name	                    fullName	    "John Jane Doe"
Pi (approximate)	                pi	            3.141592653589793
*/

/*
John Jane Doe has 3 siblings.
The average temperature is 36.65 degrees Celsius.
Their middle initial is J.
They passed the exam: true.
Pi is approximately 3.141592653589793.
*/

#include <iostream>
#include <string>

int main() {
    // TODO: Initialize the siblings variable
    int siblings = 3;

    // TODO: Initialize the temperature variable
    float temperature = 36.65;

    // TODO: Initialize the middleInitial variable
    char middleInitial = 'J';

    // TODO: Initialize the passedExam variable
    bool passedExam = true;

    // TODO: Initialize the fullName variable
    std::string fullName = "John Jane Doe";

    // TODO: Initialize the pi variable
    double pi = 3.141592653589793;

    // TODO: Print the sentences
    std::cout << fullName << " has " << siblings << " siblings " << std::endl;
    std::cout << "The average temperature is " << temperature << " degrees Celsius " << std::endl;
    std::cout << "Their middle initial is " << middleInitial << std::endl;
    std::cout << "They passed the exam: " << passedExam << std::endl;
    std::cout << "Pi is approximately " << pi << std::endl;

    return 0;
}