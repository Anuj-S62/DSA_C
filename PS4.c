

// //Q1:write a program to print first n natural number using do-while loop.

// #include<stdio.h>
// int main(){
//     int i=1;
//     int n;
//     printf("enter the value of n\n");
//     scanf("%d", &n);
// do{
//     printf("%d\n", i);
// i++;
// }while(i<=n);
// return 0;
// }

// //Q2:q1 using for loop
// #include<stdio.h>
// int main(){
//     int i=1;
//     int a;
//     printf("Enter the value of a\n");
//     scanf("%d", &a);
// for(i=1;i<=a;i++){
//     printf("The number is %d\n", i);
// }
// return 0;
//}

// //Q3: first n natural number in reverse order

// #include<stdio.h>
// int main(){
//     int i;
//     printf("enter the value of i\n");
//     scanf("%d", &i);
//     for(i;i;i--){
//         printf("tne number is %d\n", i);
//     }
//     return 0;
// }

// // practice
// #include<stdio.h>
// int main(){
//     int i=0;
//     int skip=5;
// while(i<10){
//     if(i!=skip){
//         printf("%d\n", i);
//     }else{
//         printf("100\n");
//     }
//     i++;
// }
//     return 0;
// }

// //Q4
// #include<stdio.h>
// int main(){
//     int n,a=1;
//     printf("enter the value of n\n");
//     scanf("%d", &n);
//     for(a;a<=10;a++){
//     printf("%d*%d is %d\n",n, a, n*a);
//     }
//     return 0;
// }

// //Q5
// #include<stdio.h>
// int main(){
//     int n,a=10;
//     printf("enter the value of n\n");
//     scanf("%d", &n);
//     // a-- and --a
//     // while (a--){
//     //  printf("%d*%d is %d\n",n, a+1, n*(a+1));
//     // }
//     while(a>=1){
//          printf("%d*%d is %d\n",n, a, n*(a));
//          a--;
//     }

//     // for(a;a>=1;a--){
//     //     // if(a<1){
//     //     //     break;
//     //     // }
//     // printf("%d*%d is %d\n",n, a, n*a);
//     // }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);

//     int prevsum=0;
//     int sum=0;
//     for (int ele = 1; ele <=n; ele++){
//         // prevsum=sum;
//         // int val=sum+ele;
//         // sum=val;
//         sum+=i;
//     }

//     printf("%d",sum);
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("sum = %d", sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      int n,i=0;
//     scanf("%d", &n);
//     int sum=0;
//     do{
//         sum=sum+i;
//         i++;
//     }while(i<=n);
//     printf("%d", sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=8,i=1;
// int sum=0;
// while(i<=10){
//     sum=sum+(a*i);
//     i++;
// }
// printf("%d", sum);
// return 0;
// }

//Q: factorial of a number using for loop

// #include<stdio.h>
// int main(){
//     int n;
//     int fact=1;
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//         }
//         printf("%d", fact);
// return 0;
// }

// // #include<stdio.h>
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a=8,i=1;
//     int n;
//     // printf("enter the number of times you want to print 8\n");
//     cout<<"enter the number of times you want to print 8\n";
//     // scanf("%d", &n);
//     cin>>n;
// while(i<=n){
//     printf("%d\n", a);
//     i++;
// }
// return 0;
// }

//

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int res = 0;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             res = 1;
//             break;
//         }
//     }
//     if (res == 1)
//     {
//         printf("NOT PRIME");
//     }
//     else
//     {
//         printf("PRIME");
//     }
//     return 0;
// }