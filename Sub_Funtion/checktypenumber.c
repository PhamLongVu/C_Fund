#include<stdio.h>

int CheckSNT(int n)
{
	int i;
	if(n<2) return 0;
	if(n==2) return 1;
	for(i=2; i<n; i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int Fibo(int n)
{
	if(n==1 || n == 2)
		return 1;
	return CheckFibo(n-1) + CheckFibo(n-2);
}

int CheckFibo(int n)
{
	int n;
	for(i = 0; i<= n; i++)
		if(Fibo(i) == m)
			return 1;
	return 0;
}

int CountDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        ++count;
    }
    return count;
}
 

bool IsArmstrong(int n)
{
    int numDigit = CountDigit(n);
    int tmp = n, sum = 0, last;
    while (tmp > 0)
    {
        last = tmp % 10; // l?y ch? s? cu?i cùng
        tmp /= 10;       // b? ch? s? cu?i cùng
        sum += pow(last, numDigit);
    }
    if (sum == n)
        return true;
    return false;
}
 
int main()
{
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
 
    if (IsArmstrong(n) == true)
    {
        printf("\n%d la so armstrong!", n);
    }else{
        printf("\n%d khong la so armstrong!", n);
    }

int UCLN(int n, int m)
{
	while(n != 0 && m != 0)
	{
		if (n > m)
			n = n - m;
		else
			m = m - n;
	}
	if(n==0)
		return m;
	else
		return n;
}
int BCNN(int n, int m)
{
	return n*m/UCLN(n, m);
}

void Themphantu(int a[], int *n, int Vitrithem, int Phantuthem)
{
	int i;
	*n = *n + 1;
	for(i = *n-1; i>Vitrithem; i--)
		a[i] = a[i-1];
	a[Vitrithem] = Phantuthem;
}


// xoa phan tu
int Xoaphantu(int a[], int *n, int Vitrixoa)
{
	int i;
	for(i = Vitrixoa; i< *n; i++)
		a[i] = a[i+1];
	*n = *n-1;
}

				
int main()
{
	int n, m;
	scanf("%d", &n);
		scanf("%d", &m);
	int a= BCNN(n, m);
	printf("%d", a);

}
