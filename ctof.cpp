#include<iostream>
using namespace std;
void main()
{
	float c ;
	cout << "Enter Celsius temperature: ";
	cin >> c;
	cout << endl;
	float total = (1.8 * c) + 32;
	cout << "Celsius to Fahrenheit = "<<total<<endl;
	cout << endl;
	cout << "Now weather in Thailand is ";
	cout << (total>70 ?" HOT ":" Cool ")<<endl;
	cout << endl;
}