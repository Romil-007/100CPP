#include <iostream>
#include <cstring>

using namespace std;

// Custom function to concatenate two strings
void concatenateStrings(char str1[], const char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Iterate through the characters of str2 and append them to str1
    for (int i = 0; i < len2; i++) {
        str1[len1 + i] = str2[i];
    }

    str1[len1 + len2] = '\0'; // Add a null terminator to end the concatenated string
}

int main() {
    char str1[100], str2[100];
    
    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));
    
    cout << "Enter the second string: ";
    cin.getline(str2, sizeof(str2));

    // Ensure the combined length of the strings doesn't exceed the buffer size
    if (strlen(str1) + strlen(str2) < sizeof(str1)) {
        concatenateStrings(str1, str2);
        cout << "\nConcatenated string: " << str1 << endl;
    } else {
        cout << "Concatenation exceeds buffer size. Strings cannot be concatenated." << endl;
    }

    return 0;
}
