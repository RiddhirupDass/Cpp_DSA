#include<iostream>
using namespace std;

bool powerof_2(int n){

    return (n && !(n & (n-1)));
}

int main(){
    int n;
    cout<<"Please input value: ";
    cin>>n;

    (powerof_2(n))?cout<<"It is a power of 2":cout<<"It isn't a power of 2";
    return 0;
}