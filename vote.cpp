#include<iostream>
using namespace std;



bool vote(int age){

     if(age<18){
        cout<<"Not eligible.";
        return true;
     }
     cout<<"Eligible.";
     return false;
}







int main(){

int age;
cin>>age;

vote(age);





    return 0;
}