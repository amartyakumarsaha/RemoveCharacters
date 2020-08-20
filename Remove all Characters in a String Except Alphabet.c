#include<stdio.h>
void removeCharecters(char);
int main()
{
	char str[100];
	int i;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		removeCharecters(str[i]);
	}
}
void removeCharecters(char ch)
{
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		printf("%c",ch);
	}
}
