//Write a program to delete all the vowels from the string.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cout << "Enter a string: ";
    cin.getline(str, 200);

    int len = strlen(str);
    char result[200];
    int index = 0;

    for (int i = 0; i < len; i++) {
        char ch = str[i];
        // Check if vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[index++] = ch; // copy consonant
        }
    }

    result[index] = '\0'; // null terminate

    cout << "String after deleting vowels: " << result << endl;
    return 0;
}
