// #include <stdio.h>
// #include <string.h>
//  struct employee{
//      int code;
//      float salary;
// char name[10];
//  };
 
// int main(){
//     struct employee e1;
//     e1.code=1;
//     e1.salary=98.23;
//     strcpy(e1.name,"anuj");
//     struct employee e2;
//     e2.code=2;
//     e2.salary=198.23;
//     strcpy(e2.name,"anu");
//         struct employee e3;
//     e3.code=3;
//     e3.salary=398.23;
//     strcpy(e3.name,"nuj");
//     printf("name,code and salary of e1 is %s ,%d, %f \n",e1.name, e1.code,e1.salary);
//         printf("name,code and salary of e2 is %s ,%d, %f\n",e2.name, e2.code,e2.salary);
//             printf("name,code and salary of e3 is %s ,%d, %f",e3.name, e3.code,e3.salary);
//     return 0;
// }



// #include <stdio.h>
//  typedef struct vector{
//      int x;
//      int y;
//  } vec;
 
// void sum(vec v1,vec v2){
//     int x=(v1.x+v2.x);
//         int y=(v1.y+v2.y);
//     printf("x dimension is %d and y dim is %d\n",x,y);    
// }

// int main(){
//     vec v1,v2;
//     v1.x=12;
//     v1.y=45;
       
//     printf("x dimension is %d and y dim is %d\n",v1.x,v1.y);
//      v2.x=13;
//     v2.y=45;
//     printf("x dimension is %d and y dim is %d\n",v2.x,v2.y);
//     sum(v1,v2);
    

//     return 0;
// }



// #include <stdio.h>
// typedef struct hello{
//     int a;
//     int b;

// } hi; 
 
// int main(){
//     hi h1,h2;
//     hi *ptr;
//     ptr=&h1;
//     (*ptr).a=5;//ptr->a=5
//     (*ptr).b=6;//ptr->b=6
//     // h1.a=2;
//     // h2.b=5;

//     // hi *ptq;
//     // ptq=ptr;
//     // ptq++;
//     //printf("value of a and b is %d,%d",(*ptr).a,(*ptr).b);
//     // printf("%d, %d,%u\n", h1.a,h2.b,ptq);
//     // printf("%d, %d,%u", h1.a,h2.b,&(ptr->b));
//     return 0;
// }

// #include <stdio.h>
//  typedef struct complex{
//      int real;
//      int complex;
//  } cmp;
//  void display(cmp cnums[5]){
//      for(int i=0;i<5;i++){
//          printf("complex number %d is :(%d+i%d) \n",i+1,cnums[i].real,cnums[i].complex);
//      }
//  }
 
// int main(){
//  cmp cnums[5];
// for(int i=0;i<5;i++){
//     printf("enter the real value of complex number %d: ",i+1);
//      scanf("%d",&cnums[i].real);
//      printf("enter the complex value of complex number %d: ",i+1);
//      scanf("%d",&cnums[i].complex);
//  } 
//  display(cnums);

//     return 0;
// }



// #include <stdio.h>
//  typedef struct date{
//      int date;
//      int month;
//      int year;
     
//  }dt;
//  void display(dt d1){
//      printf("date is : %d/%d/%d",d1.date,d1.month,d1.year);
//  }
//  void compare(dt d1,dt d2){
//      if(d1.year>d2.year){
//          printf("date d1 is greater");
//      }
//      else if(d1.year<d2.year){
//          printf("date d2 is greater");
//      }
//           else if(d1.year=d2.year){
//           if(d1.month>d2.month){
//               printf("date d1 is greater");
//           }
//           else if(d1.month<d2.month){
//               printf("date d2 is greater");
//           }
//                else if(d1.month=d2.month){
//             if(d1.date>d2.date){
//               printf("date d1 is greater");
//           }
//           else if(d1.date<d2.date){
//               printf("date d2 is greater");
//           }
//           else{
//               printf("both are equal");
//           }
//      }

         
//      }


//  }

 
// int main(){
//     dt d1={1, 12,2021};
    
//     dt d2={12, 12,2021};
//     compare(d1,d2);

//     return 0;
// } 