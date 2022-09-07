#include <iostream>
using namespace std;
int main()
{
    int j ,p;
    cin >> j;
    cin >> p;
    for (int k = 0; k <= j-1; k++)
    {
        for (int i = 0; i < p; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}