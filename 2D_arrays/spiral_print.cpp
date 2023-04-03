#include<iostream>
using namespace std;
int main(){

    int n, m;
    cout<<"Please input size: ";
    cin>>n>>m;

    int arr[n][m];
    cout<<"Please input values:"<<endl;
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++)
            cin>>arr[i][j];
    }
cout<<endl;

    int start_row=0, end_row=(n-1);
    int start_col=0, end_col=(m-1);

    while(start_row<=end_row && start_col<=end_col){
    for(int col=start_col; col<=end_col; col++){

        cout<<arr[start_row][col]<<" ";
    }
    start_row++;
    cout<<endl;
    for(int row=start_row; row<=end_row; row++){

        cout<<arr[row][end_col]<<" ";
    }
    end_col--;
    cout<<endl;
    for(int col=end_col; col>=start_col; col--){
        cout<<arr[end_row][col]<<" ";
    }
    end_row--;
    cout<<endl;
    for(int row=end_row; row>=start_row; row--){
        cout<<arr[row][start_col]<<" ";
    }
    start_col++;
    cout<<endl;
    }

    return 0;
}