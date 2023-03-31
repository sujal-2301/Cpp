#include <iostream>
using namespace std;

int main()
{
    // int
    int x = 3;

    // long
    long y = 8;

    // long long
    long long z = 3988928;

    // float
    float f1 = 6.5;
    float f2 = 9;
    cout << f1;

    // double
    double d1 = 3.43298;

    // string
    string s1;
    // cin >> s1; // if u enter a string like - hey there , it will only pick hey
    // to make it pick both u need to define two string variable string s1,s2

    // other way to pick both is getline function , it will take the entire line
    string str;
    getline(cin, str);
    cout << str;

    // char for character
    char c = 'h'; // single quote only //important
    cout << c;
    cout << '\n';
}
