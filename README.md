# Algorithms for solving maximum flow problem

Maximum flow problems are a group of important and well-studied optimization
problems and they involve finding a feasible flow through a single-source, single-sink flow network that is maximum. This repository is an implementation solving a single source and sink flow problem. Two most popular methods are implemented : [Ford-Fulkerson](https://en.wikipedia.org/wiki/Ford–Fulkerson_algorithm) method and [Push-relabel](https://en.wikipedia.org/wiki/Push–relabel_maximum_flow_algorithm) generic algorithm. Implemetation is in C++.

## Prerequisites

* C++ compiler (**preferably GCC**)
* OpenMP >= 3.0
* GNU Make >= 3.81


## Configuration & Compiling

To automatically generate executables, execute the below commands and providing your preferred compiler name/alias. i.e g++. Note that the compiler should suport atleast c++11 and OpenMP
```bash
make CXX=[your c++ compiler]
```
To run tests :
```bash
./a.out
```

## References
1. T.H. Cormen, C.E. Leiserson, R.L. Rivest, C. Stein. Introduction to algorithms / third edition.
MIT Press (2009)
2. L.R. Ford, D.R. Fulkerson. Maximal flow through a network. Canadian Journal of
Mathematics. 8, 399 (1956)
3. A.V. Goldberg, É. Tardos, R.E. Tarjan. Network flow algorithms. Tech. Report STAN-CS-
89-1252, Stanford University CS Dept. (1989)
4. [Maximum flow problem](https://en.wikipedia.org/wiki/Maximum_flow_problem) - **wikipedia**
