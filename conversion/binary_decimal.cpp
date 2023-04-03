#include<iostream>
#include<math.h>
using namespace std;

int con(int num){

int last_digit;
int i=0;
int decimal_value;
    while(num>0){

        last_digit=(num%10);
        num/=10;

        decimal_value+=(last_digit*(pow(2, i)));
        
        i++;
    }

    return decimal_value;  
}

int main(){

    int n;
    cout<<"Please input a binary number: ";
    cin>>n;

    cout<<con(n);

    return 0;
}