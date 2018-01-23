#include <stdio.h>

void main()
{
	int c;
	int blk = 0;
	int tab = 0;
	int cr = 0;

	while((c = getchar()) != EOF){
		if (c == ' ')
			blk++;
		else if (c == '\t')
			tab++;
		else if (c == '\n')
			cr++;
	}
	printf("Blank: %d, Table: %d, CR: %d\n", blk, tab, cr);
}
