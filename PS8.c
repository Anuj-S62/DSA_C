// #include <stdio.h>

// int main()
// {
//     int arr[3][3];
//     printf("enter the values\n");
//     for (int a = 0; a < 3; a++)
//     {
//         for (int b = 0; b < 3; b++)
//         {
//             scanf("%d", &arr[a][b]);
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// #include <stdio.h>
 
 
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,0};
//     int *ptr=&arr[0];
//     int *t=&arr[2];
//     printf("address of first element is %u\n", ptr);
//     printf("address of second element is %u\n", t);
//     ptr++;
//     ptr++;
//      printf("address of second using ptr+2 element is %u\n", ptr);
//     return 0;
// }



// #include <stdio.h>
 
 
// int main(){
//     int arr[10];
//     int n;
//     printf("enter the value of number of which you want the table to print\n");
//     scanf("%d", &n);
//     for(int i=0;i<10;i++){
//         arr[i]=n*(i+1);
//     }
//        for(int i=0;i<10;i++){
//      printf("%d*%d=%d\n",n,(i+1),arr[i]);

//     }

//     return 0;
// }



// #include <stdio.h>
//  void pqr(int arr[],int n){
//   int revarr[n];
//   for(int i=0;i<n;i++){
//       revarr[i]=arr[(n-1)-i];
//   }
//   for(int j=0;j<n;j++){
//       arr[j]=revarr[j];
//   }
//  }
 
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,0};
//    pqr(arr,10); 
//     for(int i=0;i<10;i++){
//         printf(" %d",arr[i]);
//     }
//     return 0;
// }



// #include <stdio.h>
 
 
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     printf("%d",n);
//     return 0;
// }



//#include <stdio.h>
//  void cpi(int arr[],int n){
//      int f=0;
//      for(int i=0;i<n;i++){
//          if(arr[i]>0){
//              f=f+1;
//          }
//          else{
//              f=f+0;
//          }
//      }
//      printf("number of positive integers in array is %d\n",f);
//  }
 
// int main(){
//     int arr[]={-1,-5,2,4,6,1,8,0,5,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//    cpi(arr,n);
   
//     return 0;
// }



#include <stdio.h>
 
 
int main(){
    int arr[3][10];
    for(int i=0;i<1;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=2*(j+1);
        }
    }
        for(int i=1;i<2;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=7*(j+1);
        }
    }
        for(int i=2;i<3;i++){
        for(int j=0;j<10;j++){
            arr[i][j]=9*(j+1);
        }
    }
    for(int i=0;i<1;i++){
        for(int j=0;j<10;j++){
            printf("2*%d=%d\n",j+1,arr[i][j]);
        }
    }
        for(int i=1;i<2;i++){
        for(int j=0;j<10;j++){
            printf("7*%d=%d\n",j+1,arr[i][j]);
        }
    }
        for(int i=2;i<3;i++){
        for(int j=0;j<10;j++){
            printf("9*%d=%d\n",j+1,arr[i][j]);
        }
    }
    return 0;
}