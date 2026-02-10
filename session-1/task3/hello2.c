
/*
 * Hello world program
 * - compilation errors
 hello2.c:9:5: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
    9 |     printf("Hello\n");
      |     ^~~~~~
hello2.c:1:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | 
hello2.c:9:5: warning: incompatible implicit declaration of built-in function ‘printf’ [-Wbuiltin-declaration-mismatch]
    9 |     printf("Hello\n");
      |     ^~~~~~
hello2.c:9:5: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
 */

int main( void ) {
    
    printf("Hello\n");

    return 0;    
}	

