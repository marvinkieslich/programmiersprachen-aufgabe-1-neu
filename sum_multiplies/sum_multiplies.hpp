#include <cmath>



int sum_multiplies(int num) {



	int maxNum = 1000;
	int minNum = 1;
	int sum = 0;

	if (num < minNum) {
		return NULL;
	}
	else if (num > maxNum) {
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