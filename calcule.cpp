#include <stdio.h>
 #include <stdlib.h>
int main()
{  char  s ,c;
   float n1, n2;
    do{
	
        printf("saisir un nombre\n");
        scanf("%f", &n1);
      
        printf("saisir un operateur\n");
        scanf("%s", &s);
        
        printf("saisir un nombre\n");
        scanf("%f", &n2);
        
        
   switch (s)
   {
   case '+' : printf("la somme est %f",n1+n2);
   break;
   case	'-': printf("la soustraction est %f ",n1-n2);
   break;
   case	'*' : printf("la multuplication est %f ",n1*n2);
   break;
   case '/' :
   	     if (n2!=0) {
   	   printf("la division est %f ",n1/n2);
   	     
   }	else{
   		printf("error");
	   } 
   
   break;
   }
 
 }while( c !='Q');
   return 0;
}
	
	
	
	

