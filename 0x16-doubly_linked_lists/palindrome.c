#include <stdio.h>

int check_palindrome(int n) {
	int t, reverse = 0;

	t = n;

	while (t != 0) {
		reverse = reverse * 10;
		reverse = reverse + t%10;
		t = t/10;
	}

	if (n == reverse)
		return 1;
	else
		return 0;
}

int main()
{
	int a;
	int b;
	int major = 0;

	for (a = 1; a < 1000; a++)
	{
		for (b = 1; b < 1000; b++)
		{
			if (check_palindrome(a * b))
			{
				printf("%d * %d == %d : Is palindrome\n", a, b, a * b);
				if ((a * b) > major)
					major = a*b;
			}
		}
	}
	printf("The palindrome most great is %d\n", major);
	return (0);
}
