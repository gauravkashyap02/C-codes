#include <stdio.h>

int main() {

  // variables to store the three numbers
  int a, b, c;

  //take input from the user
  scanf("%d %d %d", &a, &b, &c);

  //if else condition to check whether first two numbers are equal
  if (a == b) {

    //nested if else condition to check if c is equal to a and b
    if (a == c) {
      //all are equal
      printf("Equal");
    } else {
      //all are not equal
      printf("Not Equal");
    }
  } else {
    //the first two numbers are not equal, so they are not equal
    printf("Not Equal");
  }

  return 0;
  
}