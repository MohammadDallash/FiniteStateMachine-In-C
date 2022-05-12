#include <stdio.h>

void funMyfun()
{
     printf("Hello World");
}


typedef void (*f_pointer_void_void)(void);


int main()
{
    
   f_pointer_void_void p  = funMyfun;
   (*p) ();

    return 0;
}
