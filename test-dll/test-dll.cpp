#include <string>
#include <iostream>
#include "mydll.h"

using namespace std;

int main()
{
	std::string str{"Hello CMake."}; // length is 12
	std::cout << "str len: " << GetStrLen(str);

	return 0;
}
