#include <iostream>
using namespace std;

int main(){
    //prime number are numnbers having factors of itself and 1
    int n, i;
    cin>>n;
    for(i = 2 ; i<n ; i++){
        if(n%i==0){
            cout<<"Non Prime";
            break;
        }
    }
    if(i==n){
    cout<<"It is the Prime number";
    }
    return 0;
}