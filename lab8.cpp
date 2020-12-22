#include <iostream>
using namespace std;

int main() {
    int* pointInt;
    float* pointFloat;

    pointInt = new int;
    pointFloat = new float;

    // assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // deallocate the memory
    delete pointInt, pointFloat;

    return 0;
}

