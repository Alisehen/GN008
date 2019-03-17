#include"pch.h"
#include<iostream>
#include<cstring>
#include"data.h"
using namespace std;
void increase(struct* a) {
	cout << "Please choose your input mode :" << endl;
	cout << "A. From my file" << endl;
	cout << "B. From my keyboard" << endl;
	char inputnumber;
	cin >> inputnumber;
	while (inputnumber != 'A'&& inputnumber != 'B') {
		cout << "Input error !" << endl;
		cout << "Please try again:" << endl; 
		cin >> inputnumber;
	}
	if (inputnumber == 'B') {
		increasefile(struct* a);
	}
	else if (inputnumber == 'B') {
		increasekeyboard(struct* a);
	}
}
void increasefile(struct* a) {
	cout << "Please input the file you want to read :" << endl;
	string filename;
	cin >> filename;
	while ((fopen(filename, "r")) == NULL) {
		cout << "File doesn't exist !" << endl;
		cout << "Please try again:" << endl;
		cin >> filename;
	}
	cout << "Please choose :" << endl;
	cout << "A. stock" << endl;
	cout << "B. sell" << endl;
	char function;
	cin >> function;
	while (function != 'A'&& function != 'B') {
		cout << "Input error !" << endl;
		cout << "Please try again:" << endl;
		cin >> function;
	}
	if (function == 'A') {

	}
	if (function == 'B') {

	}
}
void increasekeyboard(struct* a) {
	cout << "Please choose :" << endl;
	cout << "A. stock" << endl;
	cout << "B. sell" << endl;
	char function;
	cin >> function;
	while (function != 'A'&& function != 'B') {
		cout << "Input error !" << endl;
		cout << "Please try again:" << endl;
		cin >> function;
	}
	if (function == 'A') {
		while()
	}
	if (function == 'B') {

	}
}

