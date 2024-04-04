/*
"Write function RemoveExclamationMarks,
which removes all exclamation marks from a given string."
*/


#include <iostream>

#include <string>

std::string removeExclamationMarks(std::string str){
    std::string result;
    for (char ch : str){
        if (ch != '!')
            result += ch;
        }
        return result;
    
}


int main(){
    std::string input = "He!!ll!!o!!!!12345!!!!";
    std::string output = removeExclamationMarks(input);
    std::cout << "Input: " << input << std::endl;
    std::cout << "Output: " << output << std::endl;
    return 0;
}