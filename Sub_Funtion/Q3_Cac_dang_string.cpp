#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//remove redundant spaces in a string s
void removeRedSpaces(char s[])
 {int n,low, up, i, j; char x[100];
  n = strlen(s);
  i=0; j=n-1;
  while(i<n && s[i]==' ') i++;
  low = i;
  while(j>0 && s[j]==' ') j--;
  up = j;
  if(low>up) {strcpy(s,""); return;}
  strcpy(x,"");
  i = low; j=0;
  while(i<=up)
   {while(i<up && s[i]==' ') i++;
    while(i<=up && s[i]!=' ') x[j++] = s[i++];
    if(i<=up) x[j++] = ' ';
   }
  x[j] = '\0';
  strcpy(s,x);
 }

//Enter data for a string s
void input(char s[])
 {printf("Enter a string s:\n");
  fflush(stdin);
  gets(s);
  removeRedSpaces(s);
 }

//Display a string s
void display(char s[])
 {printf("%s\n",s);
 }
//============================
void split(char u[], char a[][30], int &m) {
  int n,i,j,k; char x[30];
  n = strlen(u);
  i = 0; k = 0;
  while(i<n) {
    while(i<n && u[i]==' ') i++;
    if(i>n-1) break;
    j = 0;
    while(i<n && u[i] != ' ') x[j++] = u[i++];
    x[j] = '\0';
    strcpy(a[k],x);
    k++;           
   }          
  m = k;
 }
 //----------------------------
 void arrayToString(char a[][30], int m, char s[]) 
 {
  strcpy(s,a[0]);
	  for(int i=1;i<m;i++) 
	  {
	    strcat(s," ");     strcat(s,a[i]);               
	   }                
 }         
