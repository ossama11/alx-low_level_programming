#include "variadic_functions.h"

/**
* print_all - prints anything based on the provided format
* @format: a string containing the format specifiers
* @...: variable number of arguments
*/
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";

	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, (float)va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
				}
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
