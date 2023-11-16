#include<iostream>
using namespace std;
int main(){

//To take input go for two different loop.
//1st one to iterate all the row
//2nd one to iterate through all the collumn.
//take the input for rows and columns.
cout<<"give the row and column num: ";
int m , n; //m is row and n is column
cin>>m>>n;

int array [m][n];

cout<<"give all the elements: ";

for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

            cin>>array[i][j];


        }    

}


//print the array
//to print we will ue the same loop
//one for row and other for column.
for(int i=0; i<m; i++){

    for(int j=0; j<n; j++){

        cout<<array[i][j]<<" ";
    }
    cout<<endl; //after printing each loop it will go to a new line.
}





    return 0;
}