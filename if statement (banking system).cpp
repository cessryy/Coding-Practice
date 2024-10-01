#include <iostream>

using namespace std;

int main() {
	int age;
	string name, password;
	int offers;
    float balance = 10000.00;
	float wAmount, deposit;
	cout << "-----------------------------------------------------\n";
	cout << "Enter your age: ";
	cin >> age;
	
	if (age < 18) {
		cout << "Sorry, you must be at least 18 years old to use this banking system\n";
		return 0;
	}
	
	cout << "-----------------------------------------------------\n";
	cout << "Welcome to Sarry's bank!\n";
	cout << "-----------------------------------------------------\n";
	cout << "Enter your account name: ";
	cin >> name;
	cout << "Enter your account password: ";
	cin >> password;
	do {
	cout << "-----------------------------------------------------\n";
	cout << "1.Checking of balance\n";
	cout << "2.Withdraw\n";
	cout << "3.Deposit\n";
	cout << "4.Exit\n";
	cout << "-----------------------------------------------------\n";
	cout << "Choose 1: ";
	cin >> offers;
	
	if (offers == 1) {
		cout << "Your balance is " << balance << endl;
		} else if (offers == 2) {
			cout << "Enter the amount you want to withdraw: ";
			cin >> wAmount;
			balance -= wAmount;
			cout << "Your new balance is now: " << balance << endl;
		} else if (offers == 3) {
			cout << "Enter the amount you want to deposit: ";
			cin >> deposit;
			balance += deposit;
			cout << "Your new balance is: " << balance << endl;
		} else if (offers == 4) {
			cout << "Thank you for banking with us!\n";
		} else {
			cout << "You enter an invalid input, please try again\n";
		}
	} while (offers != 4);
	return 0;
}
