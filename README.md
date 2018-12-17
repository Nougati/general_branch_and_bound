# Generalised Branch and Bound

This project is generally just meant to be a framework for playing with
 different strategies within a general Branch and Bound scheme. 
For an introduction to Branch and Bound, I recommend *Integer Programming*'s
 introduction by Confirt, Cornuejols and Zambelli, but also the
 [Wikipedia Entry](https://en.wikipedia.org/wiki/Branch_and_bound) is completely
 fine for this too.
One may argue that there are already open source projects which interface
 with things like SCIP already, but I'm mainly doing this for my own tinkering
 pleasure, and for experience with C function pointers. 
The main things that I hope this will generalise are:
 - Initial heuristic to get first primal bound
 - Bounding strategy
 - Branching strategy, and the queuing mechanism.

## Future ambitions

Some things I'd like this to one day service are:
 - Interfacing with a benchmarking application.
 - Having a basic implementation of an LP solver to compare with, say, an approximation algorithm solver.
 - Supporting the ability to solve different problem types, such as: Knapsack,
    Travelling Salesman, and Vehicle Routing Problems.
