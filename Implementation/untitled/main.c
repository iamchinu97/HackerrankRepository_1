//============================================================================
// Name        : assignment1.cpp
// Author      : Chinmay Shimpi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct mnemonictable
 {
 char mnemonic[20];
 char Class[5];
 char opcode[5];
 int length;
 };
struct mnemonictable MT[20] = {
		{"START","AD","01",1},{"STOP","IS","00",1},
		{"ADD","IS","01",1},{"SUB","IS","02",1},
		{"DIV","IS","08",1},{"MULT","IS","03",1},
        {"MOVER","IS","04",1},{"MOVEM","IS","05",1},
        {"COMP","IS","06",1},{"BC","IS","07",1},
        {"READ","IS","09",1},{"PRINT","IS","10",1},
        {"END","AD","02",0},{"ORIGIN","AD","03",0},
        {"EQU","AD","04",0},{"LTORG","AD","05",0},
        {"DS","DL","01",0},{"DC","DL","02",0}};
struct symboltable
{
 char Symbol[8];
 int  Address;
 int  Size;
}ST[20];
struct opcodetable
{
	char mnemonic[10];
	char opcode[5];
};
struct pooltable
{
	int index;
}PT[10];

struct literaltable
{
	char lite[10];
	int address;
}LT[20];

struct intermediatecode
{
	char Class[5];
	char opcode[5];
	char type[5];
	char operand[10];

}IC[30];

int tokens=0;
int totnum=20;
int loc=0;
int symbolindex=0,icindex=0;
char s1[8],s2[8],s3[8],label[8];
int STsearch(char symbol[])
{
	int i;
	for(i=0;i<symbolindex;i++)
	{
		if(strcmp(ST[i].Symbol,symbol)==0)
		return i;
	}
	return -1;
}
int MTsearch(char nmeu[])
{
	int i;
	printf("\npar=%s",nmeu);
	for(i=0;i<totnum;i++)
	{
		if(strcmp(MT[i].mnemonic,nmeu)==0)
		{
		    return i;
		}
	}
	return -1;
}
void STdisplay()
{
	int i;
	//FILE *fp1;
	//fp1=fopen("symbol_table.txt","w");
	printf("\nSymbol_table\n");
	for(i=0;i<symbolindex;i++)
	{
		 printf("\n%s\t%d\t%d",ST[i].Symbol,ST[i].Address,ST[i].Size);
		// fprintf(fp1,"%s\t%d\t%d\n",ST[i].Symbol,ST[i].Address,ST[i].Size);
	}
	//fclose(fp1);
}
void ICdisplay()
{
	int i;
	printf("\nIntermediate code");
	for(i=0;i<icindex;i++)
	{
		printf("(%s,%s)(%s,%s)",IC[i].Class,IC[i].opcode,IC[i].type,IC[i].operand);
	}
}
int insertST( char symbol[],int address,int size)
{
strcpy(ST[symbolindex].Symbol,symbol);
ST[symbolindex].Address=address;
ST[symbolindex].Size=size;
symbolindex++;
return(symbolindex-1);
}
void startfun()
{
	int index;
	index=MTsearch(s1);
	strcpy(IC[icindex].Class,MT[index].Class);
	strcpy(IC[icindex].opcode,MT[index].opcode);
	strcpy(IC[icindex].type,"C");
	strcpy(IC[icindex].operand,s2);
	loc+=atoi(s2);
	icindex++;
}
int main()
{
	char next[80];
	int i,index;
	FILE* fp;
	//printf("Enter file name: ");

//	gets(file);
	fp = fopen("input.txt","r");
	printf("\nfile opened");
	while(!feof(fp))
	{
		printf("\nHI");
		i=0;
		next[i]=fgetc(fp);
		while(next[i]!='\n' && next[i]!=EOF)
		{
			if(!isalnum(next[i]))
			{
				next[i]=' ';
			}
			else
			{
			next[i] = toupper(next[i]);
			}
			i++;
			next[i]=fgetc(fp);

		}
		next[i]='\0';
		printf("%s",next);
		sscanf(next,"%s",s1);
		printf("\ns1==%s",s1);
		if(strcmp(s1,"END")==0)
		{
			break;
		}
		printf("\noutside mt search");
		if(MTsearch(s1)==-1)
		{
			printf("\ninside mt search");
			if(STsearch(s1)==-1)
			{
			insertST(s1,loc,0);
			}
			tokens = sscanf(next,"%s%s%s%s",label,s1,s2,s3);
			tokens--;
		}
		else
		{
            printf("gone in else");
			tokens = sscanf(next,"%s%s%s",s1,s2,s3);
		}
		/*index=MTsearch(s1);
		if(index==-1)
		{
			printf("\nThe opcode %s is not valid\n",s1);
			continue;
		}
		if(strcmp(MT[index].Class,"AD")==0)
		{
			printf("Inside AD");
			startfun();
		}
		if(strcmp(MT[index].Class,"IS")==0)
		{
			printf("\nInside IS");
			//ISfun();
		}
		if(strcmp(MT[index].Class,"DL")==0)
		{
			printf("Inside DL");
			//DLfun();
		}*/
	}
	//ICdisplay();
	return 0;
}
