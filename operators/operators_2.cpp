#include <iostream>
using namespace std;
int main()
{
    int e;
    cin >> e;
    for (int b = 0; b <= e; b++)
    {
        if (b % 3 == 0 && b % 2 == 0)
        {
            cout << b << endl;
        }
    }

    return 0;
}