//--------------------------------------------------------
void fun(int tc, char s[])   // Complete this function
 {// Write your statements here


if(1==tc) // sort all words in the string  s  ascendingly
	{
		int m;
		char a[100][30];
		char t[30];
		split(s,a,m);
		
		for(int i=0;i<=m-2;i++)
	 		for(int j=i+1;j<=m-1;j++)
	 			if(strcmp(a[i],a[j])>0)  
				 { 
				 strcpy(t,a[i]); 
				 strcpy(a[i],a[j]); 
				 strcpy(a[j],t); 
				 }
		
	arrayToString(a,m,s); 
	}
	
	
if(3==tc) // chuyen chu dau tien thanh in HOA (a[0] thanh in HOA)
	{
		int m;
		char a[100][30];
		char t[30];
		split(s,a,m);
		
		int l=strlen(a[0]);
		for(int i=0; i<=l-1;i++)
			{
				if(a[0][i]>='a'&&a[0][i]<='z') a[0][i]=a[0][i]-32;
			}
		
	arrayToString(a,m,s); 	 
	}


if(4==tc) // chuyen cac chu co chi so chan thanh in HOA
	// (a[0], a[2], a[4] ... thanh in HOA)
	{
		int m; // chua so word trong string s
		char a[100][30];
		char t[30];
		split(s,a,m);
		
		for(int k=0; k<=m-1;k=k+2)
		{
			int l=strlen(a[k]);
			for(int i=0; i<=l-1;i++)
				{
					if(a[k][i]>='a'&&a[k][i]<='z') a[k][i]=a[k][i]-32;
				}
		}
	arrayToString(a,m,s); 	 
	}


if(5==tc) // Chu nao co ky tu dau la IN HOA 
	// thi chuyen ca chu thanh IN HOA
	{
		int m; 
		char a[100][30];
		char t[30];
		split(s,a,m);
		
		for(int k=0; k<=m-1;k++)
		{
			if(a[k][0]>='A'&&a[k][0]<='Z')
			{
			int l=strlen(a[k]);
			for(int i=0; i<=l-1;i++)
				{
					if(a[k][i]>='a'&&a[k][i]<='z') a[k][i]=a[k][i]-32;
				}
			}
		}
	arrayToString(a,m,s); 	 
	}


if(6==tc) // Neu ky tu dau la IN HOA thi giu lai con khong thi XOA
	{
	int m; 
	char t[30], a[100][30];
	split(s,a,m);
	// dua tra lai string s
	// arrayToString(a,m,s);
	int i=0;
	while(a[i][0]<='z'&&a[i][0]>='a'&&i<=m-1) i++;
	
	strcpy(s,a[i]);
	
	  for(int j=i+1;j<m;j++) 
		  if(a[j][0]<='Z'&&a[j][0]>='A') 
		  	{
		    strcat(s," ");     strcat(s,a[j]);               
		    }                	 
	}


if(7==tc) // Xoa cac word bat dau la ky tu in Hoa
	{
	 	int m;
		char a[100][30];
		char t[30];
		split(s,a,m);
	 	 	
	 	strcpy(s,"");
		  for(int i=0;i<m;i++) 
		  {
			    if(a[i][0]<='z'&&a[i][0]>='a')
			    {
			    	   strcat(s,a[i]); strcat(s," ");  
				}           
		   }        
	
	//	  int i;
	//	 for(i=0;i<=strlen(s)-2;i++) s[i]=s[i+1];
		 s[strlen(s)-1]='\0';
	}

if(8==tc) // delete the first and the last word of  the string s.
	{
		int m; // chua so word trong string s
		char a[100][30];
		char t[30];
		split(s,a,m);
		
		// arrayToString(a,m,s);
		strcpy(s,a[1]);
		  for(int i=2;i<=m-2;i++) 
		  {
		    strcat(s," ");     strcat(s,a[i]);               
		   }      
	 }


if(9==tc) // Doi cac chu trong mang dau - cuoi
	{
		int m;
		char a[100][30];
		char t[30];
		split(s,a,m);
		
		for(int i=0;i<=m/2-1;i++)
	 		 { 
				 strcpy(t,a[i]); 
				 strcpy(a[i],a[m-1-i]); 
				 strcpy(a[m-1-i],t); 
			 }
		
	arrayToString(a,m,s); 
	}
if(10==tc) // them chu "hello" o dau string
	{		
	char s1[100];
	strcpy(s1,s);
	
	strcpy(s,"hello");
	strcat(s," ");
	strcat(s,s1); 	
	}

if(11==tc) // them chu "googbye!" o cuoi string
	{
		
		strcat(s," goodbye!");
	
	}
	
if(12==tc) // them chu "hello" vao vi tri 3 (
	{
		int m;
		char a[100][30];
		char t[30];
		split(s,a,m);
		
		strcpy(s,a[0]);
	    strcat(s," ");     strcat(s,a[1]);               
	    strcat(s," ");     strcat(s,a[2]);              
		strcat(s," ");     strcat(s,"hello");   
		 
		for(int i=3;i<m;i++) 
		  {
		    strcat(s," ");     strcat(s,a[i]);               
		   }      
	}

if(13==tc) // them chu "hello" vao vi tri gan cuoi cung
	{
		int m;
		char a[100][30];
		char t[30];
		split(s,a,m);
		
		strcpy(s,a[0]);
	
		for(int i=1;i<m-1;i++) 
		  {
		    strcat(s," ");     strcat(s,a[i]);               
		   }               
		strcat(s," ");     strcat(s,"hello");  
		strcat(s," ");     strcat(s,a[m-1]);   
	}

}

//===============================================
int main() {  // Do not edit this function
  // system("cls");
  printf("\nTEST Q3 (2 marks):\n");
  int tc;
  char s[100];
  printf("Enter tc (1 or 2) = ");
  scanf("%d",&tc);
  input(s);
  printf("\nThe original string:\n"); 
  display(s);
  printf("\nThe string after processing:\n"); 
  fun(tc,s);
  display(s);
 //OUTPUT for marking:
  printf("\nOUTPUT:\n");
  display(s);
  printf("\n");
  system ("pause");
  return(0);
}

