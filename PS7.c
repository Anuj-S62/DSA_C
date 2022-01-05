// #include<stdio.h>
// int main(){
//     int marks[5];
//     printf("enter the marks of student 1: \n");
//     scanf("%d", &marks[0]);
//     printf("enter the marks of student 2: \n");
//     scanf("%d", &marks[1]);
//     printf("enter the marks of student 3: \n");
//     scanf("%d", &marks[2]);
//     printf("enter the marks of student 4: \n");
//     scanf("%d", &marks[3]);
//     printf("enter the marks of student 5: \n");
//     scanf("%d", &marks[4]);
// printf("entered marks are %d, %d, %d, %d, and %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
// return 0;
// }


//#include<stdio.h>
// int main(){
//     int marks[5];
//     for(int i=0;i<5;i++){
//            printf("enter the marks of student %d: \n", i+1);
//            scanf("%d", &marks[i]);

//     }
//     printf("entered marks are %d, %d, %d, %d, and %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
//     return 0;
// }


// #include<stdio.h>
// #define mango 10


// int main(){
//     int a=5;
//     int *ptr=&a;
//     int *prev=ptr;
//     printf("value of ptr is %u\n", ptr);
    
    

//     ptr++;
//     // a<b, a<b, a!=b,a==b  => true(1) or false (0)


//     // printf("value of ptr is %u\n", ptr);
//     // printf("value of ptr is %d", (int)ptr-(int)prev);
//     // printf("%d\",prev==ptr);
//     // printf("%d",mango);

// //     condition
// //       ^
// //       |
// //    (A>B)?('true condotion'):('false condition)
//     (ptr>=prev)?printf("ptr is greater"):printf("prev is greater");

//     return 0;
// }


#include <stdio.h>
 void printarray(int ptr[],int n){
    printf("address in function %u\n",&ptr[2]);
     for(int i=0;i<5;i++){
         printf("the value of element %d id %d\n",i+1,ptr[i]);
     }
ptr[2]=5678;
 }
 
int main(){
    int arr[]={1,2,3,4,5,6,7};
    printarray(arr,7);
    printf("address outside function %u\n",&arr[2]);
    printf("%d", arr[2]);
    return 0;
}