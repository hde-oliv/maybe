#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void print_version(void) {
	printf(
		"maybe (WTF coreutils) 2.0.0\n"
		"Copyright (C) 2021 Henrique Rocha.\n"
		"License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
		"This is free software: you are free to change and redistribute it.\n"
		"There is NO WARRANTY, to the extent permitted by law.\n\n"
		"Written by Henrique Rocha.\n");
}

void print_help(void) {
	printf(
		"Usage: maybe [STRING]\n"
		"  or:  maybe OPTION\n"
		"Maybe output a line with a specified STRING, or 'y', or 'n'.\n"
		"      --help     display this help and exit\n"
		"      --version  output version information and exit\n");
}

int main(int argc, char *argv[]) {

	srand(time(NULL));

	if (argc == 2) {
		if (!strncmp(*(argv + 1), "--version", 9))
			print_version();
		else if (!strncmp(*(argv + 1), "--help", 6))
			print_help();
		else {
			while (1) {
				int r = rand();
				if (r < (RAND_MAX / 2))
					printf("%s\n", *(argv + 1));
				else
					printf("\n");
			}
		}
	}
	else if (argc == 1) {
		while (1) {
			int r = rand();
			if (r < (RAND_MAX / 2))
				printf("y\n");
			else
				printf("n\n");
		}
	}
	return (1);
}
