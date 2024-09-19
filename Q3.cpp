
/* Q.No. 3
Write a C++ program to create a class Student with data members Roll_No, Student_Name, Class. Write
member functions to accept and display Student information also display count of students. (Use Static
data member and Static member function)*/
#include <iostream>
using namespace std;

class Student {
private:
    static int studentCount; 
    int rollNo;  
	string name;            
    

public:
    
    Student(int rNo,string sName, string  sClass) 
    {
    	rollNo=rNo;
    	name=sName;
    	
        studentCount++;
    }

    
    static int getStudentCount() 
	{
        return studentCount;
    }

   
    void displayInfo() 
	{
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name <<endl;
        
    }
};


int Student::studentCount = 0;

int main() {
    
    Student student1(1, "Alice", "10th Grade");
    Student student2(2, "Bob", "11th Grade");
    Student student3(3, "Charlie", "12th Grade");

    
    student1.displayInfo();
    cout << endl;
    student2.displayInfo();
    cout <<endl;
    student3.displayInfo();
    cout << endl;

   
    cout << "Total number of students: " << Student::getStudentCount() <<endl;

    return 0;
}
