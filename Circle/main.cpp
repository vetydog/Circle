#include "Circle.h"


int main() {
	Circle c1{1};
	Circle c2{1};

	if (c1 == c2) {
		cout << "equal" << endl;
	}
	else {
		cout << "unequal" << endl;
	}

	c1 += 2;

	cout << c1;
}

