
#include <iostream>
#include <climits>

using namespace std;

int main() {

	int value = 3246356;
	long int lvalue = 4534568536;
	short int svalue = 4543;

	cout << value << endl;
	cout << lvalue << endl;
	cout << svalue << endl;
	cout << "size of int " << sizeof(int) << endl;
	cout << "size of lvalues " << sizeof(lvalue) << endl;
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;
	return 0;
}
