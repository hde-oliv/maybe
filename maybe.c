#include <unistd.h>
#include <time.h>
#include <stdlib.h>

int main (void) {
	srand(time(NULL));
	while (1) {
		int r = rand();
		if (r < (RAND_MAX / 2))
			write(1, "y\n", 2);
		else
			write(1, "n\n", 2);
	}
	return (1);
}
