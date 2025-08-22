/*(b) Write a program to reverse a string.*/
#include <iostream>
#include <string>
#include <algorithm> // for reverse()
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    reverse(str.begin(), str.end()); // STL function to reverse

    cout << "Reversed string: " << str << endl;
    return 0;
}
