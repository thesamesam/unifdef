# include <stdio.h>
 # include <stdlib.h>

 # ifdef FOO
int foo() { return 0; }
 # else
   # error FOO defined
 # endif

int main()
{
  foo();
}