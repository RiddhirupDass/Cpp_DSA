#include<iostream>
using namespace std;

int main(){

    int a;

    cout<<"Put a number:"<<endl;
    cin>>a;

    int i;

    for( i=2; i<a; i++){

        if(a%i==0){

            break;
        }
    }

    if(i==a){ 
        cout<<a<<" is a prime number"<<endl;
    }

    else{ cout<<a<<" is not a prime number";
    }

    return 0;
}