#include <iostream>
using namespace std;
int main()
{
    //operators = binary and ternary operators
    //Binary operators are the operators which operate on 2 operands.
    //Unary  operators are the operators which operates on the single operands
    int n;
    cin>>n;
    if(n>=10){
        if(n==10){
            cout<<"Numnber is equal to 10";
            exit(0);
        }
        cout<<"Number is greater then 10";
    }
    else{
        cout<<"Number is lesser then 10";
    }
    return 0;
}