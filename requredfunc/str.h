#include<stdio.h>
#include<stdlib.h>
typedef struct cls
	{	int st_ln;
		int no_ln;
		char * evar;
		char *code;
	} clss;
char * funadd2(char b[],char c[])
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
char * funadd3(char *a,char * b,char *c)
	{	char *d=funadd2(a,b);
		d=funadd2(d,c);
		return d;
	}
char * funadd4(char *a,char * b,char *c,char *d)
	{	char *e=funadd3(a,b,c);
		e=funadd2(e,d);
		return e;
	}
char * funadd5(char *a,char * b,char *c,char *d,char *e)
	{	char *f=funadd4(a,b,c,d);
		f=funadd2(f,e);
		return f;
	}
char * funadd1(char b[])
	{	int i,sz=0;
		for(i=0;b[i]!='\0';i++)
		{	sz++;
		}
		int j=0;
		char *d=(char *)malloc((sz+1)*sizeof(char));
		for(i=0;i<sz;i++,j++)
		{	d[j]=b[i];
		}
		d[j]='\0';
		return d;
	}
char * in_tos(int num)
	{	char *d=(char *)malloc(50*sizeof(char));
		sprintf(d, "%d", num);
		return d;	
	}
char * fl_tos(float num)
	{	char *d=(char *)malloc(50*sizeof(char));
		sprintf(d, "%f", num);
		return d;	
	}
clss * createnode(char *a,int st,int nl)
		{	clss *x=(clss *)malloc(sizeof(clss));
			x->st_ln=st;
			x->no_ln=nl;
			x->code=a;
			return x;
		}