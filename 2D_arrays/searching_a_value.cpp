#include<iostream>
using namespace std;

int main(){

    int n,m,key;
    cout<<"Please input size: ";
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            cin>>arr[i][j];
        }
    }
    bool flag=false;
    cout<<"Please input key: ";
    cin>>key;
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            if(arr[i][j]==key){

                flag = true;
                cout<<i<<j<<endl;
            }
        }
    }

    (flag)?cout<<"Element found!":cout<<"Element not present";
    return 0;
}