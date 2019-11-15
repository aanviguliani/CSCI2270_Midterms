//
//  bigO.cpp
//  
//
//  Created by Ria Thakkar on 10/5/18.
//

#include <stdio.h>

algorithm
- defined set of steps to solve a problem
Correct - produces expected(correct) output for all inputs.
Cost - efficiency
Exact Runtime - affected by procesor, OS, what else is running, language unsigned
Theoretical Runtime - proportional to (some Theoretical runtime)
- how many operations or lines of code execute execute for different inputs or size of input
- Theoretical proportional to Exact runtime.
- findItem(A, V){ essentially searching an array; }  since it searches the array n times.
number of times the for loop executes depends on the size of the array.

characterize runtime
-relate to some function f(n) to provide a bound.
- runtime grows proportional to f(n)
- let it be the worst case runtime.
ex: t(n) = 3n + 3
we say T(n) is big o f(n) if for sufficiently large n, the function t(n) is bounded above by c(f(n)) where c > 0 for all n >= n0
n0 is where t(n) and c*f(n) cross.
f(n) = n       o(n) //searching through an array.
f(n) = c       o(1) //not affecyed by n//deleting head of linked list
f(n) = n^2     o(n^2) //nested for loop
f(n) = nlog(n) o(nlogn)

3n^2 +6n +5
--> o(n^2)
keep the higher order polynomial and drop everything else.
