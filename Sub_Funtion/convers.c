//Bai1DetoBI
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	float n, a;
//	int b, i, sum= 0, p = 0;
//	printf("Nhap n: ");
//	scanf("%f", &n);
//	b = n;
//	a = n - b;
//			
//	while(b > 0)
//	{
//		i = b%2;
//		sum += i * pow(10, p);
//		p++;	
//		b = b/2;
//	}
//		printf("%d", sum);	
//}
	
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


//Bai3////convert hexadecimal to decimal

//#include<stdio.h>
//#include<string.h>
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

//DECtoHEX

//#include<stdio.h>
//#include<math.h>
//int arr[100];
//void dectohex(long int n) {
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
}

//main()
//{
//	long int n;
//	printf ("n= ");	scanf("%d",&n);
//	dectohex(n);
//}


//DecToOc

//#include <stdio.h>
//#include <math.h>
// 
//int DecToOct(int number){
//    int p = 0;
//    int octNumber = 0;
//    while(number > 0){
//        octNumber += (number % 8) * pow(10, p);
//        p++;
//        number /= 8;
//    }
//    return octNumber;
//}
// 
// 
//int main(){
//    int decimalNumber;
//    printf("\nNhap so o co so 10: ");
//    scanf("%d", &decimalNumber);
// 
//    printf("\nOct = %d", DecToOct(decimalNumber));
//}


//OctoDec

//#include <stdio.h>
//#include <math.h>
// 
//int Oct2Dec(int number){
//    int p = 0;
//    int decNumber = 0;
//    while(number > 0){
//        decNumber += (number % 10) * pow(8, p);
//        p++;
//        number /= 10;
//    }
//    return decNumber;
//}
// 
//int main(){
//    int octNumber;
//    printf("\nNhap so o co so 8: ");
//    scanf("%d", &octNumber);
// 
//    printf("\nDec = %d", Oct2Dec(octNumber));
//}
 
		












		
