#include <iostream> 
using namespace std;

int main()
{
    int k;
    cin >> k;
    for(int i = k ; i>=0 ; i--)
    {
        for(int j = 1 ; j<= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}