// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     char ch;
//     char s[100];
//     char sen[100];
//     scanf("%c",&ch);
//     printf("%c\n",ch);
//     scanf("%s",s);
//     printf("%s\n",s);
//     gets(sen);

//     printf("\n");
//     puts(sen);
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int a,b;
//     float c,d;
//     scanf("%d",&a);

// 	scanf("%d",&b);
//     scanf("%f",&c);
//     scanf("%f",&d);
//     printf("%d %d\n",(a+b),(a-b));
//     printf("%f %f",(c+d),(c-d));
//     return 0;
// }

// #include <stdio.h>
// /*
// Add `int max_of_four(int a, int b, int c, int d)` here.
// */

// int main() {
//     // int a, b, c, d;
//     // scanf("%d %d %d %d", &a, &b, &c, &d);
//     // int ans = max_of_four(a, b, c, d);
//     // printf("%d", ans);

//     int a, b, c, d;

//     scanf("%d%d%d%d", &a, &b, &c, &d);
//     if (a >= b && a >= c && a >= d)
//     {
//         printf("%d", a);
//     }
//     else if (b >= a && b >= c && b >= d)
//     {
//         printf("%d", b);
//     }
//     else if (c >= b && c >= a && c >= d)
//     {
//         printf("%d", c);
//     }

//     else
//     {
//         printf("%d", d);
//     }

//     return 0;
// }

// #include<stdio.h>
// void update(int *a,int *b) {
//     // Complete this function
//     int d=(*a);
//     *a=(*a)+(*b);
//     *b=(d)-(*b);
//     if(*b>0){
//         *b=(*b);
//     }
//     else if(*b==0){
//         *b=(*b);
//     }
//     else{
//         (*b)=(*b)*(-1);
//     }
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;

//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// //Complete the following function.

// int find_nth_term(int n, int a, int b, int c) {
//   //Write your code here.
//   int nth=n;
//   if(n==1){
//       nth=a;
//       return nth;
//   }
//     if(n==2){
//         nth=b;
//       return nth;
//     }
//     if(n==3){
//         nth=c;
//       return nth;
//   }
//     else{
//     return find_nth_term(n-1, a, b, c)+find_nth_term(n-2, a, b, c) +find_nth_term(n-3, a, b, c);

//     }

//  }

// int main() {
//     int n, a, b, c;

//     scanf("%d %d %d %d", &n, &a, &b, &c);
//     int ans = find_nth_term(n, a, b, c);

//     printf("%d", ans);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int a, b;
//     scanf("%d\n%d", &a, &b);
//     int r=(b-a);
//   	// Complete the code.
//     for(int i=0;i<(r+1);i++){
//         if(a==1){
//         printf("one\n");
//         a++;
//         continue;
//         }
//     else if(a==2){
//       printf("two\n");
//         a++;
//       continue;
//     }
//         else if(a==3){
//       printf("three\n");
//         a++;
//       continue;
//     }
//         else if(a==4){
//       printf("four\n");
//         a++;
//          continue;
//     }
//         else if(a==5){
//       printf("five\n");
//         a++;
//          continue;
//     }

//         else if(a==6){
//       printf("six\n");
//         a++;
//          continue;
//     }
//         else if(a==7){
//       printf("seven\n");
//         a++;
//          continue;
//     }
//         else if(a==8){
//       printf("eight\n");
//         a++;
//          continue;
//     }
//         else if(a==9){
//       printf("nine\n");
//         a++;
//          continue;
//     }
//         else{
//             if(a%2==0){
//                 printf("even\n");
//                 a++;
//                  continue;
//             }
//             else{
//                 printf("odd\n");
//                 a++;
//                  continue;
//             }
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
// int n;
// scanf("%d",&n);
// if(n==1){
//   printf("one");
// }
// else if(n==2){
//   printf("two");
// }
// else if(n==3){
//   printf("three");
// }
// else if(n==4){
//   printf("four");
// }
// else if(n==5){
//   printf("five");
// }
// else if(n==6){
//   printf("six");
// }
// else if(n==7){
//   printf("seven");
// }
// else if(n==8){
//   printf("eight");
// }
// else if(n==9){
//   printf("nine");
// }
// else{
//   printf("Greater than 9");
// }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int n;
//     scanf("%d", &n);
//     int a,b,c,d,e,f;
//     a=n%10;
//     b=(n%100)/10;
//     c=(n%1000)/100;
//     d=(n%10000)/1000;
//     e=(n%100000)/10000;
//     f=(a+b+c+d+e);
//     printf("%d",f);

//     //Complete the code to calculate the sum of the five digits on n.
//     return 0;
// }

// #include <stdio.h>
// void pattern(int n){
//     for(int i=0;i<(2*n-1);i++){
//         printf("%d",n);
//         for(int j=0;j<())
//     }
// }

// int main(){
//     int n;
//     scanf("%d",&n);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// //Complete the following function.

// int marks_summation(int* marks, int number_of_students, char gender) {

//   int sum1=0,sum2=0;
//   for (int i = 0; i < number_of_students; i++){
//       if(i%2==0)sum1+=*(marks+i);
//       else sum2+=*(marks+i);
//   }
//   if(gender=='b')return sum1;
//   return sum2;
// }

// int main() {
//     int number_of_students;
//     char gender;
//     int sum;

//     scanf("%d", &number_of_students);
//     int *marks = (int *) malloc(number_of_students * sizeof (int));

//     for (int student = 0; student < number_of_students; student++) {
//         scanf("%d", (marks + student));
//     }

