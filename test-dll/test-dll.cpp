// test-dll.cpp: 定义应用程序的入口点。
//

#include "test-dll.h"
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
