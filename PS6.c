// #include<stdio.h>
// int main(){
//     int i=3;
//     int *j=&i;// 'int *' is a data type for pointer
//     printf("value of i is %d\n",i);
//     printf("address of i is %u\n",&i);
//     printf("address of i is %u\n",j);
//     printf("value of i is %d\n",*(&i) );//'*'is a operator used for drefrence an address
//      return 0;
// }


// //q2:
// #include <stdio.h>
//  void address(int);
 
// int main(){
//     int i=6;
//     printf("%u\n",&i);
// address(6);
// // printf("%d",t);
//     return 0;
// }

// void address(int a){
//     printf("%u",&a);
// }



// #include <stdio.h>
 
//  void BGMI(int *a);
// int main(){
//     int a=5;
//     BGMI(&a);
//     printf ("%d",a);
//     return 0;
// }

// void BGMI(int *a){
//     *a=*a*10;

// }



// #include <stdio.h>
// void abc(float *a,float *b,float *sum,float *avg);

// int main(){
//     float a=5,b=7,sum,avg;
//     abc(&a,&b,&sum,&avg);
//     printf("%f\n", sum);
//     printf("%f",avg);
//     return 0;
// }

//  void abc(float *a,float *b,float *sum,float *avg){
 
//     *sum=*a+*b;
//     *avg=(*a+*b)/2;
     
// } 



// #include <stdio.h>

// // #include<iostream>
// // using namespace std;

// void abc(float *a,float *b,float *sum,float *avg){
 
//     *sum=*a+*b;
//     *avg=(*a+*b)/2;
     
// } 

// int main(){
//     float a=5,b=7,sum,avg;
//     abc(&a,&b,&sum,&avg);
//     printf("%f\n", sum);
//     cout<<"hello hi"<<a<<" "<<8<<" "<<8.0<<"\n"<<endl;
//     printf("%f",avg);
//     return 0;
// }


// #include <stdio.h>
 
 
// int main(){
//     int a=4;
//     int *b=&a;
//     int **c=&b;
//     printf("%d",**(c));
//     return 0;
// }
 


//  #include <stdio.h>
//   int change(int a){
//       return a=a*10;
//   }
  
//  int main(){
//      int a=5;
//      a=change(a);
//      printf("%d",a);
//      return 0;
//  }