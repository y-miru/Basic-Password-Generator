#include <iostream>
#include <list>
// Below is the header for rand()
#include <cstdlib>
// Below is a header for time, as of now I have no idea what it does outside it's use in 'srand'
#include <ctime>


using namespace std;

list<char> alphabetical = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


int main()
{
    srand((unsigned)time(NULL)); // This is to ensure that the number generator generates a different random number each time

    int numCounter = rand() % 11+5; // Attempt to generate a number between 10 and 15 (gen random number up to 10, then add 5)

    for (int N = 0; N < numCounter ; N++) { // For loop will run numCounter times

        int numDigit = rand() % 26+1; // Attempt to generate a number between 1 and 26

        cout << numDigit; // Print of the digits
    }

    cout << endl;
    cout << "Basic Password Generator" << endl;

    return 0;
}
