#include <iostream>
#include <string>

using namespace std;

int main(){

	int l = 0, k = 1, i = 2;

	// task 1	==

	if (l == 0) {
		cout << "op ==		true" << endl;
	}
	else {
		cout << "op ==		false" << endl;
	}



	// task 2	!=

	if (l != k) {
		cout << "op !=		true" << endl;
	}
	else {
		cout << "op !=		false" << endl;
	}



	// task 3	>/<

	if (k > l) {
		cout << "op >		true" << endl;
	}
	else {
		cout << "op >		false" << endl;
	}

	if (l < k) {
		cout << "op <		true" << endl;
	}
	else {
		cout << "op <		false" << endl;
	}



	// task 4	>=/<=

	if (k >= l) {
		cout << "op >=		true" << endl;
	}
	else {
		cout << "op >=		false" << endl;
	}

	if (l <= i) {
		cout << "op <=		true" << endl;
	}
	else {
		cout << "op <=		false" << endl;
	}



	// task 5

	if (l == 0 && k < i) {
		cout << "op == && <	true" << endl;
	}
	else {
		cout << "op == && < false" << endl;
	}



	// task 6
	
	if (l == 0 || k > i) {
		cout << "op == || >	true" << endl;
	}
	else {
		cout << "op == || > false" << endl;
	}
}