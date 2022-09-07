#include <iostream>
using namespace std;
int main()
{
    int i, j, k,p;
    cin >> j;
    cin >> k;
    for (i = 1; i <= j; i++)
    {
        for (p = 1; p <= k; p++)
        {
            if(i==1 || p==1){
                cout<<"*";
            }
            else if(i==j || p==k){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}