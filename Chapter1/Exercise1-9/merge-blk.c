#include <stdio.h>

void main()
{
	int pre_c, cur_c;

	pre_c = cur_c = NULL;

	while((cur_c = getchar()) != EOF) {
		//printf("%c", cur_c);
#if 0
		if((pre_c == ' ') && (cur_c == ' '))
			continue;
		else
			pre_c = cur_c;
#else
		if((pre_c != ' ') || (cur_c != ' ')) {
			pre_c = cur_c;
			printf("%c", pre_c);
		}
#endif
	}
}
