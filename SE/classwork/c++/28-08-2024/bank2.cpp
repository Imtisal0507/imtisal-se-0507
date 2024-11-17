#include<iostream>
using namespace std;
class Bank{
	public:
		string name;
		int acno,balance=5000;
		int depo,wth;
		enter()
		{
			cout<<"Enter 1 for acno"<<endl;
			cout<<"Enter 2 for depo"<<endl;
			cout<<"Enter 3 for wth"<<endl;
		}
		acopen()
		{
			cout<<"Name :";
			cin>>name;
			cout<<"Ac no :";
			cin>>acno;
			
			cout<<"Deposit is :"<<balance<<endl;
		}
		deposit()
		{
			int depo;
			
			cout<<"Enter Amount for deposit :";
			cin>>depo;
			
			this->depo=depo;
			
			this->balance=this->balance+this->depo;
			cout<<"Now your balance is : "<<this->balance<<endl;
		}
		withdraw()
		{
			int wth;
			cout<<"Enter Amount for withdraw";
			cin>>wth;
			
			this->wth=wth;
			
			this->balance = this->balance-this->wth;
			cout<<"Now your balance is :"<<this->balance;
		}
		choose()
		{
			int choice,acopen,deposit,withdraw;
		
	while(1)
	{
	
	cout<<"Enter a choice :";
	cin>>choice;
	
	if(choice==1)
	{
		cout<<"acopen";
		cin>>acopen;

	}
	else if(choice==2)
	{
		cout<<"deposit";
		cin>>deposit;

	}
	else if(choice==3)
	{
		cout<<"withdraw";
		cin>>withdraw;

	}
	else
	{
		cout<<"Invalid choice ";
		break;
	}
}

		}
};



main()

{
	Bank obj;
	obj.enter();
	obj.choose();
	obj.acopen();
	obj.deposit();
	obj.withdraw();


}
