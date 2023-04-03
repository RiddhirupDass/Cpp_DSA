#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Please input size: ";
    cin>>n>>m;
    int arr[n][m];

    cout<<"Input values: "<<endl;
    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            cin>>arr[i][j];
        }
    }

    int temp;
    for(int i=0; i<n; i++){
        for(int j=i; j<m; j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}