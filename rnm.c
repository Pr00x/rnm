#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
	if(!argv[1]) {
		puts("rnm: missing operand.\x0ATry 'rnm --help' for more information.");

		return -1;
	}
	else if(strncmp(argv[1], "--help", 7) == 0 || strncmp(argv[1], "-h", 3) == 0 && !argv[2]) {
		puts("Usage: rnm [FILE] [NEW FILENAME]\x0ARename the FILE.");
	
		return 0;
	}
	else if(!argv[1] || !argv[2]) {
    puts("rnm: missing operand.\x0ATry 'rnm --help' for more information.");

    return -1;
  }

	int rnm = rename(argv[1], argv[2]);

	if(rnm) {
		perror("rnm");

		return -1;
	}

	return 0;
}
