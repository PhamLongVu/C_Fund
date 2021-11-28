//selectionsort
//#include<stdio.h>
//
//void NhapMang(int a[], int n)
//{	
//	int i;
//	for (i=0; i<n; i++)
//	{
//		printf("a[%d]= ", i);
//		scanf("%d", &a[i]);
//	}	
//}
//
//void XuatMang(int a[], int n)
//{	
//	int i;
//	for (i=0; i<n; i++)
//		printf("%d ", a[i]);
//}
//
//
//
//void selectionSort(int a[], int n)
//{
//    int i, j, min, tg;
//
//    for (i = 0; i < n-1; i++)
//    {
//  
//    min = i;
//    for (j = i+1; j < n; j++)
//        if (a[j] < a[min])
//        min = j;
//        {
//        	
//        	tg = a[min];
//        	a[min]= a[i];
//        	a[i] = tg;
//		}	
//        
//        
//  
//    }
//}
//
//
//int main()
//{
//	int a[1000], n;
//	printf("Nhap so phan tu n: ");
//	scanf("%d", &n);
//	NhapMang(a, n);
//	printf("\nMang vua nhap la: ");
//	XuatMang(a, n);
//	printf("\nSap sep theo thu tu tang dan la: ");
//	selectionSort(a, n);
//	XuatMang(a, n);
//}

//interchangesort
//#include <stdio.h>
// 
//int main(){
//    int a[100];
//    int n, i, j;
//    printf("\nNhap so luong phan tu n = ");
//        scanf("%d", &n);
//    for(i = 0; i < n; i++)
//	{
//        printf("\nNhap a[%d] = ",i);
//        scanf("%d", &a[i]);
//    }
//    
//    int min;
//    for( i = 0; i < n - 1; i++){
//        for( j = i + 1; j < n; j++)
//		{
//            if(a[i] < a[j])
//			{
//                min = a[i];
//                a[i] = a[j];
//                a[j] = min;        
//            }
//        }
//    }
//    
//    printf("\nMang da sap xep la: ");
//    for( i = 0; i < n; i++){
//        printf("%5d", a[i]);
//    }  
//}

//Insertionsort

#include<stdio.h>

void NhapMang(int a[], int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}	
}

void XuatMang(int a[], int n)
{
	int i;
	for (i=0; i<n; i++)
		printf("%d ", a[i]);
}

void InsertionSort(int a[], int n)
{
	int i, j;
	for (i=1; i<n; i++)
	{
		int key = a[i];
		int j = i-1;
		
		while(j >=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}

int main()
{
	int a[1000], n;
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	NhapMang(a, n);
	printf("\nMang vua nhap la: ");
	XuatMang(a, n);
	printf("\nSap sep theo thu tu tang dan la: ");
	InsertionSort(a, n);
	XuatMang(a, n);
}


//BubbleSort
//#include<stdio.h>
//
//void NhapMang(int a[], int n)
//{
//	int i;
//	for( i=0; i<n; i++)
//	{
//		printf("a[%d]= ", i);
//		scanf("%d", &a[i]);
//	}
//}
//
//void XuatMang(int a[], int n)
//{	
//	int i;
//	for ( i=0; i<n; i++)
//		printf("%d ", a[i]);
//}
//
//void BubbleSort(int a[], int n)
//{
//	int tg, i, j;
//	for ( i = 0; i < n-1; i++)	
//		for (j = 0; j < n-i-1; j++)
//			if (a[j] > a[j+1])
//			{
//				tg = a[j];
//				a[j] = a[j+1];
//				a[j+1] = tg;
//			}
// 	
//				
//}
//
//int main ()
//{
//	int a[1000], n;
//	printf("Nhap so phan tu n: ");
//	scanf("%d", &n);
//	NhapMang(a, n);
//	printf("\nMang vua nhap la: ");
//	XuatMang(a, n);
//	BubbleSort(a, n);
//	printf("\nSap xep theo chieu tang dan la: ");
//	XuatMang(a, n);
//}


