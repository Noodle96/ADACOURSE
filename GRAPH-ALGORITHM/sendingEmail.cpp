#include"floydWarshall.h"
#include"dijkstra.h"

int main(){
    /****************************************************************************
    * Problem Sending email with Floyd Warshall
    *****************************************************************************
    * verdict: error Time limit exceeded
    ****************************************************************************/

    // int N,n,m,S,T;
    // cin >> N;
    // for(int e = 0 ; e<N;e++){
    //     cin>>n>>m>>S>>T;
    //     vector< int > vec(n,INF);
    //     vector<  vector<int> > M(n,vec);
    //     prepareMatriz(M); // ZEROS  in the middle
    //     int origen,destino,w;
    //     for(auto connections = 0 ; connections < m; connections++){
    //         cin >> origen >> destino >> w;
    //         //bidireccional
    //         M[origen][destino] = w;
    //         M[destino][origen] = w;
    //     }
    //     //printMatriz(M);
    //     floydWarshall(M);
    //     //printMatriz(M);
    //     if(M[S][T]!=INF) cout << "Case #" << e+1 <<": " << M[S][T] <<endl;
    //     else cout << "Case #" << e+1 <<": unreachable"  <<endl;
    // }


    /****************************************************************************
    * Problem Sending email with Dijkstra
    *****************************************************************************
    * verdict:
    ****************************************************************************/


    int N,n,m,S,T;
    cin >> N;
    for(int e = 0 ; e < N ; e++){
        cin>>n>>m>>S>>T;
        Graph M(n);
        int origen,destino,w;
        for(auto connections = 0 ; connections < m; connections++){
            cin >> origen >> destino >> w;
            //bidireccional
            M.addEdge(origen,destino,w);
            M.addEdge(destino,origen,w);
        }
        int sh = M.shortestPath(S,T);
        if(sh !=  INF) cout << "Case #" << e+1 <<": " << sh <<endl;
        else cout << "Case #" << e+1 <<": unreachable"  <<endl;
    }




    // create the graph given in above fugure
	// int V = 9;
	// Graph g(V);
	// making above shown graph
	// g.addEdge(0, 1, 4);
	// g.shortestPath(0);
    return  0;

}
