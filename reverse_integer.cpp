//Reverse a number
#include<iostream>
using namespace std;

int main(){

int digits;
cout<<"Enter total digits of the number: ";
cin>>digits;

int num;
cout<<"Enter any interger number: ";
cin>>num;

int array[digits];

int i=0;

while(num>0){
    
    int last_digit = num%10;
    array[i]= last_digit;
    num/=10;
    i++;
}

for(int i=0; i<digits; i++){
    cout<<array[i];
}




    return 0;
}