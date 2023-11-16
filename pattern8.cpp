#include<iostream>
using namespace std;
int main (){

//Loop for the Line
for(int i=1; i<=5; i++){
  //Loop for the Space
  for(int j=1; j<=i-1; j++){
      cout<<" ";
  }
  //Loop for the Star
    for(int k=1; k<=(2*5)-(2*i+1); k++){
        cout<<"*";
    } 
//Loop for the Space
for(int j=1; j<=i-1; j++){
      cout<<" ";
  }
cout<<endl;
}

    return 0;
}