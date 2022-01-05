// //Q1:
// #include<stdio.h>
// void GoodMorning();
// void GoodAfternoon();
// void GoodNight();
// int main(){
//     GoodMorning();
//  GoodAfternoon();
//  GoodNight();
//   GoodMorning();
//  return 0;
//  }

// void GoodMorning(){
//     printf("good morning\n");

// }
// void GoodAfternoon(){
//     printf("good afternon\n");
// }
// void GoodNight(){
//     printf("good night\n");
// }

// //Q2:
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float side;
//     printf("enter the side of \n");
//     scanf("%f", &side);
//     printf("area is %0.02f", pow(side,2));//pow( , ) is double
//     return 0;
// }

////Q3:
// #include<stdio.h>
// int AVG(int a,int b,int c);
// int main(){
// int a,b,c,d;
// printf("enter a,b,c\n");
// scanf("%d%d%d", &a,&b,&c);
// d=AVG(a,b,c);
// printf("average is %d\n", d);
// return 0;
// }

// int AVG(int a,int b,int c){
//     int p;
//     p=(a+b+c)/3;
//     return p;
// }


// //Q4:
// #include<stdio.h>
// float CTF(int a);
// int main(){
// float a,d;
// printf("enter temperature in farenheit\n");
// scanf("%f", &a);
// d=CTF(a);
// printf("temperature in celceius is %f\n", d);
// return 0;
// }

// float CTF(int a){
//     float p;
//     p=5*(a-32)/9;
//     return p;
// }
    
// //Q5:
//     #include <stdio.h>
//     float frc(float a); 
     
//     int main(){
//     float m,d;
//     printf("enter mass of body\n");
//     scanf("%f", &m);
//     d=frc(m);
//     printf("force on body is\n %f",d);

//         return 0;
//     }

//     float frc(float a){
//         float p;
//         p=9.8*a;
//         return p;
//     }



// //Q6:
// #include <stdio.h>
//  int NT(int);
 
// int main(){
//     int testcase=10;
//     int a,n;
//     while (testcase--){
//         printf("enter the value of n\n");
//         scanf("%d",&n);
//         a=NT(n);
//         printf("%d", a);

//     }
//         return 0;
    
// }



// int NT(int n){
    
//     if(n==1){
//         return 0;
//     }
//     else if(n==2){
//         return 1;
//     }
//     else{
//         return NT(n-1)+NT(n-2);
//         }
// }



// //Q7:
// #include <stdio.h>
 
 
// int main(){
//     int a=10;
//     printf("%d,%d,%d\n", a,++a,a++);
//     return 0;
// }



// // Q8;
// #include <stdio.h>
//  int sum(int);
 
// int main(){
//     int n,a;
//     printf("enter the value of n\n");
//     scanf("%d", &n);
//     a=sum(n);
//     printf("%d", a);
//     return 0;
// }

// int sum(int n){
//   if(n==1){
//       return 1;
//   }
//   else{
//       return n+sum(n-1);
//   }

// }


// //Q8:
// #include <stdio.h>
//  void pattern(int);
 
// int main(){
//     int n;
//     printf("enter the value of n\n");
//     scanf("%d", &n);
//    pattern(n);
    
//     return 0;
// }


// void pattern(int n){
//     for (int i = 1; i <=n; i++){
//         for(int a=1;a<=i;a++){
//             int c='*';
//             printf("%c",c);
          
//         }
//           printf("\n");
        
//     }
    
    
// }

