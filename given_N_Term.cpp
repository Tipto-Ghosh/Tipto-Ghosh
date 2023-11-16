#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter the num:";
cin>>num;

int x=0, y=0, z=1;
int count = 0;
while(count<num){
    cout<<z<<" ";
    x=y;
    y=z;
    z=x+y;
    count++;
//cout<<z<<" ";
}







    return 0;
}