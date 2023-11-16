//Write a function to print squares of the fist natural numbers
#include<iostream>
using namespace std;

//Creating the Function
int square(int num){
    
 
    int i=1;
    
    for(int i=1; i<=num; i++){
    cout<<i*i<<endl;
}
    
    return 0;
}


int main(){
   int num;
cout<<"Give me a number: ";
cin>>num;
    square(num);


    return 0;
}