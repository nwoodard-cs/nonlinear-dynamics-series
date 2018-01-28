//TODO: Add #ifdef ONE_DIMENSIONAL_MAP

#include <iostream>
#include <cstddef>

void firstTrajectory() {
	size_t n = 28; // Start value
	size_t T = 50; // Number of iterations

	for (size_t i = 0; i < T; i++) {
		if (n % 2 == 0) { n = n / 2; } // If n is even, n = n/2
		else { n = 3 * n + 1; }        // If n is odd n = 3n+1
		std::cout << n << std::endl;
	}

}