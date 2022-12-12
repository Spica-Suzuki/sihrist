#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kelime.h"
#include "anlam.h"


int main(int argc, char *argv[]) {

char ctrl;
short x = 0;
short y;

ctrl = strcmp(argv[1], kelime[x]);

while (ctrl != 0)
	{
	x++;
	ctrl = strcmp(argv[1], kelime[x]);
	if (ctrl == 0 ) {
		y = x;
		printf("%s\n", anlam[y]);
		}
	}

return 0;
}
