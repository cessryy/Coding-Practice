#include <iostream>

using namespace std;

int main() {
	int num;
	int age;
	
	cout << "Enter a number: ";
	cin >> num;
	cout << "The number is " << ((num % 2 == 0) ? "Even" : "Odd") << endl; 
	
	cout << endl;
	
	cout << "How old is the user? ";
	cin >> age;
    cout << "Remarks: " << ((age >= 18) ? "Old enough" : "Too young") << endl;
	return 0;
}

