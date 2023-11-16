#include<iostream>
#include<math.h>
using namespace std;


bool isPowerFour(int n){

    for(int i=0; i<n; i++){
        
        int ans = pow(4,i);

        if(ans== n){
           
            return true;
        }
      }
    
    
    return false;
}


int main(){

int n;
cin>>n;

cout<<isPowerFour(n);

return 0;
    
}