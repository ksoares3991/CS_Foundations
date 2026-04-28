//Main libraries:
#include <stdio.h>

//Function: sum 2 integers
int	f_sum2n(int n1, int n2)
{
	int	sum;

	sum = n1 + n2;
	return (sum);
}

//Main
int	main(void)
{
	int	n1;
	int	n2;
	int	sum;

	printf("Type the 1st number: \n");
	scanf("%d", &n1);
	printf("Type the 2nd number: \n");
	scanf("%d", &n2);
	sum = f_sum2n(n1, n2);
	printf("The sum is: %i \n", sum);
	return (0);
}
