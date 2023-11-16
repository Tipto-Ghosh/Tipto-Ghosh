#include<iostream>
using namespace std;

//Write a program to display multification of two matrices entered by the user
//To multiple the colm of 1st one must need to be equal to the matrix 2 row num
//if array1 is (r1,c1) and array2 is (r2,c2) then the result array will be (r1,c2)

int main(){

//int row, column;

//row = 2;
//column = 2;

int array1[2][2] ={{1,2},{3,4}};
int array2[2][2]={{5,6},{7,8}};

int array[2][2];
for(int i=0; i<2; i++){ //for loop for iterate through the row of array

    for(int j=0; j<2; j++){ //this loop is for iterate through the column of array

        for(int k=0; k<2; k++){ 
 
                array[i][j] += array1[i][k]*array2[k][j];
        }
    }
}



for(int i=0; i<2; i++){

    for(int j=0; j<2; j++){

        cout<<array[i][j]<<" ";
    }

    cout<<endl;
}






    return 0;
}