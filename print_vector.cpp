#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<vector<int>>vect={{1,2,3},
                         {4,5,6},
                         {7,8,9}}; //vect is the variable name of our 2d vector.


//print the vector
for(int i=0; i<vect.size(); i++){

    for(int j=0; j<vect[i].size(); j++){

        cout<<vect[i][j]<<" ";

    }
    cout<<endl;
}

/*
 for (vector<int> vect1D : vect) 
    { 
        for (int x : vect1D) 
        { 
            cout << x << " "; 
        }     
        cout << endl; 
    } 
  
  */










    return 0;
}