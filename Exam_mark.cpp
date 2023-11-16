#include<iostream>
using namespace std;

int main(){


float sum=0;


for(int i=1; i<=10; i++){
    
float num;
    cout<<"Enter the num of sub "<<i<<" : ";
    cin>>num;
    sum+=num;
}

cout<<sum<<endl;
float percent =(sum/10);

cout<<"Percent : "<<percent;



    return 0;
}