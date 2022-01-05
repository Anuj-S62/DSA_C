// #include <stdio.h>
// #include<string.h> 
 
// int main(){
//     char str[34];
//     printf("enter the value of string \n");
//     scanf("%s",str);
//     printf("string is %s",str);
//     int a=strlen(str);
//     printf("%d",a);
//     return 0;
// }

// #include <stdio.h>
//  void strln(char str[]){
//      int c=sizeof(str)/sizeof(str[0]);
//      printf("length of string is %d",c);

//  }
 
// int main(){
//     char str[]="anuj";
//     strln(str);

    
//     return 0;
// }


// #include <stdio.h>
//  void slice(char str[],int n,int m){
//      int i=0;
//     //  qwertyanu
//     //        i
//     //   wert
//     //  012345678
//    for(i=0;i<m;i++){
//        str[i]=str[i+n];
//     //    wert
//    }
// str[i]='\0';   

//  }
 
// int main(){
//     char str[]="qwertyanuj";
//     slice(str,1,4);
//     printf("%s",str);
//     return 0;
// }


// #include <stdio.h>
//  void strcp(char target[],char source[],int n){
//      int i=0;
//      for(i=0;i<n;i++){
//          target[i]=source[i];
//      }
//      source[i]='\0';
//  }
 
// int main(){
//     char source[]="anujzkjxxkl";
//     char target[50];
//     strcp(target,source,11);
//     printf("%s",target);
//     return 0;
// }


// #include <stdio.h>
//  void encry(char str[]){
//      char *ptr=str;
//      while(*ptr!='\0'){
//          *ptr=*ptr+1;
//          ptr++;
//      }
//  }
 
// int main(){
//     char str[]="Hello friends";
//     encry(str);
//     printf("%s",str);
//     return 0;
// }


// #include <stdio.h>
//  void decrypt(char str[]){
//      char *ptr=str;
//      while(*ptr!='\0'){
//          *ptr=*ptr-1;
//          ptr++;
//      }
//  }
 
// int main(){
//     char str[]="Ifmmp!gsjfoet";
//     decrypt(str);
//     printf("%s",str);
//     return 0;
// }



// #include <stdio.h>
//  int count(char str[],char c){
//     int i=0;
//      char *ptr=str;
//      while(*ptr!='\0'){
//          if(*ptr==c){
//              i=i+1;
//              ptr++;
//          }
//          else{
//              i=i;
//              ptr++;
//          }
//      }
//      return i;
//  }
 
// int main(){
//     char str[]="qwertyanuja";
//     char c='a';
//    int i;
//    i=count(str,'a');
//     printf("%d",i);
//     return 0;
// }



// #include <stdio.h>
//  int count(char str[],char c){
//     int i=0;
//      char *ptr=str;
//      while(*ptr!='\0'){
//          if(*ptr==c){
//              i=1;
//              ptr++;
//          }
//          else{
//              i=0;
//              ptr++;
//          }
//      }
//      return i;
//  }
 
// int main(){
//     char str[]="qwertyanuja";
//     char c='k';
//    int i;
//    i=count(str,'k');
//     printf("%d",i);
//     return 0;
// }
