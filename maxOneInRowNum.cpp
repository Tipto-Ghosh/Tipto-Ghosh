#include<iostream>
#include<vector>
using namespace std;

int main(){

int row, col;
cout<<"Enter row and col: ";
cin>>row>>col;


vector<vector<int>>matrix(row,vector<int>(col));

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>matrix[i][j];
    }
}

cout<<endl;
cout<<"Enter matrix is: "<<endl;

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
          cout<<matrix[i][j]<<" ";
    } 
    cout<<endl;
}


int maxOneCounter=0;
int maxOneRow =-1;


for(int i=0; i<row; i++){
    int onesCounter=0;
    for(int j=0; j<col; j++){
        if(matrix[i][j]==1){
            onesCounter+=1;
        }
    }
   if(maxOneCounter< onesCounter){
       maxOneCounter=onesCounter;
       maxOneRow = i;
   } 
}

cout<<"Max one is: "<<maxOneCounter<<endl;
cout<<"Max one Row is: "<<maxOneRow;



    return 0;
}