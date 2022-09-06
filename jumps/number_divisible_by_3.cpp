#include <iostream>
using namespace std;

int main(){
    int a = 1;
    while(a<=100){
        if(a%3==0){
            a++;
            continue;
            
        }
        cout<<a<<endl;
        a++;
    }
    return 0;
}