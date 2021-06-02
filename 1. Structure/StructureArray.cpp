#include<iostream>
#include<stdio.h>
using namespace std;
 struct student
 {
    string name;
    char gender;
    int rollno;
 };
	   
   
   int main()
{
    student stud1;   // we can also create variable without struct but in only c++ not in c.
   stud1.name="Suraj";
   stud1.rollno=124;
   stud1.gender='M';
   
   cout<<"Print the details of Stud1 :  "<<endl;
   cout<<"Name : "<<stud1.name<<endl;
   cout<<"Rollno : "<<stud1.rollno<<endl;
   cout<<"Gender : "<<stud1.gender<<endl;
   
   // Now we are creating structure of array and assigning the data after that we access.
   
   struct student stud[5];
   stud[0].name="Rohit";
   stud[0].rollno=134;
   stud[0].gender='M';
   
   cout<<"Print the details of Stud[0] :  "<<endl;
   cout<<"Name : "<<stud[0].name<<endl;
   cout<<"Rollno : "<<stud[0].rollno<<endl;
   cout<<"Gender : "<<stud[0].gender<<endl;
     
	 cout<<"size of stud[0] :"<<sizeof(stud[0])<<endl; 
	 cout<<"size of stud : "<<sizeof(stud)<<endl;  	
}
