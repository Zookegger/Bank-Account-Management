#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class BankAccount{
	private:
		string accountHolderName;
		string accountHolderpassword;
		double balance;
	public:
		BankAccount(const string &name, double initialBalance){
			accountHolderName = name;
			accountHolderPassword = password;
			balance = initialBalance;
		}
		
		void deposit(double amount){
			if (amount > 0){
				balance += amount;
				cout << "You deposited: " << amount << endl;
			}else{
				cout << "Invalid deposit amount."<< endl;
			}
		}
		
		void withdraw(double amount){
			if (amount > 0 && balance >= amount){
				balance -= amount;
				cout << "You withdrawn: " << amount << endl;
			}else{
				cout << "Invalid withdrawl amount." << endl;
			}
		}
		
		double getBalance(){
			return balance;
		}
};

int main(){
	string holder_name;
	string password;
	double initial_balance;
	
	cout << "Enter account Holder name: ";
	cin >> holder_name;
	while (getchar() != '\n');
	
	cout << "Enter password: ";
	cin >> password;
	
	cout << "Enter your initial balance: ";
	cin >> initial_balance;
	
	BankAccount myAccount(holder_name, password, initial_balance);
	
	cout << fixed << setprecision(2);
	cout << "Account balance: " << myAccount.getBalance() << endl;
	
	return 0;
}


