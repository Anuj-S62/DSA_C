// #include <stdio.h>
//  #include<stdlib.h>
 
// int main(){
//     int *ptr;
//     ptr=(int *)malloc(6*sizeof(int));
//     for(int i=0;i<6;i++){
//         printf("enter the value of %d element\n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//         for(int i=0;i<6;i++){
//         printf("the value of %d element is %d\n",i+1,ptr[i]);
    
//     }
//     free(ptr);
//     return 0;
// }


// #include <stdio.h>
//  #include<stdlib.h>
 
// int main(){
//     int *ptr;
//     ptr=(int *)calloc(7,sizeof(int));
//     for(int i=0;i<7;i++){
//         printf("enter the value of %d element\n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//         for(int i=0;i<7;i++){
//         printf("the value of %d element is %d\n",i+1,ptr[i]);
    
//     }
//     ptr=realloc(ptr,10*sizeof(int));

//         for(int i=0;i<10;i++){
//         printf("enter the value of %d element\n",i+1);
//         scanf("%d",&ptr[i]);
//     }
//         for(int i=0;i<10;i++){
//         printf("the value of %d element is %d\n",i+1,ptr[i]);
//         free(ptr);
//         }
//     return 0;
// }


#include <stdio.h>
 #include<stdlib.h>
 
int main(){
    int *ptr;
    ptr=(int *)calloc(10,sizeof(int));
    for(int i=0;i<10;i++){
     ptr[i]=7*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("7 * %d = %d\n",i+1,ptr[i]);
}
    ptr=realloc(ptr,15*sizeof(int));
        for(int i=0;i<15;i++){
     ptr[i]=7*(i+1);
    }
    for(int i=0;i<15;i++){
        printf("7 * %d = %d\n",i+1,ptr[i]);
}   
    return 0;
}