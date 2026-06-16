#include <iostream>

int main() {
    double temp_in;
    double temp_out;
    char convertAgain = 'y';

    // TODO: if Celsius to Farhenheit
        // TODO: convert to Fahrenheit and print to console

    // TODO: if Fahrenheit to Celsius
        // TODO: convert to Celsius and print to console
    
    // Bonus Challenge (Optional) Add a loop so that after converting one temperature, 
        //the program asks the user if they want to convert another.

    while( convertAgain == 'y'){

        int choice;
        std::cout << "Convert:\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\nEnter your choice: ";
        std::cin >> choice;

        if(choice == 1){
            
            std::cout << "1. Celsius to Fahrenheit" << std::endl;
            std::cout << "Give the temperature: ";
            std::cin >> temp_in;
            temp_out = (temp_in * 1.8) + 32;
            std::cout << temp_in << " Celcius are " << temp_out << " grades Fahrenheit" << std::endl;

        }else if(choice == 2){
            
            std::cout << "2. Fahrenheit to Celsius" << std::endl;
            std::cout << "Give the temperature: ";
            std::cin >> temp_in;
            temp_out = (temp_in - 32) / 1.8;
            std::cout << temp_in << " Fahrenheit are " << temp_out << " grades Celcius " << std::endl;

        }else{
            std::cout << "Invalid choice!" << std::endl;
        }

        //Pedimos la solicitud
        std::cout << " Do you want convert other temperature? Press 'y'/N" << std::endl;
        //El usuario ingresa la solicitud 
        std::cin >> convertAgain;
        //Asignamos la entrada a la variable
        convertAgain = convertAgain;
    
    }

    return 0;
}
