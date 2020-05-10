#include <iostream>
int main()
{

	int kleinsteZahl;
	int testzahl = 20;


	for (int i = 1; i <= 20;) {
		if (testzahl % i == 0) {
			kleinsteZahl = testzahl;
			++i;
		}
		else {
			++testzahl;
			i = 1;
		}
	}
	std::cout << kleinsteZahl << std::endl;
}