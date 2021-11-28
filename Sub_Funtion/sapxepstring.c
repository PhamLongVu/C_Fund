#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void split(char s[100], char st[100][30],int*k)
{
	int i=0,j;
	while(s[i]!='\0')
	{
		j=0;
		while(s[i]!=' '&&s[i]!='\0')
		{
			st[*k][j]=s[i];
			j++;
			i++;
		}
		
		st[*k][j]='\0';
		*k=*k+1;
		if(s[i]==' ')
			i++;
	}
}

int check (char st[100][30],int k)
{
	int i,j;
	for(i=0;i<k;i++)   
		if(strcmp(st[i],st[i+1])!=0)
			return 1;
	return 1;
	
}



void Sort(char st[100][30],int k)
{
    int i,j;
    char temp[100];
	    for(i=0;i<k;i++)
		  	for(j=i+1;j<k;j++)
		  	{
		  		if(strlen(st[i]) < strlen(st[j]))
				{
					strcpy(temp,st[i]);
					strcpy(st[i],st[j]);
					strcpy(st[j],temp);
				}			   
		   
		  		if((strcmp(st[i],st[j])==1) && (strlen(st[i]) == strlen(st[j])))
				{	  	 		
					strcpy(temp,st[i]);
					strcpy(st[i],st[j]);
					strcpy(st[j],temp);
				}  
			}
				   
	for(i=0;i<k;i++)
		printf("%s ", st[i]);
}
int main(){
char s[100];
gets(s);
int k=0;
char st[100][30];
split(s,st,&k);
Sort(st,k);
return 0;
}

//void split(char s[], char st[100][30],int*k){
//	int i=0,j;
//	while(s[i]!='\0'){
//	j=0;
//	if(s[i]==' '){
//		i++;
//	}else{
//	while(s[i]!=' '&&s[i]!='\0'){
//		st[*k][j]=s[i];
//		j++;
//		i++;
//	}
//	st[*k][j]='\0';
//	*k=*k+1;
//  }
//}
//}







