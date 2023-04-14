#include<iostream>
using namespace std;

void increasing(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }

    increasing(n-1);
    cout<<n<<" ";
    return;
}

int main(){
    int n;
    cout<<"Please enter upper bound: ";
    cin>>n;

    cout<<"The increasing order would be: ";
    increasing(n);
    return 0;
}