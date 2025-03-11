#include <stdio.h>
#include <stdbool.h>

int main(void) {
	unsigned int i = 99;
	while (true) {
		if (i == 2) {
			printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
			--i;
			printf("Take one down and pass it around, %d bottle of beer on the wall.\n", i);
			printf("%d bottle of beer on the wall, %d bottle of beer.\n", i, i);
			printf("Take one down and pass it around, no more bottles of beer on the wall.\n");
			break;
		}
		printf("%d bottles of beer on the wall, %d bottles of beer.\n", i, i);
		--i;
		printf("Take one down and pass it around, %d bottles of beer on the wall.\n", i);
	}
	i = 99;
	printf("No more bottles of beer on the wall, no more bottles of beer.\n");
	printf("Go to the store and buy some more, %d bottles of beer on the wall.\n", i);
	return 0;
}
