#include<stdio.h>
void rev(char *q)
{
	int i,j;
	char c;
	for(j=0;q[j];j++);
	for(i=0,j=j-1;i<j;i++,j--)
	{
		c=q[i];
		q[i]=q[j];
		q[j]=c;
	}
	
	printf("%s",q);
}
void main()
{
	char s[50];
	printf("\nenter the string\n");
	scanf("%s",s);
	rev(s);
}
