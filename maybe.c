#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_version(void) {
	printf(
		"maybe (WTF coreutils) 2.0.0"
		"Copyright (C) 2021 Henrique Rocha."
		"License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>."
		"This is free software: you are free to change and redistribute it."
		"There is NO WARRANTY, to the extent permitted by law."
		""
		"Written by Henrique Rocha.");
}

int main(int argc, char *argv[]) {

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
