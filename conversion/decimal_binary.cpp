#include<iostream>
#include<math.h>
using namespace std;

int convo(int num){

    int binary=0;
    int i=0;
    while(num>0){

        binary+=(pow(10, i)*(num%2));
        num/=2;
        i++;
    }

    return binary;
}

int main(){

    int n;

    cout<<"Please input a number: ";
    cin>>n;

    cout<<convo(n);

    return 0;
}