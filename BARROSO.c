#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char cadena[50];
char sub[50];
int j=0;
int i=0;
main()
{
	scanf("%s",cadena);
	scanf("%s",sub);
	while(cadena[i]!='\0')
{
	while(cadena[i]==sub[j])
{
	i++;
	j++;
	if(sub[j]=='\0')
{
	printf("SI EXISTE");
	break;
}
}
	i++;
	j=0;
}
	if(j==0&&i==strlen(cadena))
{
	printf("NO EXISTE");
}system("PAUSE");
}
