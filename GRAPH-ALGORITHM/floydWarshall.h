#ifndef FLOYWARSHALL_H
#define FLOYWARSHALL_H
#include<iostream>
#include<vector>
using namespace std;


#define INF 99999
using M = vector< vector<int> >;

/****************************************************************************
* Print matriz
*****************************************************************************
*
****************************************************************************/
void printMatriz(M &M){
    //cout << "print Matriz " << endl;
    for (int i = 0; i < M.size(); i++){
        for (int j = 0; j < M.size(); j++){
            if (M[i][j] == INF)
                cout << "INF ";
            else
                cout << M[i][j] << " " ;
        }
        cout << ("\n");
    }
}

void prepareMatriz(M  &M){
    //cout << "prepare MAtriz " << endl;
    for(auto i = 0 ; i <M.size(); i++) M[i][i] = 0;
    //printMatriz(M);
}

void floydWarshall( M&dist){
    int V = dist.size();
    //int dist[V][V];
    // for (int i = 0; i < V; i++)
    //     for (int j = 0; j < V; j++)
    //         dist[i][j] = graph[i][j];
    for (int k = 0; k < V; k++){
        for (int i = 0; i < V; i++){
            for (int j = 0; j < V; j++){
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    // Print the shortest distance matrix
    //printSolution(dist);
}


#endif // FLOYWARSHALL_H
