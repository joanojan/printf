#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*s = "foo";
	int		result;

	/* Test 0. print a string */
	printf("\n-- Test 0:\n");
	printf("\n1. printf: ");
	result = printf("Hi!% ");
	printf("\n1. printf result: %d\n", result);
	printf("2. ft_printf:");
	result = ft_printf("Hi!% ");
	printf("\n2. ft_printf result: %d\n\n", result);

	/* Test 1. print a string */
	printf("\n-- Test 1:\n");
	printf("\n1. printf: ");
	result = printf("Hi!%");
	printf("\n1. printf result: %d\n", result);
	printf("\n2. ft_printf:");
	result = ft_printf("Hi!%");
	printf("\n2. ft_printf result: %d\n\n", result);
	/* Test 2. print % */
	printf("\n-- Test 2:\nresult = printf(\"%%$\\n\");\n");
	result = printf("%%$\n");
	printf("result = %d\n", result);
	printf("result = ft_printf(\"ft_printf %%$\\n\");\n");
	result = ft_printf("%%$\n");
	printf("result = %d\n", result);
	/* Test 3. print empty string */
	printf("-- Test 3:\nresult = printf(\"\");\n");
	result = printf("");
	printf("result = %d\n", result);
	printf("result = ft_printf(\"\");\n");
	result = ft_printf("");
	printf("result = %d\n", result);
	/* Test 4. print NULL as string */
	printf("-- Test 4:\nresult = printf(\"%%s$\\n\", NULL);\n");
	result = printf("%s$\n", NULL);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%s$\\n\", NULL);\n");
	result = ft_printf("%s$\n", NULL);
	printf("result = %d\n", result);
	/* Test 5. print char */
	printf("-- Test 5:\nresult = printf(\"%%c$\\n\", 'x');\n");
	result = printf("%c$\n", 'x');
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%c$\\n\", 'x');\n");
	result = ft_printf("%c$\n", 'x');
	printf("result = %d\n", result);
	/* Test 6. print char passing NULL */
	printf("Test 6:\nresult = printf(\"<%%c>\\n\", NULL);\n");
	result = printf("<%c>\n", NULL);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"<%%c>\\n\", NULL);\n");
	result = ft_printf("<%c>\n", NULL);
	printf("result = %d\n", result);
	/* Test 7. print integer values */
	printf("Test 7:\nresult = printf(\"%%d\\n\", INT_MIN);\n");
	result = printf("%d\n", INT_MIN);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%d\\n\", INT_MIN);\n");
	result = ft_printf("%d\n", INT_MIN);
	printf("result = %d\n", result);
	/* Test 8. print integer max + 1 */
	printf("Test 8:\nresult = printf(\"%%d\\n\", INT_MAX + 1);\n");
	result = printf("%d\n", INT_MAX + 1);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%d\\n\", INT_MAX + 1);\n");
	result = ft_printf("%d\n", INT_MAX + 1);
	printf("result = %d\n", result);
	/* Test 9. print unsigned integer */
	printf("Test 9:\nresult = printf(\"%%u\\n\", UINT_MAX);\n");
	result = printf("%u\n", UINT_MAX);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%u\\n\", UINT_MAX);\n");
	result = ft_printf("%u\n", UINT_MAX);
	printf("result = %d\n", result);
	/* Test 10. print pointers */
	printf("Test 10: result = printf(\"%%p\\n\", &result);\n");
	result = printf("%p\n", &result);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%p\\n\", &result);\n");
	result = ft_printf("%p\n", &result);
	printf("result = %d\n", result);
	/* Test 11. print hexadecimal values */
	int x = 274348;
	printf("Test 11.1: int x = 274348; result = printf(\"%%x\\n\", x);\n");
	result = printf("%x\n", x);
	printf("result = ft_printf(\"%%x\\n\", x);\n");
	result = ft_printf("%x\n", x);
	printf("Test 11.2: result = printf(\"%%X\\n\", x);\n");
	result = printf("%X\n", x);
	printf("result = ft_printf(\"%%X\\n\", x);\n");
	result = ft_printf("%X\n", x);
	/* GETTING CRAZY NOW: */
	printf("\n\n====== CRAZY ======\n");
	result = printf("%k %t p%y\n");
	printf("result = %d\n", result);
	result = ft_printf("%k %t p%y\n");
	printf("result = %d\n", result);
	/* So sad: the end */
	return 0;
}
