#include <stdio.h>

#define MAXLENGTH 	1000

/* newline:  read a line into s, return length  */
int newline(char s[],int lim)
{
	int c, i;

	for (i=0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int remove_blk(char str[])
{
	int i = 0;
	int end = 0;
	while(str[i] != '\0') {
		if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			end = i;
		i++;
	}
	//printf("str[end] = %c, end = %d, i = %d\n", str[end], end, i);
	if(end == 0 && (str[end] == ' ' || str[end] == '\t' || str[end] == '\n'))
		return end;

	//str[end+1] = '\n';
	//str[end+2] = '\0';
	str[end+1] = '\0';

	return end+1;
}

void main()
{
	char str[MAXLENGTH];
	int nr;

	while(newline(str, MAXLENGTH) > 0) {
		nr = remove_blk(str);
		if(nr == 0)
			printf("This line is blank!\n");
		else
			printf("length: %d, the string is %s\n", nr, str);
	}
}

