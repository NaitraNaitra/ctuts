#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TRUE 1

int main(int argc, char *argv[])
{
  int x;
  char c;
  
  if(argc<2)       //no option typed
  {
  printf("Here is the ASK program's format:\n");
  printf("ASK [Text]\n");
  printf("\Text\" is displayed, then the PC\n");
  printf("waits for Y or N to be pressed, Y\n");
  printf("returns an ERRORLEVEL of 1: N is 2.\n");
  exit(0);
}

/* Print all the arguments */

   for(x=1;x<argc;x++){
                      printf("%s\x20",argv[x]);}
                      
   printf("(Y or N)?"); //print the YorN prompt
   
   
   while(TRUE)
   {
              c =getch();
              
              if(c=='y' || c=='Y') 
              {
                        printf("Y\n"); //Display their input
                        exit(1);       //ERRORLEVEL=1
                        }
                        
              if(c=='n' || c=='N') 
              {
                        printf("N\n"); //Display their input
                        exit(2);       //ERRORLEVEL=1
                        }
                        
    }
}
  
  
  system("PAUSE");	
  return 0;
}
