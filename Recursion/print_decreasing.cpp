#include<iostream>
using namespace std;

void decreasing(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }

    cout<<n<<" ";
    decreasing(n-1);
}
int main(){
    int n;
    cout<<"Please enter upper bound: ";
    cin>>n;

    cout<<"The decreasing order would be: ";
    decreasing(n);
    return 0;
}