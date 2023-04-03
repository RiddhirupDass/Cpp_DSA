#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Please input number: ";
    cin>>n;

    for(int i=n; i>=1; i--){

        for(int j=1; j<=(i-1); j++){

            cout<<" ";
        }

        for(int h=1; h<=n; ++h){

            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}