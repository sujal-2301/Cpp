#include <iostream>
using namespace std;

int main()
{

    // for loop
    for (int i = 1; i <= 10; i = i + 1)
    // initialize variable ; how many times it should run ; increment/decrement value

    { // print greetings 10 times
        cout << "greetings" << endl;
    }

    // while loop

    // intialize variable and intitial value;
    // while (condition)
    //  {
    // step value ;

    int j = 1;
    while (j <= 5)
    {
        cout << "hello " << j << endl;
        j += 1;
    }

    // do while loop
    // the first iteration of do always run irrespective of condition
    // after that while loop condition is checked
    // if it is false the loop terminates
    // if not it executes the do body statement
    // and so on

    int num = 2;
    do
    {
        cout << "testing " << num << endl;
        num = num + 1;
    } while (num <= 5);

    return 0;
}
