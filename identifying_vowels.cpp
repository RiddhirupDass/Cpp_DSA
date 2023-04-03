#include<iostream>
using namespace std;

int main(){

    char ch;
    
    cout<<"Put a charecter: ";
    cin>>ch;

   int lowercase= (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');

   int uppercase= ( ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');

   if(uppercase || lowercase){

       cout<<"It is a vowel";
   }
   else{
       cout<<"It is a consonant";
   }
    return 0;
}