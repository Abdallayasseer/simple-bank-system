#include <iostream>
using namespace std;
void welcomeFunc();
void regeisterFunc();
void loginFun();
void balancFunc();
void prinLine();
int number;
string name = "user", password = "";
long long balance = 0;
int main() {
	cout << "Welcome to our Bank \n";
	prinLine();
	welcomeFunc();
}
void welcomeFunc() {
	cout << "Enter a 1 for registrator or 2 for login or 3 for exit : " << endl;
	cin >> number;
	if (number == 1) {
		cout << "Welcome to registrator" << endl;
		prinLine();
		regeisterFunc();
	}
	else if (number == 3)
	{
		cout << "Thank You \n";
		exit;
	}
	else if (number == 2)
	{
		cout << "Welcome to login" << endl;
		prinLine();
		loginFun();
	}
	else
	{
		cout << "Wrong!!! " << endl;
		cout << "Enter 1 to again \n";
		cout << "Enter 2 to Exit \n";
		cin >> number;
		if (number == 1)
		{
			welcomeFunc();
		}
		else if (number == 2)
		{
			cout << "Thank You";
			exit;
		}
	}
}
void regeisterFunc() {
	cout << "Enter your name \n";
	cin >> name;
	cout << "Enter your password \n";
	cin >> password;
	cout << "Enter your balance \n";
	cin >> balance;
	prinLine();
	cout << "Welcome MR : " << name << endl;
	cout << "Your balance : " << balance << endl;
	cout << "Thanks for registrator \n";
	prinLine();
	cout << "Please log in  to your account \n";
	loginFun();
}
void loginFun() {
	string userName, userPass;
	cout << "Enter user name \n";
	cin >> userName;
	cout << "Enter user password \n";
	cin >> userPass;
	if (userName == name && userPass == password)
	{
		prinLine();
		cout << "Welcome to your account" << endl;
		balancFunc();
	}
	else
	{
		cout << "Wrong!!! \n";
		cout << "Enter 1 to try again \n";
		cout << "Enter 2 for registrator \n";
		cout << "Enter 3 to go home \n";
		cin >> number;
		if (number == 1)
		{
			loginFun();
		}
		else if (number == 2)
		{
			prinLine();
			cout << "Welcome to registrator" << endl;
			regeisterFunc();
		}
		else
		{
			cout << "Thank you \n";
			welcomeFunc();
		}
	}
}
void balancFunc() {
	cout << "if U want to show your balance ? Enter 1 \n";
	cout << "if U want to add on your balance ? Enter 2 \n";
	cout << "if U want to remove from your balance ? Enter 3 \n";
	cout << "if U want to Exit ? Enter any number \n";
	cin >> number;
	if (number == 1)
	{
		cout << "Your balance : " << balance << endl;
		balancFunc();
	}
	else if (number == 2)
	{
		cout << "Enter how much U want add to your balance " << endl;
		long add;
		cin >> add;
		cout << "You add " << add << " to your account \n";
		balance += add;
		cout << "Your balance now is " << balance << endl;
		prinLine();
		balancFunc();
	}
	else if (number == 3)
	{
		cout << "Enter how much U want remove to your balance " << endl;
		long remove;
		cin >> remove;
		cout << "You remove " << remove << " to your account \n" << endl;
		balance -= remove;
		cout << "Your balance now is " << balance << endl;
		prinLine();
		balancFunc();
	}
	else
	{
		cout << "Thank U MR : " << name;
	}
}
void prinLine() {
	cout << "\n---------------------------\n";
}