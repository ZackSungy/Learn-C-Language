#include <stdio.h>

int main()
{
   fprintf(stdout,"please input the value a:\n");
   int a;
   fscanf(stdin,"%d",&a);
   if(a<0){
   fprintf(stderr,"the value must > 0\n");
   return 1;
   }
   return 0;
}
