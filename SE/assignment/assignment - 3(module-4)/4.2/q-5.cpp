#include<iostream>
using namespace std;

class Cricketer{
	
	protected:
			//data member
		string name;
		
	public:
			//member function
		inputname(string n)		//intilize value of name data member
		{
			name = n;
		}
};

class Batsman : public Cricketer{
	
	private:
			//data members
	int total_runs;
	float average_runs;
	int best_performance;
	int match;
	
	public:
		
			//member functions	
		input_data()		//function for input data
		{
			cout<<"Enter how many match player played     : ";
			cin>>match;
			cout<<"Enter Player's Total runs in "<<match<<" matchs : ";
			cin>>total_runs;
			cout<<"Enter player's Best performance        : ";
			cin>>best_performance;
		}
		
		average()		//function for calculate average runs
		{
			average_runs = total_runs / static_cast<float>(match);
		}
		
		Display()		//Function for Display data
		{
			cout<<endl<<endl<<"     * Cricketer Details *     "<<endl;
			cout<<"Name             : "<<name<<endl;
			cout<<"Total Runs       : "<<total_runs<<" runs"<<endl;
			cout<<"Average Runs     : "<<average_runs<<" runs per match "<<endl;
			cout<<"Best Performance : "<<best_performance<<" runs"<<endl;
		}
};

main()
{
		string name;
				//user input
		cout<<"Enter Cricketer Name                   : ";
		getline(cin,name);
		
		Batsman b;			//object creation
				
				//call the member functions
		b.inputname(name);
		b.input_data();
		b.average();
		b.Display();		
}

