#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"Please input a number: ";
    cin>>n;

    int sum=0;

    while(n>0){

        sum = (sum*10) + (n%10);

        n=n/10;
    }

    cout<<sum;

    return 0;
}