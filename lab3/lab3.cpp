// lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double cost_rail = 9.97;
	double cost_post = 10.98;
	double fence_length = 0;
	cout << "What is the length of the fence?" << endl;
	cin >> fence_length;
	double num_rail = (fence_length / 10);
	cout << "Number of rails: " << num_rail << endl;
	double num_post = (num_rail * 3);
	cout << "Number of posts: " << num_post << endl;
	double total_cost_rails = (num_rail * 9.97);
	cout << "Cost of rails: " << total_cost_rails << endl;
	double total_cost_posts = (num_post * 10.98);
	cout << "Cost of posts: " << total_cost_posts << endl;
	double total_cost = (total_cost_rails + total_cost_posts);
	cout << "Total cost = " << total_cost << endl;
	
	int number1 = 0;
	int number2 = 0; 
	cout << "Enter integer 1: " << endl;
	cout << "Enter integer 2: " << endl; 
	cin >> number1 >> number2;
	int numberSum = (number1 + number2);
	cout << "Sum is " << numberSum << endl;
	int numberDif = (number1 - number2);
	cout << "Difference is " << numberDif << endl;
	int numberPro = (number1 * number2);
	cout << "Product is " << numberPro << endl;
	float numberAve = ((number1 + number2) / 2.0);
	cout << "Average is " << numberAve << endl;

	int eggs = 0; 
	cout << "Enter the number of eggs produced: " << endl;
	cin >> eggs;
	int eggsDozen = (eggs / 12);
	cout << "Dozens = " << eggsDozen << endl;
	int modEggs = (eggs % 12);
	cout << "Remaining eggs = " << modEggs << endl;

	int carcost = 0;
	cout << "Enter cost of car: " << endl;
	cin >> carcost;
	int mpg = 0;
	cout << "Enter MPG: " << endl; 
	cin >> mpg;
	int milesyear = 0;
	cout << "Enter miles driven per year: " << endl;
	cin >> milesyear;
	double gas = 0.00;
	cout << "Enter gas price: " << endl;
	cin >> gas;
	int years = 0;
	cout << "Enter years of use: " << endl;
	cin >> years;
	int resale = 0;
	cout << "Enter car resale amount: " << endl;
	cin >> resale;
	int gascost = ((years * milesyear * gas) / mpg);
	int totalcarcost = (carcost + gascost);
	int netcost = (totalcarcost - resale);
	cout << "Net cost of car ownership: $" << netcost << endl;

	double totalcost;
	cout << "Enter total cost of all books: " << endl;
	cin >> totalcost;
	double totalbooks;
	cout << "Enter total number of books purchased: " << endl;
	cin >> totalbooks;
	double taxbooktotal = (0.075 * totalcost);
	double shippingcharge = (2.50 * totalbooks);
	double totalprice = (totalcost + taxbooktotal + shippingcharge);
	cout << "Price of order is: $" << totalprice << endl; 
}
