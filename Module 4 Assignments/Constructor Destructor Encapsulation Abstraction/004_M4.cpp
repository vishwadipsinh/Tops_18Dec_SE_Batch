/*
4. Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
*/
#include<iostream>
using namespace std;
class Bank_account{
	private:
		double ac_num,amount,balance;
	public:
		void get_data(){
			cout<<"\n Enter Account Numebr : ";cin>>ac_num;
			cout<<" Enter Opening Balance : ";cin>>balance;
		}
		void deposit(){
			cout<<"\n Enter Amount to Deposit :";cin>>amount;
			balance=balance+amount;
			cout<<"\n Deposited Amount Rs. "<<amount<<"\n Available Balance :"<<balance;
		}
		void withdraw(){
			cout<<"\n Enter Amount to Withdraw :";cin>>amount;		
			if(amount<balance){
				balance=balance-amount;
				cout<<"\n you withdrawed Rs. "<<amount<<"\n Available Balance is :"<<balance;
			}else{
				cout<<"\n Unsufficient Balance";
			}
		}
};

int main(){
	Bank_account b1;
	b1.get_data();
	b1.deposit();
	b1.withdraw();
}
