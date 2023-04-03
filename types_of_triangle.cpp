#include<iostream>
using namespace std;

int main(){

    int s1,s2,s3;

    cout<<"Put the measurements of three sides of a triangle(in cm):"<<endl;
    cin>>s1>>s2>>s3;

    if(s1==s2 && s2==s3){
        cout<<"This is an equilateral triangle";
    }
    else if(s1==s2 || s2==s3 || s1==s3){
        cout<<"This is an isosceles triangle";
    }
    else{
        cout<<"This triangle is a scalene triangle";
    }

    return 0;

}