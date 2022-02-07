#include "span.hpp"

int main()
{
    try
    {
        {
            Span sp = Span(5);
            sp.addNumber(5);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        std::cout << std::endl;
        {
            Span sp = Span(10000);
			std::vector<int> v;
            for (int i = 0; i < 10000; i++)
            {
                v.push_back(rand());
            }
			sp.addNumber(v.begin(), v.end());
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
    return (0);
}
