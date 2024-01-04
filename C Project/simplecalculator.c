
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	double n1, n2;
	while (1) {
		printf("Enter an operator (+, -, *, /), "
			"if want to exit press x: ");
		scanf(" %c", &ch);
		if (ch == 'x')
			exit(0);
		printf("Enter two first and second operand: ");
		scanf("%lf %lf", &n1, &n2);
		switch (ch) {

		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1 + n2);
			break;

		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1 - n2);
			break;

		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1 * n2);
			break;

		case '/':
			printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
			break;

		default:
			printf(
				"Error! please write a valid operator\n");
		}

		printf("\n");
	}
}

