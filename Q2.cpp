/* Q.No. 2
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a
class named 'Rectangle' with a function named 'Area' which returns the area. Length*/

#include<iostream>
using namespace std;

class Rectangle{
	
	private:
		int length,breadth;
		

   public:
   	
   	int Area(int l,int b)
   	{
   		return(l*b);
	}
		
};

int main()
{
	Rectangle R1,R2;
	int Area1,Area2;
    Area1=R1.Area(4,5);
   cout<<"\n Area Of Rectangle 1:"<<Area1;
	
    Area2=R2.Area(5,8);
    cout<<"\n Area Of Rectangle 2:"<<Area2;
    
    return 0;
}