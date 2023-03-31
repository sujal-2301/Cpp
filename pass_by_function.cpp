#include <iostream>
using namespace std;
// pass by value
void something(int num)
{
    num = num + 5;
    cout << num << endl;
    num = num + 10;
    cout << num << endl;
}

// pass by reference

// IMPORTANT
//  ARRAYS ARE ALWAYS PASSED BY REFERENCE BY DEFAULT

void some(int &num) // using & symbol we can send the actual value at memory address
{
    num = num + 5;
    cout << num << endl;
    num = num + 10;
    cout << num << endl;
}
int main()
{
    int num = 5;
    something(num);      // 10 , 15
    cout << num << endl; // value 15 doesnt get printed
    // the original value is not passed to function
    // a copy of the value is passed to the function
    // that is why when we print num its origianl value gets printed

    some(num);   // some(5) --> 10 , 20
    cout << num; // prints 20 as we are using pass by reference
    return 0;
}
