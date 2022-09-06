#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cin >> a >> b;
    cout << "Please enter operator : ";
    cin >> c;
    switch (c)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    case '%':
        cout << a % b << endl;
        break;
    default:
    cout<<"Invalid Operator"<<endl;
        break;
    }

    return 0;
}