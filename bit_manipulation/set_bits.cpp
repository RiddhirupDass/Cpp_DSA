#include<iostream>
using namespace std;

int count_setBits(int n){

    int count = 0;
    while(n!=0){
        n=(n&(n-1));
        count ++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Please input number: ";
    cin>>n;
    cout<<count_setBits(n);
    return 0;
}