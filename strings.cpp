#include <iostream>
using namespace std;

int main()
{
    string s = "Sujal";
    // to find length
    int len = s.size(); // length of the string
    int ind = len - 1;  // last index value of string
    cout
        << "length = "
        << len << '\n'
        << "last index value is "
        << s[ind];
    return 0;
}
