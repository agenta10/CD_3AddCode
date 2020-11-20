#include<stdio.h>
#include<stdlib.h>
char * funadd(char b[],char c[])
	{	int i,sz1=0,sz2=0;
		for(i=0;b[i]!='\0';i++)
		{	sz1++;
		}
		for(i=0;c[i]!='\0';i++)
		{	sz2++;
		}
		int sz=sz1+sz2,j=0;
		char *d=(char *)malloc((sz+1)*sizeof(char));
		
		for(i=0;i<sz1;i++,j++)
		{	d[j]=b[i];
		}
		for(i=0;i<sz2;i++,j++)
		{	d[j]=c[i];
		}
		d[j]='\0';
		return d;
	}
int main()
{	char *d;
	d=funadd("Amar","Agrawal");
	printf("%s",d);
	d=funadd(d,d);
	printf("%s",d);
}
