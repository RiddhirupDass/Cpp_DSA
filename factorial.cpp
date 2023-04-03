#include<iostream>
using namespace std;

void facto(int num){

    int prod=1;

    for(int i=1; i<=num; i++){

        prod=(prod*i);

    }

    cout<<prod;
}

int main(){

    int i;
    cout<<"Please input a number: ";
    cin>>i;

    facto(i);

    return 0;
}