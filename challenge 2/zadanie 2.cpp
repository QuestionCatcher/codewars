
#include<iostream>
#include <string>

std::string greet(const std::string& n){
  return "Hello, " + n + " how are you doing today?";
}
int main(){
    
    std::string n = "Maciek";
    std::cout << greet(n) << std::endl;

    return 0;
}