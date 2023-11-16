//Given the age of a person,write a function to check if the person is eligible to vote or not.

#include<iostream>
using namespace std;

//Creating the Function
int vote(int age){
    //cin>>age;
    if(age>=18){
     cout<<"Eligible for the vote."<<endl;
    }
    else{cout<<"Not eligible for the vote.";
    }
return 0;
}



//Using the Function of vote
int main(){
int age;

cout<<"Give me the age: ";
cin>>age;
vote(age);//Calling the Function
    return 0;
}