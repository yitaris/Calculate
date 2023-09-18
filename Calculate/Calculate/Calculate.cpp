#include <iostream>
#include <cmath>
using namespace std;

//add ÝÞLEMÝ
void ADD(int loopc, float a, float b) {
	float succ = 0;
	float usernumber;
	for (int zero = 0; zero < loopc; zero++) {
		cout << "enter " << zero + 1 << ". numbers" << endl;
		cin >> usernumber;
		succ = succ + usernumber;
	}
	cout << "Your Result Is: " << succ << endl;
}
//divide ÝÞLEMÝ
void Divide(int loopc, float a, float b) {
	float succ = 1;
	float usernumber;
	float firstnumber;
	cout << "Please Enter " << "1. Number" << endl;
	cin >> firstnumber;
	for (int zero = 0; zero < loopc - 1; zero++) {
		cout << "Please Enter " << zero + 2 << " Number" << endl;
		cin >> usernumber;
		firstnumber = firstnumber / usernumber;
	}
	cout << "Your Result Is: " << firstnumber << endl;
}
//subtract ÝÞLEMÝ
void Subtract(int loopc, float a, float b) {
	double succ = 0;
	double usernumber;
	float firstnumber;
	cout << "Please Enter " << "1. Number" << endl;
	cin >> firstnumber;
	for (int zero = 0; zero < loopc - 1; zero++) {
		cout << "enter " << zero + 2 << ". numbers" << endl;
		cin >> usernumber;
		firstnumber = firstnumber - usernumber;
	}
	cout << "Your Result Is: " << firstnumber << endl;
}
//multiply ÝÞLEMÝ
void Multiply(int loopc, float a, float b) {
	float succ = 1;
	float usernumber;
	for (int zero = 0; zero < loopc; zero++) {
		cout << "enter " << zero + 1 << ". numbers" << endl;
		cin >> usernumber;
		succ = usernumber * succ;
	}
	cout << "Your Result Is: " << succ << endl;

}
//main BLOCK
int main() {
	int loopc;
	int section;
	double firstnumber;
	double secondnumber;

OPTIONCHOOSE:

	cout << "please choose section" << endl;
	cout << "ADD = 1" << endl;
	cout << "Divide = 2" << endl;
	cout << "Subtract = 3" << endl;
	cout << "Multiply = 4" << endl;
	cin >> section;


	if (section == 1) {
		cout << "please enter how many want to add number:";
		cin >> loopc;
		ADD(loopc, firstnumber, secondnumber);
	}
	else if (section == 2) {
		cout << "please enter how many want to add number:";
		cin >> loopc;
		Divide(loopc, firstnumber, secondnumber);
	}
	else if (section == 3) {
		cout << "please enter how many want to add number:";
		cin >> loopc;
		Subtract(loopc, firstnumber, secondnumber);
	}
	else if (section == 4) {
		cout << "please enter how many want to add number:";
		cin >> loopc;
		Multiply(loopc, firstnumber, secondnumber);
	}
	else {
		cout << "Please Choose Currect Option.";
		goto OPTIONCHOOSE;
	}


}
