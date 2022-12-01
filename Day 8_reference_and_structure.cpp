Reference - 

#include <iostream>
using namespace std;

int main() {
	int b = 10;
	int &a = b;
	cout << a << endl;
	a = 12;
	cout << b << endl;
	return 0;
}
  
-------------------------------------------------------------------------------------------------------------  
Structures -
  
1) Long Form - 
---------------------------
#include <iostream>
using namespace std;

struct Student {
  string name;
  int roll;
  bool gender;
};

int main() {
	struct Student A;
	A.name = "Shyam";
	A.roll = 10;
	A.gender = false;
	cout << "Name of A: " << A.name << endl;
	cout << "Roll of A: " << A.roll << endl;
	cout << "Gender of A: " << A.gender << endl;
	struct Student B;
	B.name = "Raju";
	B.roll = 2;
	B.gender = false;
	cout << "Name of B: " << B.name << endl;
	cout << "Roll of B: " << B.roll << endl;
	cout << "Gender of B: " << B.gender << endl;
	return 0;
}
  
2) Short Form - 
---------------------------
#include <iostream>
using namespace std;

typedef struct Student {
  string name;
  int roll;
  bool gender;
} st;

int main() {
	st A;
	A.name = "Shyam";
	A.roll = 10;
	A.gender = false;
	cout << "Name of A: " << A.name << endl;
	cout << "Roll of A: " << A.roll << endl;
	cout << "Gender of A: " << A.gender << endl;
	st B;
	B.name = "Raju";
	B.roll = 2;
	B.gender = false;
	cout << "Name of B: " << B.name << endl;
	cout << "Roll of B: " << B.roll << endl;
	cout << "Gender of B: " << B.gender << endl;
	return 0;
}
 
