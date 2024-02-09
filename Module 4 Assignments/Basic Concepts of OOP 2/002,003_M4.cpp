/*
2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include <iostream>
using namespace std;
class account{
    private: 
    int acc_num;
    double balance;
    char acc_type,name[15];
    public: 
    void get_data(){
        cout<<"\n enter Account Number : ";
        cin>>acc_num;
        cout<<"\n enter Opening Balance : ";
        cin>>balance;
        cout<<"\n enter Account Type s(saving),c(current) : ";
        cin>>acc_type;
        cout<<"\n enter Name : ";
        cin>>name;
    }
    void print_data(){
        cout<<"\n Account Number : "<<acc_num;
        cout<<"\n Balance : "<<balance;
        cout<<"\n Account Type s(saving),c(current) : "<<acc_type;
        cout<<"\n Account Holder Name : "<<name;
    }
    void deposit(){
        double deposit;
        cout<<"enter Amount you want to Deposit : ";
        cin>>deposit;
        balance=balance+deposit;
    }
    void withdraw(){
        int withdraw;
        cout<<"\n Enter Amount you want to Withdraw : ";cin>>withdraw;
			if(balance>withdraw){
				balance=balance-withdraw;
			}else{
				cout<<"\n Insufficient Balance";
			}
    }
};

int main(){
	int a,b;
	account a1;
	again: //goto statment
	cout<<"\n1).Open Account \n2).Deposit \n3).Withdraw \n4).Print Data\n\t";cin>>a;
	
	switch(a){
		case 1:{a1.get_data();break;}
		case 2:{a1.deposit();break;}
		case 3:{a1.withdraw();break;}
		case 4:{a1.print_data();break;}
	}
	cout<<"\n1).Exit \n2).banking\n";cin>>b;
	if(b==2){
		goto again;
	}else if(b=1){
	    cout<<"\n Thanks for Banking with us";
	}
}

