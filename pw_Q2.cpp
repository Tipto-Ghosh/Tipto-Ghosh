//Given radious of a circle: Write a function to print the area and circumference of the circle
//area of cirle is 3.1216*R....Here R is the radious
//circumference of circle is 2*3.1416*R

#include<iostream>
#include<cmath>
using namespace std;

//Creating the function for both
float circle(float radious){
    
    
   float area= 3.1416 * radious*radious;
   float circumference= 2*3.1416*(radious);
     cout<<"Area= "<<area<<endl;
     cout<<"Circumference= "<<circumference<<endl;
     return 0;
}



//using the Circle Function
int main(){

float radious;
 cin>>radious;

//Function call
circle(radious);
    return 0;
}