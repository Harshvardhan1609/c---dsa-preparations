#include <iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    for(int j = 0 ; j<=i-1; j++){
        for(int k=0; k<=j; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}