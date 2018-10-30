#include <stdio.h>

long rfibo(int n) {
	if (n == 0) 
		return 0;
	else if (n == 1)
		return 1;
	else
		return rfibo(n - 1) + rfibo(n - 2);
}

long sfibo(int n) {
	static int a = 0;
	static int b = 1;
	static int sum = 1;
	a = b;
	b = sum;
	sum = a + b;
	return sum;
}

int main() {

	for (int n = 3; n < 46; n++) {
		if (n % 2) {
			printf("rfibo(%d) = %d\n", n, rfibo(n));
			printf("sfibo(%d) = %d\n", n, sfibo(n));
		}
		else
			sfibo(n);
	}

	system("pause");
	return 0;
}
