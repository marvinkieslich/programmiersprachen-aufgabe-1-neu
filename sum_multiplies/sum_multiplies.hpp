#include <cmath>



int sum_multiplies(int num) {



	int minNum = 1;
	int sum = 0;

	if (num < minNum) {
		return NULL;
	}


	int i = 1;

	while (i <= num) {

		if (i % 3 == 0) {
			sum += i;
			++i;
		}
		else if (i % 5 == 0) {
			sum += i;
			++i;
		}

		else {
			++i;
		}

	}

	return sum;

}