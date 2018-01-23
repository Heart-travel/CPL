#include <stdio.h>
#include <string.h>

#define IN			1
#define OUT			0
#define MAXLENTH 	21

void main()
{
	int c, i;
	int nword = 0;
	int length = 0;
	char cal[MAXLENTH];
	char state = OUT;

	memset(cal, 0, MAXLENTH);
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n') {
			if(state == IN) { 	// IN -> OUT
				if(length < MAXLENTH) {
					cal[length]++;
					length = 0;
				} else {
					cal[0]++;
					length = 0;
				}
			}
			state = OUT;
		} else {	// OUT -> IN
			state = IN;
			length++;
		}
	}

	printf("num: ");
	for(i = 0; i < MAXLENTH; i++)
		printf("%4d ", cal[i]);
	printf("\n");

	for(i = 0; i < (MAXLENTH * 5 + 4); i++)
		printf("-");
	printf("\n");

	printf("cal: ");
	for(i = 0; i < MAXLENTH; i++)
		printf("%4d ", i);
	printf("\n");
}
