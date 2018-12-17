/******************************************************************************
 *  generalised_branch_and_bound.c                                            *
 *    Allows for arbitrary problem types and AAs to be plugged in with B&B    *
 *  Does not work yet                                                         *
 *                                                                            *
 *  First edit: 12/06/2018                                                    *
 *   Last edit: 12/07/2018                                                    *
 *  Notes:                                                                    *
 *                                                                            *
 *                                                                            *
 ******************************************************************************/

#include <stdio.h>
#include "generalised_branch_and_bound.h"

/* Generalised b&b should have:
     - arbitrary problem representation
     - arbitrary bounds checker
     - arbitrary AA for problem
     - arbitrary nodequeue
     - You should be able to choose type of dual bound!!!

   So:
     First I need to try to do this for KP
       Functions: Need a function pointer array
        funcp_array[0]: read_some_instance_somehow
        funcp_array[1]: find_bounds_somehow
        funcp_array[2]: approximate_problem_somehow
       Arbitrary structures array (idk how to do this yet):
        struct_array[0]: pointer to some node_queue
        struct_array[1]: pointer to some problem rep (a node)
        struct_array[2]: 

*/

/**/
struct poo_struct{
  int x;
};


void generalised_branch_and_bound(int (*problem_reader)(const char *filename, 
                                  void *problem_spec_struct), void *a_structure,
                                  void (*some_other_func)(void *a_thing))
{
  printf("Very nice!\n");
  //struct poo_struct* in_house = (struct poo_struct*) a_structure;
  //printf("poo_struct->x : %d\n", in_house->x);
  //TODO Investigate variable length argument lists and see if we can get two independent files with different things using this
  (*problem_reader)("Ass", a_structure);
  (*some_other_func)(a_structure);

}
