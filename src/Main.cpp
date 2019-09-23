#include "Vertex.h"
#include "Edge.h"
#include "FordFulkersonBasics.h"
#include "PushRelabel.h"
#include "Network.h"
#include <iostream>
#include <vector>
#include <omp.h>

using namespace std;

int main(int argc, char* argv[]) {

  const int nodes = (argc > 1 ? atoi(argv[1]) : 300);
	Network *test = createGraph(nodes, 200 , 250);

	cout << "\n\n************ Input Flow Network ***************\n";
	// printNetwork(test);

	cout << "\n\n************ Push-Relabel Method***************\n";
  double t1 = omp_get_wtime();
	GenericPushRelabel(test);
  double t2 = omp_get_wtime();
  cout <<"Push-Relabel Execution Time : "<<t2-t1<<" seconds"<<endl;

  cout << "\n\n************ Ford-Fulkerson Method *************\n";
  double t3 = omp_get_wtime();
	FordFulkerson(test);
  double t4 = omp_get_wtime();
  cout <<"Ford-Fulkerson Execution Time : "<<t4-t3<<" seconds"<<endl;
  // printNetwork(test);

	delete test;
	return 0;
}
