#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "generalised_branch_and_bound.h"

struct problem_struct{
  char *problem_name;  
};

int problem_reader(const char *filename, void *problem);
void do_another_thing(void *some_thing);
void package_problem_details(struct problem_struct prob, int argc, char *argv[]);

int main(int argc, char *argv[])
{
  int (*prob_read)(const char *, void *) = &problem_reader;
  void (*another_func)(void *) = &do_another_thing;
  struct problem_struct* problem = malloc(sizeof(struct problem_struct));

  //TODO Pack argv into structure. We should do it here because gbnb should
  //     know nothing specific about the implementation
  //package_problem_details(problem, argv, argc);

  generalised_branch_and_bound(prob_read, problem, another_func);

  free(problem);
  return 0;
}

int problem_reader(const char *filename, void *problem)
{
  // Cast problem from void*
  struct problem_struct *p_struct = (struct problem_struct *) problem;

  // Do some stuff to the problem struct
  const char name_goes_here[] = "Pooper";
  p_struct->problem_name = malloc(sizeof("Pooper"));
  strcpy(p_struct->problem_name, name_goes_here);
  printf("Structure has %s\n", p_struct->problem_name);

  // Cast it back to void*
  problem = (void *) p_struct;
  return 0;
}

void do_another_thing(void *some_thing)
{
  struct problem_struct *justproblem_struct = (struct problem_struct *) some_thing;
  //printf("do_another_thing reading struct: x is %d!\n", justproblem_struct->x);
  //(justproblem_struct->x)++;
  //printf("do_another_thing reading altered struct: x is %d!\n", 
  //       justproblem_struct->x);
}

void package_problem_details(struct problem_struct prob, int argc, char *argv[])
{
  // Iterate through argv
  // catch errors if argv is full of random stuff
}
