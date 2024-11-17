

#include<iostream>
using namespace std;

class Student{
	
	protected:
				//data member
		int	roll_no;
		
	public:
				//member function
		setrollno(int number)	//assign value 
		{
			roll_no = number;
		}
		
};

class Test : public Student{
	
	protected:
			//data member
	int marks1;
	int marks2;
	
	public:
			//member function
		setmarks(int m1,int m2)		//assign values
		{
			marks1 = m1;
			marks2 = m2;
		}
};

class Result : public Test{
	
	private:
			//data member
		int total_marks;
	
	public:
				//member function
		display()		//display data
		{
			cout<<"   ** Student Details **  "<<endl;
			cout<<"Roll No          : "<<roll_no<<endl;
			cout<<"Marks in Maths   : "<<marks1<<endl;
			cout<<"Marks in Science : "<<marks2<<endl;
			total_marks = marks1 + marks2;
			cout<<"Total marks      : "<<total_marks;
		}
};

main()
{
	Result r; 		//object creation
	
	int roll,mark1,mark2;
	
					//user input
	cout<<"Enter Roll No          : ";
	cin>>roll;
	cout<<"Enter Marks in Maths   : ";
	cin>>mark1;
	cout<<"Enter Marks in Science : ";
	cin>>mark2;
	
	cout<<endl<<endl;
		
			//call member functions from all classes
	r.setrollno(roll);			//Student class function
	r.setmarks(mark1,mark2);    //test class function
	r.display();				//result class function
}

