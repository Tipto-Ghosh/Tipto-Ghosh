#include<iostream>
using namespace std;
int main(){
//Pattern_7 starts here

//Line/row
for(int i=1; i<=5; i++){
    
//space
    for(int j=1; j<=5-i-1; j++){
cout<<" ";
}
//star
  for(int k=1; k<=(2*i)-1; k++){
   cout<<"*";
}
//space
     for(int j=1; j<=5-i-1; j++){
cout<<" ";
}

cout<<endl;
}


//Pattern_7 ends here

//Pattern_8 starts here
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
//Pattern_8 ends here


    return 0;
}