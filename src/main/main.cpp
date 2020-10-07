/** Just a test program to make sure the toolset currently installed on the system works.*/
#include <iostream>

using namespace std;

int main(int, char**)
{
	cout<< "Hello World!"<< endl;
	for (unsigned int x = 0; x < 50; ++x)
	{
		std::cout<< "X = " << (x + 1) << std::endl;
	}
	return 0;
}
