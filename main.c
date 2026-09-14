#define N_MAX 500000000

#include "math.h"
#include "stdio.h"

double pi(int N) {
	double pi = 0;

	for (int i = 0; i < N; i++)
		pi += pow(-1, i) / (2 * i + 1);

	printf("%lf\n", pi * 4);

	return 4*pi;
}

int main() {
	for (int i = 5; i <= N_MAX; i *= 10) {
		printf("N = %d, отн. погрешность: %lf%%\n", i, 100*fabs(M_PI - pi(i))/M_PI);
	}
}
