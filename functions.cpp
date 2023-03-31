#include <iostream>
using namespace std;

// function common return types
// void --> nothing is returned

void printName(string name)
{
    cout << name << endl;
}

// take two numbers and print its sum

int sum(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    printName("Sujal");
    int n1, n2;
    cin >> n1 >> n2;
    int s = sum(n1, n2);
    cout << endl
         << s
         << endl;
    int m = max(n1, n2);
    int mn = min(n1, n2);
    cout << "max is "
         << m
         << endl
         << "min is "
         << mn;
    return 0;
}
