#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int	jdx;

	jdx = 1;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (jdx < argc)
		{
			char *str = argv[jdx];
			for (size_t i = 0; i < strlen(str); i++)
				str[i] = toupper(str[i]);
			std::cout << str;
			if (jdx != argc - 1)
				std::cout << ' ';
			jdx++;
		}
		std::cout << std::endl;
	}
	return (0);
}
