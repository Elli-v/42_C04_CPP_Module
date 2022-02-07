#include <iostream>
#include "Array.hpp"

#define MAX_VAL 5
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
   
	Array<int> tmp = numbers;
	Array<int> test(tmp);

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
        std::cout << "   set"  << i + 1 << " : " << mirror[i] << std::endl;
    }

    std::cout << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "  copy" << i + 1 << " : " << numbers[i] << std::endl;
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }	
	std::cout << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
        std::cout << "random" << i + 1 << " : " << numbers[i] << std::endl;
    }
	std::cout << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "   tmp" << i + 1 << " : " << tmp[i] << std::endl;
        if (tmp[i] != test[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << std::endl;

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = rand();
    delete [] mirror;//
    return 0;
}