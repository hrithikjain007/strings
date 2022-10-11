#include<stdio.h>
void my_strcpy(char *q)
{
	char a[20];
	int i=0;
	while(q[i])
	{  
		a[i]=q[i];
                 i++;
	}
	a[i]=q[i];
	printf("%s",a);
}
void main()
{
	 char s[20];
	printf("\nenter the string\n");
	scanf("%s",s);
	my_strcpy(s);
}
