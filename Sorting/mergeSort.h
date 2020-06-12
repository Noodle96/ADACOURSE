#ifndef  MERGESORT_H
#define  MERGESORT_H


//ALGORITMO DE INTERCALACION
template<typename T>
void intercalacion(std::vector<T>&A,unsigned p, unsigned q, unsigned r){
    //vector auxiliar B
    std::vector<T> B;
    //fill with -1
    for(auto e = 0 ;e<=r; e++){
        B.push_back(-1);
    }

    //insertaremos en B desde p hasta q.
    for(auto i = p ; i<=q;i++){
        B[i] = A[i];
    }
    //llenamos desde q+1 hasta r pero empezando desde el final.
    for(auto j = q+1 ; j <= r; j++){
        B[r+q+1-j] = A[j];
    }
    auto i = p;
    auto j = r;
    for(auto k = p ; k <= r ; k++){
        if(B[i] <= B[j]){
            A[k] = B[i];
            i += 1;
        }else{
            A[k] = B[j];
            j -= 1;
        }
    }
}


template<typename T>
void mergeSort(std::vector<T> &A, unsigned p, unsigned r){
    if(p<r){
        unsigned q = (p+r)/2;
        mergeSort(A,p,q-1);
        mergeSort(A,q+1,r);
        intercalacion(A,p,q,r);
    }
}




#endif //MERGESORT_H