//     scanf(" %c", &gender);
//     sum = marks_summation(marks, number_of_students, gender);
//     printf("%d", sum);
//     free(marks);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #define MAX_HEIGHT 41

// struct box
// {
// 	/**
// 	* Define three fields of type int: length, width and height
// 	*/
//     int length;
//     int width;
//     int height;
// };

// typedef struct box box;

// int get_volume(box b) {
// 	/**
// 	* Return the volume of the box
// 	*/return (b.length)*(b.height)*(b.width);
// }

// int is_lower_than_max_height(box b) {
// 	/**
// 	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
// 	*/if(b.height<41){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int main()
// {
// 	int n;
// 	scanf("%d", &n);
// 	box *boxes = malloc(n * sizeof(box));
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
// 	}
// 	for (int i = 0; i < n; i++) {
// 		if (is_lower_than_max_height(boxes[i])) {
// 			printf("%d\n", get_volume(boxes[i]));
// 		}
// 	}
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int num, *arr, i;
//     scanf("%d", &num);
//     arr = (int*) malloc(num * sizeof(int));
//     for(i = 0; i < num; i++) {
//         scanf("%d", arr + i);
//     }
//     int *arr2;
//     arr2=arr;
//     for(int i=0;i<num;i++){
//        *(arr+i)=*(arr2+(num-1-i));
//     }
//     // printf("%d",*(arr2+(num-1)));

//     /* Write the logic to reverse the array. */

//     for(i = 0; i < num; i++)
//        printf("%d",*(arr+i));
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//     int n,sum=0;
//     scanf("%d",&n);
//     int *arr = (int*)malloc(n * sizeof(int));
//     for(int i=0;i<n;i++){
//         scanf("%d",(arr+i));
//     }
//     for(int i=0;i<n;i++){
//         sum=sum+(*(arr+i));
//     }
//     printf("%d",sum);
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     char *s;
//     s = malloc(1024 * sizeof(char));
//     scanf("%[^\n]", s);
//     s = realloc(s, strlen(s) + 1);

//     //Write your logic to print the tokens of the sentence here.
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main(){
//     char str[1000];
//     gets(str);
//     char *ptr;
//     ptr=str;
//     char *ptr2;
//     ptr2=ptr;
//     char a='0';
//     int b=0;
//     for(int i=0;i<10;i++){
//         for(int j=0;j<strlen(str);j++){
//             if(a==(*ptr2)){
//                 b++;
//                 ptr2++;
//             }
//             else{
//                 b=b;
//                 ptr2++;
//             }
//          }
//           printf("%d ",b);
//          ptr2=ptr;
//         b=0;
//         a++;

//     }
//     // for(int i=0;i<strlen(str);i++){
//     //     printf("%c",*ptr2);
//     //     ptr2++;
//     // }
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// struct triangle
// {
// 	int a;
// 	int b;
// 	int c;
// };

// typedef struct triangle triangle;
// void sort_by_area(triangle* tr, int n) {
// 	/**
// 	* Sort an array a of the length n
// 	*/
//     int arr[100];
//     for(int i=0;i<n;i++){
//         arr[i]=(tr[i].a)*(tr[i].b)*(tr[i].c);
//     }

// }

// int main()
// {
// 	int n;
// 	scanf("%d", &n);
// 	triangle *tr = malloc(n * sizeof(triangle));
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
// 	}
// 	sort_by_area(tr, n);
// 	for (int i = 0; i < n; i++) {
// 		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
// 	}
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     char *s;
//     s = malloc(1024 * sizeof(char));
//     scanf("%[^\n]", s);
//     s = realloc(s, strlen(s) + 1);
// 	/*
// 	this is c
// 	          |
// 	this
// 	is
// 	c
// 	*/
//     while(*s!='\0'){
// 	while(*s!=' '&&*s!='\0'){
// 		printf("%c",*s);
// 		s++;
// 	}
// 	if(*s=='\0'){
//       break;
// 	}
// 	  s++;
// 	printf("\n");
// 	}
//     //Write your logic to print the tokens of the sentence here.
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};
typedef struct triangle triangle;

typedef struct triCom
{
	triangle tr;
	float area;
} triCom;

void printArr(float arr[],int n){
	for (int i = 0; i < n; i++)
	{
		printf("%f ",arr[i]);
	}
	printf("\n");
	
}

float area(int a, int b, int c)
{
	int s = (a + b + c) / 2;
	float ar = pow((s * (s - a) * (s - b) * (s - c)), 0.5);

	return ar;
}

int maxidx(float arr[], int n)
{
	int idx = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[idx]< arr[i])
		{
			idx = i;
		}
	}
	return idx;
}

void swap(float *high, float *idx)
{
	float c;
	c = *high;
	*high = *idx;
	*idx = c;
}

void sort_by_area(triangle *tr, int n)
{

	float arr[n];
	// triCom arr[n];

	for (int i = 0; i < n; i++)
	{
		// arr[i].tr = tr[i];
		arr[i] = area(tr[i].a, tr[i].b, tr[i].c);
	}
	printArr(arr,n);
	int length = sizeof(arr) / sizeof(arr[0]);
	int high = (length - 1);
	int low = 0;
	while (low < high)
	{
		int idx = maxidx(arr, high+1);
		swap(&arr[high], &arr[idx]);
		high--;
	}
	printArr(arr,n);
	// for (int i = 0; i < n; i++)
	// {
	// 	tr[i] = arr[i].tr;
	// }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}