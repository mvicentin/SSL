#include <stdio.h>
int main(){
    char nombre[50];
    int edad;
  
   printf("Cual es tu nombre\?: \n");
   scanf("%49s",nombre);
   
   printf("Cual es tu edad\?: \n"); 
   scanf("%d",&edad);
   
   printf("Mi Nombre es=%49s \n",nombre);
   printf("Mi edad es:%d \n",edad);
   printf("Que tengas lindo dia \n");
        

return 0;

}