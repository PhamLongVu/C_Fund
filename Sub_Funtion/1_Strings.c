#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <string.h>//strlen/cmp/cat/cpy/cmpi 
#include <ctype.h>//tolower/upper,islower/upper/digit
#include <time.h>

void swap(char x[], char y[]) {
	char tg[30];
	strcpy(tg, x);
	strcpy(x, y);
	strcpy(y,tg);
}

void BubbleSort(char a[][30], int n) {
	int i, j;
	for(i = 0; i < n - 1; i ++)
		for(j = i + 1; j < n; j++)
			if(strcmp(a[i],a[j]) > 0) swap(a[i],a[j]);
}

int imax(char a[][30], int n) {
	int i,imax = 0;
	for(i = 1; i < n; i++) {
		if(strlen(a[i]) > strlen(a[imax])) imax = i;
	}
	return imax;
}

void RemoveAt(char a[][30], int *n, int k) {
	int i;
	if(k < 0 || k >= *n) return;
	for(i = k; i < *n - 1; i++) {
		strcpy(a[i],a[i + 1]);
	}
	*n--;
}

void Split(char s[], char st[][30], int *n) {
	int i, j, len,n1;
	len = strlen(s);
	n1 = 0;
	i = 0;
	while(i < len) {
		//tim i la vi tri dau tien trong s, sao cho s[i] # empty
		while(i < len && s[i] == ' ') i++;
		if(i < len) {
			char x[30];
			//sao chep moi ky tu s[i] vao x, cho den khi s[i] = empty
			j = 0;
			while(i < len && s[i] != ' ') {
				x[j] = s[i]; i++; j++;
			}
			x[j] = '\0';
			strcpy(st[n1],x);
			n1++;
		}
		i++;
	}
	*n=n1;
}

void ToString(char s[], char st[][30], int n) {
	strcpy(s,"");
	int i;
	for(i = 0; i < n; i++) {
		strcat(s,st[i]);
		if(i < n - 1) strcat(s, " ");
	}
}
int main() {
	 char st[10][30];int n, i;
	 char s[30] = "is the quick fox 2015";
	 Split(s,st,n);
	 	for(i = 0; i < n; i++) 
		printf("%s ",st[i]);
		
	 BubbleSort(st,n);
	 ToString(s,st,n);
	 puts(s);
}
