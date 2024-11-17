#include<iostream>
using namespace std;

class Bank
{
	private:
	//Data Members
	string name;			//Name of the depositor 
	long long accountno;	//Account Number 
	string account_type;	//Type of Account 
	float balance;			//Balance amount in the account
	
	public:
	//Data Functions
	values(string n,int acno,string type,int bal)	//To assign values 
	{
		name = n;			 
		accountno = acno;	 
		account_type = type;	 
		balance = bal;
	}	
	
	deposit()				//To deposited an amount 
	{
		float depo;
		cout<<endl<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
		cout<<"Enter deposit amount   : Rs.";
		cin>>depo;
		balance += depo;	
		cout<<"Deposit successfully. "<<endl<<"Current balance : Rs."<<balance<<endl;
	}	
	
	withdraw()				//To withdraw an amount after checking balance 
	{
		float with;
		cout<<endl<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
		cout<<"Enter Withdeaw amount  : Rs.";
		cin>>with;
		if(with<=balance)	//check balance available or not.
		{
			balance -= with;
			cout<<"After withdraw : "<<endl<<"Current balance : Rs."<<balance<<endl;
		}
		else
		{
			cout<<"Insufficient balance.";
			cout<<endl<<"Current balance : Rs."<<balance<<endl;
		}
	}
	
	display()			//To display name and balance 
	{
		cout<<endl<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
		cout<<"Account Holder's Name  : "<<name<<endl;
		cout<<"Account Number         : "<<accountno<<endl;
		cout<<"Account Type           : "<<account_type<<endl;
		cout<<"Account Balance        : Rs."<<balance;
		cout<<endl<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
	}
};

main()
{
	Bank ac; 		//create object 
	
	string name,type;
	int accountno,balance;
	
					//user inputs
	cout<<"******   Enter your details   ******"<<endl;
		cout<<"Enter Depositor's Name : ";
		getline(cin,name);
		cout<<"Enter Account Number   : ";
		cin>>accountno;
		cout<<"Enter Account Type     : ";
		cin>>type;
		cout<<"Enter Account Balance  : Rs.";
		cin>>balance; 
		
		//call all member functions.
	ac.values(name,accountno,type,balance);		
	ac.deposit();
	ac.withdraw();
	ac.display();
}

