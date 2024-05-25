#include <iostream>

int main() {
    //Intilize the variables
    std::string firstString, secondString, concatenatedString;

    //Set up the loop to take input 3 times:
    for(int i = 0; i < 3; i++) {
        std::cout << "Enter first String: "; //Grab the first string.
        std::getline(std::cin, firstString);

        std::cout << "Enter second Sting: "; //Grab second string
        std::getline(std::cin, secondString);

        //Combine the strings
        concatenatedString = firstString + secondString;


        //Output the combined strings
        std::cout << "Concatenated String is: " << concatenatedString << std::endl;
    }

    return 0;
}
