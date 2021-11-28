#include<stdio.h>
#include<string.h>

//ex1

//int main()
//{
//	int n;
//	int t;
//	scanf("%d", &n);
//	while(n!=0)
//	{
//		t = n % 10;
//		n = n / 10;
//	}
//	printf("%d", t);
//}

//ex2

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	int count=0;
//	for(i=1;i<=n; i++)
//	{
//		if(n%i==0)
//			count++;
//	}
//	printf("%d", count*2);
//}

//ex3


//int main()
//{
//	char s1[100], s2[20];
//	int i, j = 0, n, l, count=0;
//	gets(s1);
//	gets(s2);
//	n = strlen(s1);
//	
//	while(s1[i]!='\0')
//	{
//		if(s1[i] == s2[j])
//		{	
//			j++;
//			i++;
//			if(s2[j] == '\0')
//			{
//				count++;
//				j=0;
//			}
//		}
//		else
//		{
//			i++;
//			j=0;
//		}
//	}
//	printf("%d", count);
//}

//ex4

//int main()
//{
//	int n, i, j, k;
//	scanf("%d", &n);
//	
//	for(i=1; i<=n; i++)
//	{
//		for(j=1; j<=n; j++)
//		{
//			if(j==i || j == n-i+1)
//				printf("*");
//			else
//				printf(" ");	
//		}
//		printf("\n");
//	}
//}

// ex5

//int main()
//{
//	int n;
//	float s = 1;
//	int t=1, i=1;
//	scanf("%d", &n);
//	while(i != n)
//	{
//		t = t + i+1;
//		s = s + 1.0/(float)t;
//		i++;
//	}
//	printf("%0.3f", s);
//	
//}








