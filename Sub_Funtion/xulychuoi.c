//Ham doi xung

//#include <stdio.h>
//#include <string.h>
//char doixung(char s1[100])
//{
//    int i;
//    for (i = 0; i < strlen(s1) / 2; i++)
//    {
//        if (s1[i] != s1[strlen(s1) - 1 - i])
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    char s1[100];
//    printf("xin moi ban nhap chuoi\n");
//    gets(s1);
//    if (doixung(s1) == 0)
//    {
//        printf("chuoi vua nhap khong phai chuoi doi xung\n");
//    }
//    if (doixung(s1) == 1)
//    {
//        printf("chuoi vua nhap la chuoi doi xung\n");
//    }
//}


// Xu ly chuoi viet hoa viet thuong

//#include <stdio.h>
//#include <string.h>
// 
//void to_lower(char s[])
//{
//    for (int i = 0; s[i] != '\0'; i++)
//    {
//        if (s[i] >= 'A' && s[i] <= 'Z')
//        {
//            s[i] = s[i] + 32;
//        }
//    }
//}
// 
//void to_upper(char s[])
//{
//    for (int i = 0; s[i] != '\0'; i++)
//    {
//        if (s[i] >= 'a' && s[i] <= 'z')
//        {
//            s[i] = s[i] - 32;
//        }
//    }
//}
// 
//void to_title(char str[])
//{
//    for (int i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
//        if (str[i - 1] == ' ' || i == 0)
//        {
//            if (str[i] >= 'a' && str[i] <= 'z')
//                str[i] = str[i] - 32;
//        }
//    }
//}
// 
//int main()
//{
//    char s[100];
//    int i;
// 
//    printf("\nEnter a string : ");
//    gets(s);
//    to_lower(s);
//    printf("\nString in Lowercase = %s", s);
//    to_upper(s);
//    printf("\nString in Uppercase = %s", s);
//    to_title(s);
//    printf("\nString in Titlecase = %s", s);
//    return 0;
//}


//Nhapxuat mang 2 chieu

//#include <stdio.h>
//#include <string.h>
// 
//int main(){
//    char arr[1000][50]; 
//    int n;
//    do{
//        printf("\nNhap so luong SV: ");
//        scanf("%d", &n);
//    }while(n < 1);
// 
//    for(int i = 0; i < n; i++){
//        printf("Ten SV thu %d: ", i+1);
//        fflush(stdin);
//        gets(arr[i]);
//    }
//
//    for(int i = 0; i < n; i++){
//        printf("\nTen SV thu %d: %s", i+1, arr[i]);
//    }
//}


