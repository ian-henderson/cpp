#include <iostream>

int
main()
{
	int x = 0;
	int& x_ref = x;

	x_ref++;

	std::cout << "x:\t" << x << "\n";
	std::cout << "x_ref:\t" << x_ref << "\n";
}
