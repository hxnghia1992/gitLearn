#include <stdio.h>
int bss_var;        /* Uninitialized global variable */
int data_var = 1;   /* Initialized global variable */
int main(int argc, char **argv)
{
  void *stack_var;            /* Local variable on the stack */
  stack_var = (void *)main;   /* Don't let the compiler */
                              /* optimize it out */
  printf("Hello, World! Main is executing at %p\n", stack_var);
  printf("This address (%p) is in our stack frame\n", &stack_var);
  /* bss section contains uninitialized data */
  printf("This address (%p) is in our bss section\n", &bss_var);
  /* data section contains initializated data */
  printf("This address (%p) is in our data section\n", &data_var);

  printf("\n");
  printf("Hi this is Mark A. Yoder\n");
  printf("Hello, this is Sam Allen\n");
  printf("Hi this is Aaron Bamberger\n");
  printf("Hi this is Stephen Mayhew\n");
  printf("Hi this is Michael Lester\n"); 
  /* Stephen and I have the same number of letters in both
     of our names, that satisfies my OCD :) */
  printf("Hi this is Lei Liu\n"); 
  printf("Ty Strayer\n");
  printf("Hi this is Brian Hulette\n"); 
  printf("Greetings from Joel Carlson\n");
  printf("Mike Fuson was here\n");
  printf("-->Dan Bennett<--\n");
  printf("This is Tommy\n");
  printf("This is Tommy on Asus\n");

  return 0;
}
