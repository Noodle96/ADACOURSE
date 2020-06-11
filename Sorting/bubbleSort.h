#ifndef BUBBLESORT_H
#define BUBBLESORT_H


template<typename T>
void bubbleSort(std::vector<T> &A,long l){
    for(int e = 0 ; e < l-1 ;e++){
        //Los ultimos e elementos ya estan en su lugar correcto
        for(int j = 0 ; j < l-e-1 ; j++){
            if(A[j] > A[j+1])std::swap(A[j],A[j+1]);
        }
    }
}



#endif // BUBBLESORT_H
