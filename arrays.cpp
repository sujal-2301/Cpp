#include <iostream>
using namespace std;

int main()
{

    // 1D array
    int arr[3]; // array containing 3 integers
    arr[0] = 4;
    arr[1] = 8;
    arr[2] = 1;

    cout << arr[2] << "\n";

    // 2D array
    int arr2d[3][5]; // 3 is row number and 5 is column number
    arr2d[2][3] = 42;
    cout << arr2d[2][3];
    // values that are not assigned have some random garbage value
    cout << arr2d[3][4]; // eg 3972972729 or 72917373 etc
    return 0;
}
