#include<iostream>>
using namespace std;
int main(){

int num;
cout<<"Enter a decimal number: ";
cin>>num;


int ans=0;

int power =1;

while(num>0){

    int last_digit = num%2;
    ans+=last_digit*power;
    power*=10;
    num/=2;
}

cout<<"Binary is: "<<ans;



    return 0;
}