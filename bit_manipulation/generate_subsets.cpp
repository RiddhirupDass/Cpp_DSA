#include<iostream>
using namespace std;

void subsets(char arr[], int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if(i&(1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Please input size: ";
    cin>>n;
    char arr[n];
    cout<<"Please input charecters: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    subsets(arr, n);
    return 0;
}