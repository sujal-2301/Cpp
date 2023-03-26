#include <iostream>  //for using cout and cin functions from std library
using namespace std; // dont have to write std::cout instead can write cout directly

int main() // main function of the program

{
    cout << "Hello world!!"; // << is used for output and we can write many lines one after another
    cout << "Output test"
         << "\n" // new line character for newline
         << "Hey";

    int x;
    int y;
    x = 29;

    cin >> y; // cin uses >> unlike cout , keep in mind
    cout << "value of x is " << x << " and value of y is" << y;

    return 0; // returning 0 as our main function is giving out int in definition
}