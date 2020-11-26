#include<stdio.h>
#include<stdlib.h>
char * strs[100];
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
clss *  expr2(clss * cl1 ,clss * cl2,char * op,int* nd,int *varc)
	{	//printf("aaaaaaaa%d %daaaaaaaaaa\n",*nd,*varc);	
		*(nd)=*(nd)+1;
		*(varc)=*(varc)+1;
		char *code;
		code=funadd5(in_tos(*nd)," var",in_tos(*varc)," = ",cl1->evar);
		code=funadd5(code," ",op," ",cl2->evar);
		//printf("%s\n",code);
		strs[*nd]=code;
		clss *cc;
		if(cl1->st_ln!=0)
		{	cc=createnode(code,cl1->st_ln,cl1->no_ln+cl2->no_ln+1);}
		else if(cl2->st_ln!=0)
		{	cc=createnode(code,cl2->st_ln,cl1->no_ln+cl2->no_ln+1);}
		else
		{	cc=createnode(code,*nd,cl1->no_ln+cl2->no_ln+1);}
		cc->evar=funadd2("var",in_tos(*varc));
	
		return cc;
	}
