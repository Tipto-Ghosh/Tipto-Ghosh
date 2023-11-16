//Define a program to find out whether a given number is even or odd.
#include<iostream>
using namespace std;

//Declearing the Function which name is odd.
int odd(int num){
    
    if(num%2==0){
        cout<<"Given number is Even.";
    }
    else{
        cout<<"Given number is odd.";
    }
}



//Using the function
int main(){

int value;
cout<<"Enter the value you want to test: ";
cin>>value;

odd(value);
    return 0;
}