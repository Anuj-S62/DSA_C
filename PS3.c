// //Q1
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the number \n");
//     scanf("%d", &a);

//      if(a<=100 &&a>=90){
//         printf("A\n");
//      }
//          if(a<90 &&a>=80){
//         printf("B\n");
//         }
//         if(a<80 &&a>=70){
//         printf("C\n");
//         }
//         if(a<70 &&a>=60){
//         printf("D\n");
//         }
//         if(a<60){
//         printf("F\n");
//         }
//     return 0;
// }

////Q2
// #include <stdio.h>
// int main()
// {
//     int a = 15;
//     if (a == 11)
//     {
//         printf("i m 11");
//     }
//     else
//     {
//        printf( "i m not 11");
//     }
//     return 0;
// }

//Q3
// #include<stdio.h>
// int main(){
//     float a,b,c;
//     printf("Enter the marks in a,b and c");
//     scanf("%f%f%f", &a, &b, &c);
//     float k=((a+b+c)/3);
//     // printf("%f", k );
//     if(a>=33 &&b>=33 &&c>=33 &&k>=40){
//         printf("PASS");
//     }
//     else{
//         printf("FAIL");
//     }
//     return 0;
//}

// //Q4
// #include<stdio.h>
// int main(){
//     float a;
//      char c='%';
//     printf("enter your income in lakhs");
//     scanf("%f", &a);
//     if(a<2.5){
//         printf("0%c",c);
//     }
//     if(a>=2.5 &&a<5.0){
//         printf("5%c",c);
//     }
//     if(a>=5.0 &&a<=10.0)
// {
//     printf("20%c",c);
// }
// if(a>10.0){

//     printf("30%c",c);
// }
//return 0;
//}

// //Q5
// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter year");
//     scanf("%d", &year);
//     float k=((year)%4);
// if(k==0){
//     printf("year is leap year");
// }
// else{
//     printf("year is not a leap year");
// }
// return 0;
// }

//Q6
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter num\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a >= b && a >= c && a >= d)
    {
        printf("%d is greatest", a);
    }
    else if (b >= a && b >= c && b >= d)
    {
        printf("%d is greatest", b);
    }
    else if (c >= b && c >= a && c >= d)
    {
        printf("%d is greatest", c);
    }
    
    else
    {
        printf("%d is greatest", d);
    }
    return 0;
}

// #include<stdio.h>
 
 
// int main(){
//     int a,b,c,d;
//     printf("enter num\n");
//     scanf("%d%d%d%d", &a, &b, &c, &d);

//     int max_elem=-100000212;

//     if(a>b)max_elem=a;
//     else max_elem=b;
//     if(max_elem<c)max_elem=c;
//     if(max_elem<d)max_elem=d;


//     printf("max element is %d\n",max_elem);

    
//     return 0;
// }