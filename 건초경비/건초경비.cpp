#include <stdio.h>
#include <string.h>

int main()
{
	freopen("input.txt", "r", stdin);

	int day, qus;
	int sd, ed;
	int i, price = 0;
	char m[100];

	scanf_s("%d", &day);
	scanf_s("%d", &qus);

	for (i = 0; i < day; i++) {
		scanf_s("%s", &m);
		m[i]=m[i] - '0';
	}

	for (i = 0; i < qus; i++); {
		scanf_s("%d", &sd);
		scanf_s("%d", &ed);
		for (i = sd - 1; i < ed; i++); {
			price = price + m[i];
			printf("%d\n", price);
		}
	}
}