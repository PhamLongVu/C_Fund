#include<stdio.h>

void hinha(int n)
{
	int i, j;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
			printf("* ");
		printf("\n");
	}
}

void hinhb(int n)
{
	int i, j;
	for(i=n; i>=1; i--)
	{
		for(j=1; j<=i; j++)
			printf("* ");
		printf("\n");
	}
}

void hinhc(int n)
{
	int i, j, k;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
			if(j>1)
				printf("  ");
		{
			for(k = 1; k<=n-i+1; k++)
				printf("* ");
			printf("\n");
		}
			
	}
		
}


void hinhd(int n)
{
	int i, j, k;
	for(i = 1; i<= n; i++)
	{
		for(j = 1; j<=n-i; j++)
			printf("  ");
		{
			for(k = 1; k<=i;k++)
				printf("* ");
			printf("\n");
		}
	}
				
}

void hinhvuongdac(int n)
{
	int i, j;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
			printf("* ");
		printf("\n");
	}
}

void hinhe(int n)
{
	int i, j;
	for(i = 1; i <= n; i++)  
	{
        for(j = 1 ; j <= n; j++)
		{
            if(i == 1 || j == 1 || i == n || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }	
}

void hinhf(int n)
{
	int i, j;
	for(i = 1; i<=n; i++)
	{
		for(j = 1; j<=n ; j++)
		{
			if(i == 1 || i == n || i == j)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	
}

void hinhg(int n)
{
	int i, j;
	for(i = 1; i<=n; i++)
	{
		for(j = 1; j<=n; j++)	
		{
			if(i == 1 || i == n || j == n - i +1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	
}

void hinhh(int n)
{
	int i, j;
	for(i = 1; i<=n; i++)
	{
		for(j = 1; j<=n; j++)	
		{
			if(i == 1 || i == n || j == n - i +1 || j == i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	
	
}

void hinhi(int n)
{
	int i, j;
	for(i = 1; i<=n; i++)
	{
		for(j = 1; j<=n; j++)	
		{
			if(i == 1 || i == n || j == n - i +1 || j == i || j==1 || j == n)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	
	
}

void hinhk(int n)
{
	int i, m, j;
	for (i=1; i<=n; i++)
	{
		for (m=1; m<=n-i; m++)
			printf("  ");	
		for (j=1; j<=2*i-1; j++)
			printf("* ");
		printf("\n");	
	}
}


void hinhj(int n)
{
	int i, j, m;
	for (i=1; i<=n; i++)
	{
		for (m=1; m<=i; m++)
			if(m >1)
				printf("  ");	
		for (j=1; j<=2*n-2*i+1; j++)
			printf("* ");
		printf("\n");	
	}
}

void hinhl(int n)
{
	hinhk(n+1);
	int i, j, m;
	for (i=1; i<=n; i++)
	{
		for (m=1; m<=i; m++)
				printf("  ");	
		for (j=1; j<=2*n-2*i+1; j++)
			printf("* ");
		printf("\n");	
	}
	
	
}

void hinhm(int n)
{
	int i, j, k =1;
	for(i = 1; i <= n; i++)
	{
      for(j=1;j <= i; j++)
        	printf("%d ", j);
      printf("\n");
   }
}

void hinhn(int n)
{
	int i, j, m;
	for(i=1; i<=n; i++)
	{	
		for(m = 1; m<=i-1; m++)
				printf("  ");
		for(j=1; j<=n-i+1; j++)
			printf("%d ", j);
		printf("\n");
	}
	
}

void hinho(int n)
{
	int i, j;
	for(i=1; i<=n; i++)
	{
		for(j=n; j>=1; j--)
			if(j<=i)
				printf("%d ", j);
			else
				printf("  ");
		printf("\n");
	}
	
}

void hinhp(int n)
{
	int i, j;
	for(i=1; i<=n; i++)
	{
		for(j=n-i+1; j>=1; j--)
			printf("%d ", j);
		printf("\n");
	}
	
}

void hinhq(int n)
{
	int i, j, k, m;
	for (i=1; i<=n; i++)
	{
		for(k=1; k<=n-i; k++)
			printf("  ");
		for(j=1; j<=i; j++)
			printf("%d ", j);
		for(m= j-2; m>=1; m--)
			printf("%d ", m);
			
		printf("\n");
	}
}

void hinhr(int n)
{
	int i, j, k, m;
	for(i = 1; i<=n; i++)
	{
		for(m = 1; m<=i-1; m++)
			printf("  ");
		for(j=1; j<=n-i+1; j++)
			printf("%d ", j);
		for(k = j-2; k>=1; k--)
			printf("%d ", k);
		printf("\n");
	}
}

void hinhs(int n)
{
	int i, j, k, m;
	for(i=1; i<=n; i++)
	{
		for(j = 1; j<=i; j++)
			printf("%d ", j);
		for(m=1; m<=2*n-2*i-1; m++)	
			printf("  ");
			for(k=i; k>=1; k--)
				if(k != n)
					printf("%d ", k);
		printf("\n");
		
	}
}

void hinht(int n)
{
	int i, j, k, m;
	for(i=1; i<=n; i++)
	{
		for(j = 1; j<=n-i+1; j++)
			printf("%d ", j);
		for(k=1; k<=2*i-3; k++)
			printf("  ");
		for(m=n-i+1; m>=1; m--)
			if(m != n)
				printf("%d ", m);
		printf("\n");
	}

}

void hinhu (int n)
{
	int i, j, count = 0, count1 = 0, k = 0;
	for(i = 1; i <= n; ++i)
	{
		for(j = 1; j <= n-i; ++j)
	{
		printf("  ");
		++count;
	}	

	while(k != 2*i-1)
	{
		if (count <= n-1)
	{
		printf("%d ", i+k);
		++count;
	}
	else
	{	
		++count1;
		printf("%d ", (i+k-2*count1));
	}
		++k;
	}
		count1 = count = k = 0;

		printf("\n");
	}
}

void Powerof2triangle(int n)
{
	
}

void PascalTriangle1(int n)
{
	int rows, coef = 1, space, i, j;

for(i=0; i<rows; i++)
{
for(space=1; space <= rows-i; space++)
printf("  ");

for(j=0; j <= i; j++)
{
if (j==0 || i==0)
coef = 1;
else
coef = coef*(i-j+1)/j;

printf("%d ", coef);
}
printf("\n\n");
}
}

void PascalTriangle2(int n)
{
	
}	
main()
{
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	hinha(n);
	printf("=============================================\n");
	hinhb(n);
	printf("=============================================\n");
	hinhc(n);
	printf("=============================================\n");
	hinhd(n);
	printf("=============================================\n");
	hinhvuongdac(n);
	printf("=============================================\n");
	hinhe(n);
	printf("=============================================\n");
	hinhf(n);
	printf("=============================================\n");
	hinhg(n);
	printf("=============================================\n");
	hinhh(n);
	printf("=============================================\n");
	hinhi(n);
	printf("=============================================\n");
	hinhk(n);
	printf("=============================================\n");
	hinhj(n);
	printf("=============================================\n");
	hinhl(n);
	printf("=============================================\n");
	hinhm(n);
	printf("=============================================\n");
	hinhn(n);
	printf("=============================================\n");
	hinho(n);
	printf("=============================================\n");
	hinhp(n);
	printf("=============================================\n");
	hinhq(n);
	printf("=============================================\n");
	hinhr(n);
	printf("=============================================\n");
	hinhs(n);
	printf("=============================================\n");
	hinht(n);
	printf("=============================================\n");
	hinhu(n);
	printf("=============================================\n");
	PascalTriangle2(n);
	printf("=============================================\n");
	PascalTriangle1(n);	
	printf("=============================================\n");
	PascalTriangle2(n);	
	
}
