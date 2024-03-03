#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main() {

    srand((unsigned)time(NULL)); // Number generated will be different on each run

    int numCounter = rand() % 9+7; // Generate a number between 8 to 15, Password Lengths

    cout << "Your New Password:" << endl;

    for(int N = 0; N < numCounter ; N++) {
        int charDigit = rand() % 26+1; // Attempt to generate a number between 1 and 26

        cout << alphabet[charDigit]; // Accesses charDigit value of alphabet array
    }

    cout << endl;
    return 0;
}
