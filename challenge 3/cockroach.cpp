/*
"The cockroach is one of the fastest insects. 
Write a function which takes its speed in km per hour and returns it in cm per second,
rounded down to the integer (= floored).

For example:
1.08 --> 30"
*/


#include <iostream>
using namespace std;

int main(){
    double a = 2.56651;
    int sum = (a * 100000 / 3600);

    cout << "wynik to: " << sum << endl;
 
 
    return 0;
}