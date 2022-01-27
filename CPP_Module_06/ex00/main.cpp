#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2 || !argv[1])
	{
		std::cout << "error" << std::endl;
		return (0);
	}	
	Conversion origin(argv[1]);	
}