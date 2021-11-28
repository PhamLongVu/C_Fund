//Bai1DetoBI
#include<stdio.h>
#include<math.h>
int main()
{
	float n, a;
	int b, i, sum= 0, p = 0;
	printf("Nhap n: ");
	scanf("%f", &n);
	b = n;
	a = n - b;
			
	while(b > 0)
	{
		i = b%2;
		sum += i * pow(10, p);
		p++;	
		b = b/2;
	}
		printf("%d", sum);	
}
	
//----------------------------------


//Bai2 BItoDec
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	float n, a;
//	int b, i, sum= 0, p = 0;
//	printf("Nhap n: ");
//	scanf("%f", &n);
//	b = n;
//	a = n - b;
//
//	while(b > 0)   // phantruoc
//	{
//		i = b%10;
//		sum += i * pow(2, p);
//		p++;	
//		b = b/10;
//	}
//		printf("%d", sum);	
//}
//Bai3
//#include<stdio.h>
//#include<string.h>
////convert hexadecimal to decimal
//int convert(char num[]) {
//	int i;
//   int len = strlen(num);
//   int base = 1;
//   int temp = 0;
//   for (i=len-1; i>=0; i--) {
//      if (num[i]>='0' && num[i]<='9') {
//         temp += (num[i] - 48)*base;
//         base = base * 16;
//      }
//      else if (num[i]>='A' && num[i]<='F') {
//         temp += (num[i] - 55)*base;
//         base = base*16;
//      }
//   }
//   return temp;
//}
//int main() {
//   char num[30];
//   scanf("%s", num);
//   int a = convert(num);
//   printf("HEX= %d", a);
//   return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
// 
//int main ()
//{
//  int i;
//  char n [33];
//  printf ("Nhap n: ");
//  scanf ("%d",&i);
//  itoa (i,n,16);
//  printf ("Hex: %s\n",n);
//}
//-------------------------------------
//bai4convertatob
// bai 4: nhap n,a,b chuyen n tu he co so a sang b bat ki
//
//#include<stdio.h>
//#include<math.h>
//int arr[100];
// decimal sang binary
//void detobi(int n) {
//	int i=0,j;
//	while (n!=0) {
//		arr[i]=n%2;
//		n/=2;
//		i++;
//	}
//	for (j=i-1;j>=0;j--) printf("%d",arr[j]);
//}
// decimal sang octal
//void detooc(int n) {
//	int i=0,j;
//	while (n!=0) {
//		arr[i]=n%8;
//		n/=8;
//		i++;
//	}
//	for (j=i-1;j>=0;j--) printf("%d",arr[j]);
//}
// decimal sang hexadecimal
//void detohe(long int n) {
//	int i=0,j;
//	while (n!=0) {
//		arr[i]=n%16;
//		n/=16;
//		i++;
//	}
//	for (j=i-1;j>=0;j--) {
//		if (arr[j]==10) printf("A");
//		else if (arr[j]==11) printf("B");
//		else if (arr[j]==12) printf("C");
//		else if (arr[j]==13) printf("D");
//		else if (arr[j]==14) printf("E");
//		else if (arr[j]==15) printf("F");
//		else printf("%d",arr[j]);
//	}
//}
// binary sang decimal
//int checkbi(int n) {
//	int i=0,count;
//	while (n!=0) {
//		arr[i]=n%10;
//		n/=10;
//		if (arr[i]!=0 && arr[i]!=1) count++;
//	}
//	if (count==0) return 1;
//	else return 0;
//}
//int bitode(int n) {
//	int i=0,count=0,sum=0;
//	while (n!=0) {
//		arr[i]=n%10;
//		n/=10;
//		i++;
//		count++;
//	}
//	for (i=0;i<count;i++) sum+=(arr[i] * pow(2,i));
//	return sum;
//}
// octal sang decimal
//int octode(int n) {
//	int i=0,count=0,sum=0;
//	while (n!=0) {
//		arr[i]=n%10;
//		n/=10;
//		i++;
//		count++;
//	}
//	for (i=0;i<count;i++) sum+=(arr[i] * pow(8,i));
//	return sum;
//}
// hexadecimal sang decimal
//int hetode(int n) {
//	int i=0,count=0,sum=0;
//	while (n!=0) {
//		arr[i]=n%10;
//		n/=10;
//		i++;
//		count++;
//	}
//	for (i=0;i<count;i++) sum+=(arr[i] * pow(16,i));
//	return sum;
//}
// binary sang octal
//void bitooc(int n) {
//	int a=bitode(n);
//	detooc(a);
//} 
// binary sang hexadecimal
//void bitohe(int n) {
//	int a=bitode(n);
//	detohe(a);
//}
// octal sang binary
//void octobi(int n) {
//	int a=octode(n);
//	detobi(a);
//}
// octal to hexadecimal
//void octohe(int n) {
//	int a=octode(n);
//	detohe(a);
//}
// hexadecimal to binary
//void hetobi(int n) {
//	int a=hetode(n);
//	detobi(a);
//}
// hexadecimal to octal
//void hetooc(int n) {
//	int a=hetode(n);
//	detooc(a);
//}
//main()
//{
//	int n,a,b;
//	printf("a= "); scanf("%d",&a);
//	printf("b= "); scanf("%d",&b);
//	printf("n= "); scanf("%d",&n);
//	if (a==10 && b==2) detobi(n);
//	if (a==10 && b==8) detooc(n);
//	if (a==10 && b==16) detohe(n);
//	if (a==2 && b==10) {
//		while (checkbi(n)==0) {
//			printf("nhap binary n= "); scanf("%d",&n);
//		}
//		printf("%d",bitode(n));
//	}
//	if (a==8 && b==10) printf("%d",octode(n));
//	if (a==16 && b==10) printf("%d",hetode(n));
//	if (a==2 && b==8) {
//		while (checkbi(n)==0) {
//			printf("nhap binary n= "); scanf("%d",&n);
//		}
//		bitooc(n);
//	}
//	if (a==2 && b==16) {
//		while (checkbi(n)==0) {
//			printf("nhap binary n= "); scanf("%d",&n);
//		}
//		bitohe(n);
//	}
//	if (a==8 && b==2) octobi(n);
//	if (a==8 && b==16) octohe(n);
//	if (a==16 && b==2) hetobi(n);
//	if (a==16 && b==8) hetooc(n);
//}
		












		
