#include <iostream>
using namespace std;

int main(){

    int n, max= INT_MIN;
    cout<<"Please input size: ";
    cin>>n;
    int arr[n], lar[n];

    cout<<"Please insert values: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    for(int i=0; i<n; i++){

        if(arr[i]>max){

            max=arr[i];
            lar[i]=max;
        }

        else{

            lar[i]=max;
        }
    }

    cout<<endl;
    for(int i=0; i<n; i++){

        cout<<lar[i]<<" ";
    }

    return 0;
}