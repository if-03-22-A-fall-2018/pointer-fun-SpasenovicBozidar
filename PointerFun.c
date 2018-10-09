#include <stdio.h>
#include <stdlib.h>


void print_integers(int int_value, int *(int_pointer)){
  printf("Got an integer value %d and an address to an integer with value %d\n", int_value, int_pointer);
}
void change_integers(int int_value, int *(int_pointer)){
  int_value =30;
  *int_pointer = 40;

    print_integers(int_value, int_pointer);
}
int main(int argc, char const *argv[]) {

  int int_value = 0;
  int *int_pointer = malloc(sizeof(int));

  printf("Enter a number: ");
  scanf("%d", &int_value);
  *int_pointer = int_value;

  print_integers(int_value, int_pointer);
change_integers(int_value, int_pointer);

  scanf("%s\n" );
  return 0;
}
