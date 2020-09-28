#include<iostream>
using namespace std;


int main() {
	// read string
	string a;
	getline(cin, a);
	cout << a << endl;

	//convert string to char array
	char target[1024];
	strcpy(target, a.c_str());

	string b = string(target);
	cout << "b : " << b << ", " << strlen(target) << endl;

	char c[] = "hello";
	cout << "c : " << c << ", string(c) : " << string(c) << endl;
}
