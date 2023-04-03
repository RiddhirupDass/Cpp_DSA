#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Value: ";
    cin>>num;

    for(int i=1; i<=num; i++){

        for(int j=1; j<=(2*num); j++){

            (j<=i)?cout<<"*":((j>i) && (j<=(2*num)-i))?cout<<" ":cout<<"*";
        }

        cout<<endl;
    }

    for(int i=num; i>=1; i--){

        for(int j=1; j<=(2*num); j++){

            (j<=i)?cout<<"*":((j>i) && (j<=(2*num)-i))?cout<<" ":cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}