#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		int j = 0;
		while (argv[i][j] != '\0')
		{
			std::cout << static_cast<char>(toupper(argv[i][j]));
			j++;
		}
	}
	std::cout << std::endl;
	return (0);
}