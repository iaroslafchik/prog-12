#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

using namespace std;

int day = 0, month = 0, year = 0, timerStart;

int main() {
	timerStart = clock();
	for (;;) {
		printf("Enter your birthdate, format DD.MM.YYYY\n");
		if (scanf("%d.%d.%d", &day, &month, &year) == 3) {
			printf("\ntime: %.3f s", (float)(clock() - timerStart) / CLOCKS_PER_SEC);
			break;
		}
		while (getchar() != '\n');
	}

	for (int waitTime = clock(); (clock() - waitTime) < (10 * CLOCKS_PER_SEC););

	printf("\n-------\nday = %d\nmonth = %d\nyear = %d\nall time: %.3f s", day, month, year, (float)clock() / CLOCKS_PER_SEC);
}