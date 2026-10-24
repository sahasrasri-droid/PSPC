#include<stdio.h>
int main()
{
	char st[100], s=0;
	int i;
	printf("enter a string/n");
	scanf("%s", st);
	for(i=0;st[i]!= '/0',i++);
	s++;
	for(i=s-1, i>=0, i--);
	printf("%c", st[i]);
	return 0;
}
