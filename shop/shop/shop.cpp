#include <iostream>
#include <Windows.h>
using namespace std;
//=========== function ===========//

void menu() {
	cout << "========== Menu ==========" << endl;
	cout << "1.Juice 1 = 15$" << endl;
	cout << "2.Donuts 1 = 10$" << endl;
	cout << "3.Cheese Burgur 1 = 30$" << endl;
	cout << "4.Pepsi 1 = 6$" << endl;
	cout << "5.Schweppes 1 = 14$" << endl;
	cout << "6.Cheese 1 = 32$" << endl;
	cout << "7.Egg 1 = 2$" << endl;
	cout << "8.Exit" << endl;
	cout << "==========================" << endl;
}


int main() {
	//const variables
	const int juice1{ 15 };
	const int donuts1{ 10 };
	const int cb1{ 30 };
	const int pepsi1{ 6 };
	const int schweppes1{ 14 };
	const int cheese1{ 32 };
	const int egg1(2);

	//variables
	int option{ 0 };
	int count{ 0 };
	char yn;
	float amount{ 0 };
    long int money{ 500 };
	float money2{ 0 };

	//========================

	cout << "You have 500$ in your account do you want to increase (y/n): ";
	cin >> yn;

	if (yn == 'y' || yn == 'Y') {
		cout << "Enter amount of money you want to increase: ";
		cin >> money2;
		money += money2;
		cout << "You are now have " << money << "$" << endl;


	}
	else if (yn == 'n' || yn == 'N') {
		cout << "ok" << endl;
		cout << "You have 500$" << endl;
	}



	if (money == 0 || money < 0) {
		cout << "error you should enter number more than 0: ";
		cin >> money;
	}

	//=========== Loop ===========//

	do {

		menu();
		cout << "Enter your choice: ";
		cin >> option;

		//=========== switch ===========//

		switch (option) {
		case 1:
			cout << "Enter amount of juice you want to buy: ";
			cin >> amount;
			if (amount == 0) {
				cout << "error you should enter number more than 0: ";
				cin >> amount;
			}
			else
			cout << "you have got " << amount << " juice" << endl;
			amount = juice1 * amount;
			money = money - amount;
			if (money == 0 || money < 0)
			{
				cout << "Sorry you dont have enough" << endl;
				cout << "Your money is: " << money << endl;
			}
			else
			cout << "Your money now is " << money << endl << endl;
			break;

			//========================

		case 2:
			cout << "Enter amount of donuts you want to buy: ";
			cin >> amount;
			if (amount == 0) {
				cout << "error you should enter number more than 0: ";
				cin >> amount;
			}
			else
			cout << "You have got " << amount << " donuts" << endl;
			amount = donuts1 * amount;
			money = money - amount;
			if (money == 0 || money < 0)
			{
				cout << "Sorry you dont have enough" << endl;
				cout << "Your money is: " << money << endl;
			}
			else
			cout << "Your money now is " << money << endl << endl;
			break;

			//========================

		case 3:
			cout << "Enter amount of cb you want to buy: ";
			cin >> amount;
			if (amount == 0) {
				cout << "error you should enter number more than 0:";
				cin >> amount;
			}
			else
			cout << "You have got " << amount << " Cheese burger" << endl;
			amount = cb1 * amount;
			money = money - amount;
			if (money == 0 || money < 0)
			{
				cout << "Sorry you dont have enough" << endl;
				cout << "Your money is: " << money << endl;
			}
			else
			cout << "Your money now is " << money << endl << endl;
			break;

			//========================

		case 4:
			cout << "Enter amount of pepsi you want to buy: ";
			cin >> amount;
			if (amount == 0) {
				cout << "error you should enter number more than 0:";
				cin >> amount;
			}
			else
			cout << "You have got " << amount << " pepsi " << endl;
			amount = pepsi1 * amount;
			money = money - amount;
			if (money == 0 || money < 0)
			{
				cout << "Sorry you dont have enough" << endl;
				cout << "Your money is: " << money << endl;
			}
			else
			cout << "Your money now is " << money << endl << endl;
			break;

			//========================

		case 5:
			cout << "Enter amount of Schweppes you want to buy: ";
			cin >> amount;
			if (amount == 0) {
				cout << "error you should enter number more than 0: ";
				cin >> amount;
			}
			else
				cout << "you have got " << amount << " Schweppes" << endl;
			amount = schweppes1 * amount;
			money = money - amount;
			if (money == 0 || money < 0)
			{
				cout << "Sorry you dont have enough" << endl;
				cout << "Your money is: " << money << endl;
			}
			else
				cout << "Your money now is " << money << endl << endl;
			break;

			//========================

		case 6:
			cout << "Enter amount of Cheese you want to buy: ";
			cin >> amount;
			if (amount == 0) {
				cout << "error you should enter number more than 0: ";
				cin >> amount;
			}
			else
				cout << "you have got " << amount << " Cheese" << endl;
			amount = cheese1 * amount;
			money = money - amount;
			if (money == 0 || money < 0)
			{
				cout << "Sorry you dont have enough" << endl;
				cout << "Your money is: " << money << endl;
			}
			else
				cout << "Your money now is " << money << endl << endl;
			break;

			//========================

		case 7:
			cout << "Enter amount of Egg you want to buy: ";
			cin >> amount;
			if (amount == 0) {
				cout << "error you should enter number more than 0: ";
				cin >> amount;
			}
			else
				cout << "you have got " << amount << " Egg" << endl;
			amount = egg1 * amount;
			money = money - amount;
			if (money == 0 || money < 0)
			{
				cout << "Sorry you dont have enough" << endl;
				cout << "Your money is: " << money << endl;
			}
			else
				cout << "Your money now is " << money << endl << endl;
			break;
		}


		if (option != 8)
		{
			cout << "Next after 5 seconds" << endl;
						Sleep(5000);
		}
			
			system("cls");
			
		if (money == 0 || money < 0)
		{
					cout << "You have spent all your money" << endl;
					option = 8;
		}
		count++;
		cout <<"You have bought -> " << count <<" Time" << endl;
		

	} while (option != 8);

	Sleep(10000);
				
			
}

