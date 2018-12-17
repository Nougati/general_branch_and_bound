#include <stdio.h>
#include <stdlib.h>
#include "generalised_branch_and_bound.h"

struct a_struct{
  int x;  
};

int problem_reader(const char *filename, void *problem);
void do_another_thing(void *some_thing);

int main(int argc, char *argv[])
{
  int (*prob_read)(const char *, void *) = &problem_reader;
  void (*another_func)(void *) = &do_another_thing;
  
  struct a_struct* min_struct = malloc(sizeof(struct a_struct));

  min_struct->x = 3;

  generalised_branch_and_bound(prob_read, min_struct, another_func);

  return 0;
}

int problem_reader(const char *filename, void *problem)
{
  printf("Poo.\n");
  struct a_struct *p_struct = (struct a_struct *) problem;
  p_struct->x = 123;
  problem = (void *) p_struct;
  return 0;
}

void do_another_thing(void *some_thing)
{
  struct a_struct *justa_struct = (struct a_struct *) some_thing;
  printf("do_another_thing reading struct: x is %d!\n",justa_struct->x);
  (justa_struct->x)++;
  printf("do_another_thing reading altered struct: x is %d!\n",justa_struct->x);
}

