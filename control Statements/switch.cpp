#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    switch (a)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Nameste" << endl;
        break;
    case 'c':
        cout << "Hola" << endl;
        break;
    case 'd':
        cout << "Salute" << endl;
        break;    
    default:

    cout<<"I am a robot not a human"<<endl;
        break;
        
    }
    return 0;
}