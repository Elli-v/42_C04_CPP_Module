#include "iter.hpp"

int main(void)
{
    int arr[5] = {0, 1, 2, 3, 4};
    char carr[2] = {'A', 'B'};
	std::string strArr[5] = {
		"hi",
		"soooh",
		"iter test"
	};
	AnyClass	classArr[5];

	std::cout << ">> print arr <<" << std::endl;
    iter(arr, 5, printIter);
	std::cout << std::endl;
	std::cout << ">> print carr <<" << std::endl;
    iter(carr, 2, printIter);
	std::cout << std::endl;
	std::cout << ">> print strArr <<" << std::endl;
    iter(strArr, 5, printIter);

	std::cout << "\n>>Execute iter func with class type <<\n";
	iter(arr, 5, printIter);
	iter(classArr, 4, printIter);
    return (0);
}