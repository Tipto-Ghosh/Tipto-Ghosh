#include<iostream>
using namespace std;
int main(){

//find the max from 5 int num.

float a,b,c,d,e;

cout<<"Enter any five num: ";
cin>>a>>b>>c>>d>>e;


//comapre between a and b
//get max1
int max1;

if(a>=b){
    max1 = a;
}
else{
    max1 = b;
}


//compare between c and d
//get max2
int max2;

if(c>=d){
    max2 = c;
}
else{
    max2 = d;
}




//compare between max1 and max2
//get max3
int max3;

if(max1 >= max2){
    max3 = max1;
}

else{
    max3 = max2;
}




//compare between max3 and e
//get the maximum

int max;

if(max3 >= e){
    max = max3;
}

else{
     max = e;
}
   

cout<<max;



    return 0;
}