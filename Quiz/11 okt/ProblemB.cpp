#include<stdio.h>

int main()
{
	int testCase,a,b,c,d,e,countData;
	char buffer[100];
	scanf("%d",&testCase);
	for(int i=0; i<testCase; i++)
	{
		getchar();
		scanf("%[^\n]",&buffer);
		a = b = c = d = e = countData = 0;
		for(int j=0;buffer[j]!='\0'; j++)
		{
			switch(buffer[j])
			{
				case '!':
					a++;
					break;
				case '%':
					b++;
					break;
				case '&':
					c++;
					break;
				case '^':
					d++;
					break;
				case '|':
					e++;
					break;	
			}
		}
		countData = 0;
		printf("Case #%d: ",i+1);
		for(int x=0; x<a; x++)
		{
			countData++;
			if(countData==3)
			{
				printf("!");	
			}
			else
				printf("! ");
		}
		for(int x=0; x<b; x++)
		{
			countData++;
			if(countData==3)
			{
				printf("%%");	
			}
			else
				printf("%% ");
		}
		for(int x=0; x<c; x++)
		{
			countData++;
			if(countData==3)
			{
				printf("&");	
			}
			else
				printf("& ");
		}
		for(int x=0; x<d; x++)
		{
			countData++;
			if(countData==3)
			{
				printf("^");	
			}
			else
				printf("^ ");
		}
		for(int x=0; x<e; x++)
		{
			countData++;
			if(countData==3)
			{
				printf("|");	
			}
			else
				printf("| ");
		}
		printf("\n");
	
	}
	return 0;
}
