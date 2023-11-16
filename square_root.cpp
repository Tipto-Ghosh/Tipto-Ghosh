#include<iostream>
using namespace std;

int main(){

/*
float num;
cout<<"num: ";
cin>>num;


if(num<0){
    cout<<"Invalid input.";
    return 0;
}
if(num==0 || num==1){
    cout<<num;
    return num;
}
    
int ans =0;
for(long i=0; i<num; i++){
       
       if(i*i<=num){
          ans=i;
          
       }
       else{
        break;
       }

    
}

cout<<ans;
*/


//BINARY SEARCH: 


int num;
cout<<"Num: ";
cin>>num;


int low = 1, high=num;
int ans=1;

while(low<=high){
     int mid=(low+high)/2;

     if((mid*mid)<=num){
        ans = mid;
        low = mid+1;
     }
     else{
        high = mid-1;
        ans = high;
     }
}



cout<<"ans: "<<ans;



    return 0;
}