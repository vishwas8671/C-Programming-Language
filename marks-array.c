//QUESTION : Given an array of marks of 10 students, if the mark of any student is less than 35 print its roll number. [Roll number here refers to the index of the array.]
#include <stdio.h>
int main () {
  int marks[10];
  for (int i=0; i<10; i++) {
  printf("Enter marks of student %d : ",i+1);
  scanf ("%d",&marks[i]);
  }
  printf ("Roll no. of students having less than 35 marks : ");
  for (int i=0; i<10; i++) {
    if (marks[i]<35) {
      printf ("%d ",i+1);
  }
  }
  return 0;
}