#include<iostream>
#include<cmath>
using namespace std;

bool primenum(int num){

    for(int i=2; i<=sqrt(num); i++){

        if(num%i==0){

            return false;
        }
    }

    return true;
}


int main(){

    int a,b;

    cout<<"Please input range: ";
    cin>>a>>b;

    for(int j=a; j<=b; j++){

    if(j==1){

        continue;
    }

    primenum(j)?cout<<j<<" ":cout<<"";
    }

    return 0;
}