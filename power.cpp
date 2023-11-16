#include<iostream>
using namespace std;
int main(){

//Give me two num a and b 
//Find a raise to the power b

cout<<"Give me two number: ";
int a,b;
cin>>a>>b;
int result=1;
for(int i=0; i<b; i++){
result = result*a;
}

cout<<result;

    return 0;
}