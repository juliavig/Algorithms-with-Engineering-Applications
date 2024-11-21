#include <stdio.h>
#include "graph.h"
#include <limits.h>


//funcion to init distances and predecessors
void InitializeSingleSource(Graph *g, int s) {
    for (int i = 0; i < g->num_vertices; i++) {
		g->v[i].d = INT_MAX;
		g->v[i].pred = -1;
        
    }
    g->v[s].d = 0; //distance to the source vertex is 0
}
