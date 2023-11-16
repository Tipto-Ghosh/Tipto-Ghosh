#include<iostream>
using namespace std;
int main( )
{
 int i, j, k, temp, temp1,rows,cols ;
 int a[rows][cols];
    cout<<"Enter rows:"<<endl;
	cin>>rows;
	cout<<"Enter cols:"<<endl;
	cin>>cols;            
       for (i = 0;i < rows;i++) //row of a
    {
        for (j = 0;j < cols;j++) // col of a
        {
            cout << "Enter array1" << "[" << i << "]" << "[" << j << "]"<<":" << endl;
            cin >> a[i][j]; // entering values for first array
        }
       
    }   
       cout<<"Array entered:"<<endl;
	    for (i = 0;i < rows;i++) //row of a
    {
        for (j = 0;j < cols;j++) // col of a
        {
            
            cout << a[i][j]<<" "; 
        }
        cout<<"\n";
    }          
    

    

  for(j=0;j<cols;j++)
     {
          for(i=0; i<rows; i++)
          {
                if(a[j][i]>a[j+1][i])
                {
                    temp=a[j][i];
                    a[j][i]=a[j+1][i];    
                    a[j+1][i]=temp;
                }    
             
          }
     
    }
     cout<<"\n\nArray after sorting:\n"<<endl ;
   	    for (i = 0;i < rows;i++) //row of a
    {
        for (j = 0;j < cols;j++) // col of a
        {
            
            cout << a[i][j]<<" "; //sorted array
        }
        cout<<"\n";
    }  
 }