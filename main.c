#define N 500000000

#include "time.h"
#include "math.h"
#include "stdio.h"

int main() {
	struct timespec start, end;
	clock_gettime(CLOCK_MONOTONIC_RAW, &start);

	double pi = 0;

	for (int i = 0; i < N; i++)
		pi += pow(-1, i) / (2 * i + 1);

	printf("N = %d, отн. погрешность: %lf%%\n", N, 100*fabs(M_PI - 4*pi)/M_PI);

	clock_gettime(CLOCK_MONOTONIC_RAW, &end);
	printf("Time taken: %lf sec.\n",
		end.tv_sec-start.tv_sec
		+ 0.000000001*(end.tv_nsec-start.tv_nsec));

	return 0;
}
