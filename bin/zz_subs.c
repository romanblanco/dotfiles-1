#include <stdio.h>
#include <stdlib.h>

int 
main(void)
{
	char map[256];
	for (int i = 0; i < 256; i++)
		map[i] = 0;
	
	map[0xed] = 'i';
	map[0xf8] = 'r';
	map[0xe1] = 'a';
	map[0xe8] = 'c';
	map[0x9a] = 's';
	map[0xec] = 'e';
	map[0xfd] = 'y';
	map[0x8e] = 'z';
	map[0x9d] = 't';
	map[0xf3] = 'o';
	map[0x9e] = 'z';
	map[0xf9] = 'u';
	map[0xef] = 'd';
	map[0xfa] = 'u';
	map[0xe9] = 'e';
	map[0xf2] = 'n';
	map[0xcc] = 'E';
	map[0xcd] = 'I';
	map[0xc8] = 'C';
	map[0xda] = 'U';
	map[0xd8] = 'R';
	map[0xc1] = 'A';
	map[0xdd] = 'Y';
	map[0xc9] = 'E';
	map[0x8a] = 'S';

	int c;
	while ((c = getchar()) != EOF) {
		if (map[c])
			putchar(map[c]);
		else
			putchar(c);
	}
	return 0;
}
