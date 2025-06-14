#include <iostream>
using namespace std;

int main() {
    char word[] = "hello";  // this is a string (array of characters)
    int count = 0;          // we will store the length here

    while (word[count] != '\0') {
        count = count + 1;  // keep counting until we find '\0'
    }

    cout << "Length of the string: " << count << endl;
    
    return 0;
}
