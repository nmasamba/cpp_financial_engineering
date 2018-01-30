
// Main console program to test max vs min

#include <iostream>
using namespace std;

int main() {

	double n1, n2;

	cout << "Enter first number: \n";
	cin >> n1;

	cout << "Enter second number: \n";
	cin >> n2;

	cout<< "The biggest number is "<< max(n1, n2) << endl;
	cout<< "The smallest number is " << min(n1, n2) << endl; 

	return 0;

} 