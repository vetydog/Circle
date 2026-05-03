#include "Circle.h"


int main() {
	Circle c1{1};
	Circle c2{1};

	if (c1 == c2) {
		std::cout << "equal" << std::endl;
	}
	else {
		std::cout << "unequal" << std::endl;
	}

	c1 += 2;

	std::cout << c1;
}

