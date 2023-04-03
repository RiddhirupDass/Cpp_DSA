#include<iostream>
using namespace std;

bool com(int a, int b, int c){

     int num1=max(a, max(b,c));

     int num2;
     int num3;

     if(num1==a){

        num2=b;
        num3=c;
     }

     else if(num1==b){

         num2=a;
         num3=c;
     }

     else{

         num2=a;
         num3=b;
     }

    return (num1*num1==(num2*num2)+(num3*num3));
}

int main(){

    int x,y,z;

    cout<<"Input: ";
    cin>>x>>y>>z;

    if(com(x,y,z)){

        cout<<"It is a pythagorean triplet!";
    }

    else{

        cout<<"It isn't a pythagorean triplet...";
    }

    return 0;
}