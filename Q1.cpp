#include<iostream>
using namespace std;
int main(){

//loop for row
for(int i=1; i<=5;i++){
    
    //Loop for space
    for(int j=1; j<=i; j++){
        cout<<" ";
    }
    //Loop for printing *
    for(int k=1; k<=(i*2)-1; k++){
        cout<<"*";
    }
    for(int l=1; l<=i; l++){
        cout<<" ";
    }
    cout<<endl;

}














    return 0;
}