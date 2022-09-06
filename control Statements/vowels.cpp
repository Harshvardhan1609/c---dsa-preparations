#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    switch (a)
    {
    case 'a':
        cout << "a is Vowel";
        break;
    case 'e':
        cout << "e is Vowel";
        break;
    case 'i':
        cout << "i is Vowel";
        break;
    case 'o':
        cout << "o is Vowel";
        break;
    case 'u':
        cout << "u is Vowel";
        break;
    default:
        cout << "Not a vowel." << endl;
        break;
    }
    return 0;
}