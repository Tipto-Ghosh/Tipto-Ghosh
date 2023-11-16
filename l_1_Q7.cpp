//Define a function to find out if number is prime or not.

#include<iostream>
using namespace std;

//Creating the function
bool prime(){ //Why we use bool here.
    int num;
    cin>>num;
    for(int i=2; i<num; i++){
       if(num%i==0){
        return false;
       } 
       return true;
    }
}


//Using the Function Prime.
int main(){

//calling the function.
bool something = prime();
cout<< something;
}