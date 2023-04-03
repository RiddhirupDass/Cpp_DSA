#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Pleae input value: ";
    cin>>num;

    for(int i=1; i<=num; i++){

        int j=1, k=i;
        for(; j<=(num-i); j++){

            cout<<"  ";
        }

        for(; j<=num; j++){

            cout<<k--<<" ";
        }

        k=2;
        for(;j<=(num+i-1); j++){

            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}