// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     char c = 'k';
//     float p = 4.7;
//     int w = 8;
//     //%d for integer,%f for float ,%c for characters
//     //(\n is used for new line)
//     /*is used for large comment */
//     printf("%d\n", a);
//     printf("%f\n", p);
//     printf("%c\n", c);
//     printf("the sum of a and p is %f", a / p);
//     return 0;
// }
#include <stdio.h>
#include<math.h>
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     float a,b,c,d;
     scanf("%f",&a);
     scanf("%f",&c);
     scanf("%f",&b);
     scanf("%f",&d);
     float res=((a-b)*(a-b)+(c-d)*(c-d));
     printf("%0.4f\n",(pow(res,0.5)));
 
    return 0;
}
