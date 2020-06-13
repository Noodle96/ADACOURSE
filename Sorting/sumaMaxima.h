#ifndef SUMAMAXIMA_H
#define SUMAMAXIMA_H

//ALGORITMO LINEAL PARA ENCONTRAR EL SEGMENTO DE SUMA MAXIMA PROPUESTA POR
// JAY KADANE SEG-MAX-LIN(A,n) = O(n)

using VECTOR = std::vector<int>;
using L_L = long;
using DATA = std::pair<std::pair<L_L,L_L>,L_L>;

DATA SEG_MAX_LIN(VECTOR A,L_L L){
    L_L sumamax = 0,suma = 0;
    L_L e = 0, d = -1;
    L_L i = 1, f = -1;
    while(f < L-1){
        f +=1;
        suma+=A[f];
        if(suma < 0){
            suma = 0;i = f+1;
        }else{
            if(suma >= sumamax){
                sumamax = suma; e = i;d=f;
            }
        }
    }
    std::pair<L_L,L_L> ed = std::make_pair(e,d);
    DATA data = std::make_pair(ed,sumamax);
    return data;
}


#endif // SUMAMAXIMA_H
