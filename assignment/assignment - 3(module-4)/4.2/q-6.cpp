#include<iostream>
using namespace std;

class Person{
	
	protected:
		//data members
	string name;	
	int age;
	
	public:
				//member function
		values(string s,int a)		//assign values
		{
			name = s;
			age = a;
		}
};

class Student : public Person{
	
	private:
		//data members
	float percentage;
	
	public:
		//member functions
	marks(int total,int marks)			//for find percentage
	{			
		percentage = (marks * 100) /static_cast<float>(total);
	}
	
	Display()					//display Student data
	{	
		cout<<"-----STUDENT DETAILS-----"<<endl;
		cout<<"NAME       : "<<name<<endl;
		cout<<"AGE        : "<<age<<endl;
		cout<<"PERCENTAGE : "<<percentage<<" % "<<endl;
	}
};

class Teacher : public Person{
	
	private:
		//data members
	int salary;
	
	public:
				//member functions
	setsalary(int sal)		//assign value to data member of class
	{
		salary = sal;
	}
		
	display()					//display Teacher data
	{
		cout<<"-----TEACHER DETAILS-----"<<endl;
		cout<<"NAME   : "<<name<<endl;
		cout<<"AGE    : "<<age<<endl;
		cout<<"SALARY : Rs."<<salary<<endl;		
	}
};

main()
{
	Student s;   //Student class's object
	Teacher t;   //Object of Teacher class
	
	string n1,n2;
	int age1,age2,marks,tmarks,sal; 
			
			//user input for student
	cout<<"Enter Student Details :"<<endl;
	cout<<"Name           : ";
	getline(cin,n1);
	cout<<"Age            : ";
	cin>>age1;
	cout<<"Total Marks    : ";
	cin>>tmarks;
	cout<<"Obtained Marks : ";
	cin>>marks;
	
	cout<<endl<<endl;
	cin.ignore();
	
			//user input for Teacher
	cout<<"Enter Student Details :"<<endl;
	cout<<"Name   : ";
	getline(cin,n2);
	cout<<"Age    : ";
	cin>>age2;
	cout<<"Salary : Rs.";
	cin>>sal;
	
	cout<<endl<<endl;
	
			//function call using student class object
	s.values(n1,age1);			//Person class function	call
	s.marks(tmarks,marks);		//Student class function call	
	s.Display();				//Student class function call
			
	cout<<endl<<endl;
	
			//function call using Teacherr class object
	t.values(n2,age2);			//Person class function	call
	t.setsalary(sal);			//Teacher class function call
	t.display();				//Teacher class function call
}

