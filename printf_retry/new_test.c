#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int result;

    // >>> test 1 <<<
    printf(">>> test 1 <<<\nresult = printf(\"%%c\", 'a');\n");
    result = printf("%c", 'a');
    printf("$\nresult = %d\n", result);
    printf("result =  ft_printf(\"%%c\", 'a');\n");
    result = ft_printf("%c", 'a');
    printf("$\nresult = %d\n", result);

    // >>> test 2 <<<
    printf("\n>>> test 2 <<<\nresult = printf(\"%%d\", 0);\n");
    result = printf("%d", 0);
    printf("$\nresult = %d\n", result);
    printf("result =  ft_printf(\"%%d\", 0);\n");
    result = ft_printf("%d", 0);
    printf("$\nresult = %d\n", result);

    // >>> test 3 <<<
    printf("\n>>> test 3 <<<\nresult = printf(\"%%d\", -2147483648);\n");
    result = printf("%d", (int)-2147483648);
    printf("$\nresult = %d\n", result);
    printf("result =  ft_printf(\"%%d\", -2147483648);\n");
    result = ft_printf("%d", (int)-2147483648);
    printf("$\nresult = %d\n", result);

    // >>> test 4 <<<
    printf("\n>>> test 4 <<<\nresult = printf(\"%%s\", \"\");\n");
    result = printf("%s", "");
    printf("$\nresult = %d\n", result);
    printf("result =  ft_printf(\"%%s\", \"\");\n");
    result = ft_printf("%s", "");
    printf("$\nresult = %d\n", result);

    // >>> test 5 <<<
    printf("\n>>> test 5 <<<\nresult = printf(\"%%p\", NULL);\n");
    result = printf("%p", NULL);
    printf("$\nresult = %d\n", result);
    printf("result =  ft_printf(\"%%p\", NULL);\n");
    result = ft_printf("%p", NULL);
    printf("$\nresult = %d\n", result);

    // >>> test 6 <<<
    printf("\n>>> test 6 <<<\nresult = printf(\"%%d %%s %%c\", 42, \"hello\", 'z');\n");
    result = printf("%d %s %c", 42, "hello", 'z');
    printf("$\nresult = %d\n", result);
    printf("result =  ft_printf(\"%%d %%s %%c\", 42, \"hello\", 'z');\n");
    result = ft_printf("%d %s %c", 42, "hello", 'z');
    printf("$\nresult = %d\n", result);

    // >>> test 7 <<<
    printf("\n>>> test 7 <<<\nresult = printf(\"Hello %%s, your score is %%d!\", \"Alice\", 95);\n");
    result = printf("Hello %s, your score is %d!", "Alice", 95);
    printf("$\nresult = %d\n", result);
    printf("result =  ft_printf(\"Hello %%s, your score is %%d!\", \"Alice\", 95);\n");
    result = ft_printf("Hello %s, your score is %d!", "Alice", 95);
    printf("$\nresult = %d\n", result);

    // >>> test 8 <<<
    printf("\n>>> test 8 <<<\nresult = printf(\"%%d %%d %%d\", 1, 2, 3);\n");
    result = printf("%d %d %d", 1, 2, 3);
    printf("$\nresult = %d\n", result);
    printf("result =  ft_printf(\"%%d %%d %%d\", 1, 2, 3);\n");
    result = ft_printf("%d %d %d", 1, 2, 3);
    printf("$\nresult = %d\n", result);

	// >>> test 9 <<<
	printf("\n\n>>> Test 9 <<<\n");
	result = printf("%");
	printf("\nresult = %d\n", result);
	result = printf("%%%");
	printf("\nresult = %d\n", result);
	result = printf("%%k%k");
	printf("\nresult = %d\n", result);
	result = printf("% %  %   y%  % x", 11);
	printf("\nresult = %d\n", result);
	result = printf("   %");
	printf("\nresult = %d\n", result);
	result = printf("% k % d %i % ux");
	printf("\nresult = %d\n", result);

	// >>> test 10 <<<
	printf("\n\n>>> Test 10 <<<\n");
	result = printf("%s","");
	printf("\nresult = %d\n", result);
	result = ft_printf("%s","");
	printf("\nresult = %d\n", result);

	result = printf(" %s ","");
	printf("\nresult = %d\n", result);
	result = ft_printf(" %s ","");
	printf("\nresult = %d\n", result);

	result = printf(" %s ","");
	printf("\nresult = %d\n", result);
	result = ft_printf(" %s ","");
	printf("\nresult = %d\n", result);

	result = printf(" %s %s ", "","-");
	printf("\nresult = %d\n", result);
	result = ft_printf(" %s %s ", "","-");
	printf("\nresult = %d\n", result);

	result = printf("   %");
	printf("\nresult = %d\n", result);
	result = printf("% k % d %i % ux");
	printf("\nresult = %d\n", result);


    return (0);
}
