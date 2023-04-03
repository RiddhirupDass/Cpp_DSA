#include<iostream>
#include<math.h>
using namespace std;

int convo(int num){

    int i=0;
    int octal=0;
    
    while(num>0){

        octal+=(pow(10, i))*(num%8);

        num/=8;
        i++;
    }

    return octal;
}

int main(){

    int n;

    cout<<"Please input a number: ";
    cin>>n;

    cout<<convo(n);

    return 0;
}