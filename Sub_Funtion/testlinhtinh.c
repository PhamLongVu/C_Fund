#include<stdio.h>
#include<string.h>
#include<math.h>


//int main()
//{
//	int a[100];
//	int i, n=3, j, tg;
//	for(i=0; i<n; i++)
//		scanf("%d", &a[i]);
//	for ( i = 0; i < n-1; i++)	
//		for (j = 0; j < n-i-1; j++)
//			if (a[j] > a[j+1])
//			{
//				tg = a[j];
//				a[j] = a[j+1];
//				a[j+1] = tg;
//			}
//	
//	for(i=0; i<n; i++)
//		printf("%d ", a[i]);		
//}

//ex2

//int main()
//{
//	int n, i;
//	float s=1;
//	scanf("%d", &n);
//	if(n%2!=0)
//		n--;
//	for(i = 1; i<=n; i++)
//		if(i%2==0)
//			s = s + 1.0/i;
//	printf("%0.4f", s);			
//}


//ex3
//int main()
//{
//	int m, n, i=1;
//	int sum = 0;
//	scanf("%d", &m);
//	
//	while(sum<m)
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("%d", i-1);
//
//}

//ex4

//int main()
//{
//	int a, b , c;
//	scanf("%d%d%d", &a, &b, &c);
//	float p = (a+b+c)/2;
//	float s = sqrt(p*(p-a)*(p-b)*(p-c));
//	if(abs(b-c) >= a && a >= b+c)
//		printf("Area = 0");
//	else
//		printf("Area= %0.2f", s);
//			
//}

//ex5
//int main()
//{
//	int i = 3;
//	double x, c, temp=1, sum = 0;
//	scanf("%lf", &x);
//	scanf("%lf", &c);
//	temp = temp * x;
//	sum = sum + x;
//	while(fabs(temp)>=c)
//	{
//		temp = -temp*x*x/(i*(i-1));
//		sum = sum + temp;
//		i = i+2;
//	}
//	printf("%lf", sum);
//}

//ex5b

//int main()
//{
//	int i = 3;
//	int n;
//	double x, temp=1, sum = 0;
//	scanf("%lf", &x);
//	scanf("%d", &n);
//	temp = temp * x;
//	sum = sum + x;
//	for(i=3; i<= 2*n+1; i=i+2)
//	{
//		temp = -temp*x*x/(i*(i-1));
//		sum = sum + temp;
//	}
//	printf("%lf", sum);
//}



//------------------------------------------------------------------------------------------------------------//
//ex1

int main()
{
	int s, m, h;
	scanf("%d", &s);
	h = s/3600;
	s = s%3600;
	m = s/60;
	s = s% 60;
	printf("%d %d %d", h , m, s);
}










