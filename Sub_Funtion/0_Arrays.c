#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

int IndexOf(int a[], int n, int x) {
	int i;
	for(i = 0; i < n; i++) {
		if(a[i] == x) return i;
	}
	return -1;
}

void RemoveAt(int a[], int *n, int k) {
	if(k == -1) return;
	int i;
	for(i = k; i < *n-1; i++) {
		a[i] = a[i + 1];
	}
	*n=*n-1;
}

void InsertAt(int a[], int *n, int v, int k) {
	if(k < 0 || k > *n) return;
	int i;
	for(i = *n; i > k; i--) {
		a[i] = a[i - 1];
	}
	a[k] = v;
	
	*n=*n+1;
	printf("n=%d\n",*n);
}

int imax(int a[], int n) {
	int imax = 0, i;
	for(i = 1; i < n; i++) {
		if(a[i] > a[imax]) imax = i;
	}
	return imax;
}

void SelectionSort(int a[], int n) {
	int i, j,t;
	for(i = 0; i < n - 1; i++) {
		//tim min trong doan tu i + 1 den n - 1
		int imin = i + 1;
		for(j = i + 1; j < n; j++) {
			if(a[j] < a[imin]) imin = j;
		}
		if(a[i] > a[imin]) 
			{
				t=a[i]; a[i]=a[j]; a[j]=t;
			}
	}
}

void BubbleSort(int a[], int n) {
	int i, j,t;
	for(i = 0; i < n - 1; i++) {
		for(j = i + 1; j < n; j++) {
			if(a[i] > a[j]) 
			{t=a[i]; a[i]=a[j]; a[j]=t; }
		}
	}
}
int main() {
	int i,j,k,t,vt,n = 5;
	int a[n];
	for(i=0; i<n; i++) scanf("%d",&a[i]);
//vt=IndexOf(a, n, 123);
//printf("vi tri =%d",vt);
//	k = imax(a,n);
//	printf("imax=%d",k);
//	BubbleSort(a,n);
	InsertAt(a,&n,99,3);
	 //RemoveAt(a, &n, 0);
//	printf("n=%d\n",n);
	/*find min
	k = IndexOf(a,n,min);
	RemoveAt(a,n,k);
	*/
	//output a
	printf("\nOUTPUT\n");
	for(i = 0; i < n; i++) {
		printf("%d ",a[i]);
	}	
	  printf("\n");
  system ("pause");
  return(0);

}
