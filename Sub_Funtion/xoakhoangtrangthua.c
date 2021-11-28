#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//xoa het khoang trang thua trong chuoi
int main(){

char s[100];
gets(s);
int n=strlen(s);
int i,j;
printf("\nOUTPUT:\n");
for(i=0;i<n;i++){
	if(s[i]==' '&&s[i+1]==' '){
	  for(j=i+1;j<n;j++){
		s[j]=s[j+1];
     }
     i--;
	}
}
puts(s);
printf("\n");

}

