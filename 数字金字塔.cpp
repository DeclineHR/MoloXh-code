#include<stdio.h>
int main() {
	char f = 'F';
	int j = 0;
	for (int i = 1; i <= 6; i++) {
		for (f = 'F',j = 0; f >= 'A' && j < i ; f--,j++) 
		{
			printf("%c", f);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	int p = 6;
	for (int i = 0; i < 6; i++) {
		p--;
		for (int j = p; j > 0; j--) {
			printf(" ");
		}
		for (f = 'A', j = 0; f >= 'A' && j < i; f++, j++)
		{
			printf("%c", f);
		}
		for (; f >= 'A'; f--)
			{
				printf("%c", f);
			}

	
		printf("\n");
	}
	return 0;
}
