#include <bits/stdc++.h>
using namespace std;

const double PI = 3.14159; // PI cannot be changed

int main()
{
    int radius;
    cout << "Enter circle radius: ";
    cin >> radius;
    double area = PI * radius * radius;
    printf("Area of circle: %lf\n", area);
    return 0;
}
