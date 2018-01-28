#include <iostream>
#include <cstddef>

void firstTrajectory() {
	size_t n = 28; // Start value
	size_t T = 300; // Number of iterations
	//unsigned long long n = 998123456789; // Even this n will fall to the same periodic sequence of [4,2,1,4,2,1...]

	for (size_t i = 0; i < T; i++) {
		if (n % 2 == 0) { n = n / 2; } // If n is even, n = n/2
		else { n = 3 * n + 1; }        // If n is odd n = 3n+1
		std::cout << n << std::endl;
	}

}