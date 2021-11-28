#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//xoa ki tu duoc chon trong chuoi
int main(){

char s[100];
gets(s);
char c;
scanf("%c",&c);
int n=strlen(s);
int i,j;
for(i=0;i<n;i++){
	if(s[i]==c){
		for(j=i;j<n;j++){
			s[j]=s[j+1];
		}
		i--;
	}
}
printf("%s",s);
printf("\nOUTPUT:\n");

}

