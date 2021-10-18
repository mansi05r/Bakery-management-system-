#include<stdio.h>
#include<strings.h>
void copy(char *w);
void rev(char *w,int);
void conc(char *w,int );
void occ(char *w,int );
main()
{
	char s[10];
	char *w;
	int i=0,j=0,l=0,x;
	printf("enter string: ");
	scanf("%s",&s);
	w=s;
	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	printf("length of the string is %d",l);
	printf("Enter the function to perform");
	scanf("%d",&x);
	switch(x)
	{
		case 1: copy(s);
		break;
		case 2: rev(s,l);
		break;
		case 3: conc(s,l);
		break;
		case 4:
			occ(s,l);
	}
}
void copy(char *w)
   { int i=0;
   char b[10];
   char *q;
   q=b;
   while(*w!='\0')
	{
	    *q=*w;	
		w++;
		q++;
		
	}
	printf("copied string");
	printf("%s",b);
}
void rev(char *w,int l)
{   
	int i=0,j;
	char b[10];
	char *q;
	q=b; 
	while(*w!='\0')
	{ 
		w++;
		i++;
	}
	
	w--;
	
	for(j=0;j<i;j++)
	{ 
		*q=*w;
		w--;
		q++;
	}
	puts(b);
}	
void conc(char *w,int l)
{
	int i=0,j=0;
	char b[20];
	char *q;
	q=b;
	printf("enter string2: ");
	scanf("%s",&b);
	while(*q!='\0')
	{
		q++;
	} 
	while(*w!='\0')
	{  *q=*w;
	w++;
	q++;
	}
	*q='\0';
	puts(b);
}
void occ(char *w,int l)
{   int i=0,j=0,count=0,c=0,t=0;
	char b[20];
	char *q;
	char *m;
	m=w;
	q=b; 
	printf("enter string2: ");
	scanf("%s",&b);
		while(*w!='\0')
    	{   c++;
    		w++;
    
		}
		printf("%d",c);
   while(*m!='\0')
    { printf("%c %c",*m,*q);
    	if(*m==*q)
    	{
    		count++;
		}
		printf("\n");
		printf("%d",count);
		if(count==c)
		{
		  t++;
		} m++;
		 q++;
	}
	printf("%d",t);
}

