// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string> // used to get string from user


int main(){
    std::string name; //initalizes the string
    std::cout << "Enter Name: " << std::flush; //ensures the output is fully out before recieving input
    std::cin >> name; //only works for single words. Need other for spaces.
    std::cout << "Nice to meet you, " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
