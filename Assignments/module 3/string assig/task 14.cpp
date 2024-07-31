//PROGRAM : 14 MERGE TWO STRING WITHOUT USING INBUILT FUNCTION  (START)

#include<stdio.h>

main()
{
	char a[4],b[4],c[4];
	int i,j;
	
	printf("enter string : ");
	gets(a);
		
	printf("enter string : ");
	gets(b);

	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
    }
	for(j=0;b[j]!='\0';j++)
	{
 c[i]=b[j];
	i++;
	}
	
	c[i]='\0';
	
	printf("merge string is %s : ",c);
	
	}
	
	//PROGRAM : 14 MERGE TWO STRING WITHOUT USING INBUILT FUNCTION  (END)
