#include<stdio.h>
int my_strcmp(char *q, char *a)
{
	int i=0;
	while(q[i]==a[i])
	{
		
		i++;
	}
   i=q[i]-a[i];
   return i; 
}
void main()
{
	int l;
	char s1[20],s2[20];
  printf("\nenter the string 1\n");
  scanf("%s",s1);
  printf("\nenter the string 2\n");
  scanf("%s",s2);
 l=my_strcmp(s1,s2);
 printf("%d",l);
   if(l>0)
	   printf("\ns1 is greater\n");
   else if(l<0)
	   printf("\ns2 is greater\n");
   else
	   printf("both are equal");
	
}
