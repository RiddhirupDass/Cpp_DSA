#include<iostream>
#include<math.h>
using namespace std;

int convo(int num){

    int i=0;
   int decimal=0;

   while(num>0){

       decimal+=((pow(8, i))*(num%10));

       num/=10;
       i++;
   }

   return decimal;
}

int main(){

    int n;
    cout<<"please input a number: ";
    cin>>n;

    cout<<convo(n);

    return 0;
}