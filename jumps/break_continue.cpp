#include <iostream>
using namespace std;

int main()
{
    int pocketmoney = 3000;
    for(int date = 1 ; date<=30 ; date++){
        if(date%2==0){
            continue;
        }
        cout<<"You can go out today !\n";
        pocketmoney = pocketmoney-300;
        if(pocketmoney == 0){
            break;
        }
    }
    return 0;
}