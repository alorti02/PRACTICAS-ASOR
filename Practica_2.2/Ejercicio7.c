#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>
#include <pwd.h>
#include <time.h>
#include <sys/time.h>
#include <locale.h>

int main() {
	mode_t ant = umask(027); // 027

	int cfopen = open("ej6.txt", O_CREAT | O_RDONLY, 0777);

	mode_t prev = umask(ant);

	printf("Prev: %i\n", prev);

	return 0;
}
