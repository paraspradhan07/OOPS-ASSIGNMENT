#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c;
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    c = a;
    a = b;
    b = c;
    cout << "Afer Swapping" << "\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b;
    return 0;
}