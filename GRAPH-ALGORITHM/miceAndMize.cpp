#include"dijkstra.h"
#include"floydWarshall.h"



int main(){
    /****************************************************************************
    * Problem Mice and Mize with dijkstra
    *****************************************************************************
    * verdict: accepted
    ****************************************************************************/

    // int casos,N,E,T,M;
    // cin >> casos;
    //
    // int origin,destino,w;
    // for(auto caso = 0; caso < casos; caso++){
    //     // cout << "\n";
    //     cin>>N>>E>>T>>M;
    //     Graph G(N);
    //     for(auto m = 0 ; m<M;m++){
    //         cin>>origin>>destino>>w;
    //         G.addEdge(origin-1,destino-1,w);
    //     }
    //     vector<int> vecDistances = G.shortestPath(E-1);
    //
    //     int cont = 0;
    //     for(auto it = vecDistances.begin() ; it!= vecDistances.end(); it++){
    //         //cout << *it << " ";
    //         if(*it <= T ){
    //             cont++;
    //         }
    //     }
    //     if(caso>0) cout << endl;
    //     cout <<cont << endl;
    // }

    /****************************************************************************
    * Problem Mice and Mize with Flotd Warshall
    *****************************************************************************
    * verdict:
    ****************************************************************************/
    int casos,N,E,T,M;
    cin >> casos;

    int origin,destino,w;
    for(auto caso = 0; caso < casos; caso++){
        cin>>N>>E>>T>>M;

        vector< int > vec(N,INF);
        vector<  vector<int> > Matriz(N,vec);
        prepareMatriz(Matriz); // ZEROS  in the middle
        for(auto m = 0 ; m<M;m++){
            cin>>origin>>destino>>w;
            Matriz[origin-1][destino-1]= w;
        }
        floydWarshall(Matriz);
        int cont = 0;
        for(int e =  0 ; e < N; e++){
            if(Matriz[e][E-1] <= T)cont++;
        }
        if(caso>0) cout << endl;
        cout <<cont << endl;
    }



    return 0;
}
