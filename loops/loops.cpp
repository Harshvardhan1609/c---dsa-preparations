#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;
    int d = 0;
    for (int b = 0; b <= a; b++)
    {
        d = d + b;
    }
    cout << d;
    return 0;
}