#ifndef INSERTSORT_H
#define  INSERTSORT_H


template<typename T>
void insertSort(std::vector<T> &A,long lengthVector){
    long i = 1,j;
    while( i < lengthVector){
        j=i;
        while(j > 0 && A[j-1] > A[j]){
            std::swap(A[j],A[j-1]);
            j = j-1;
        }
        i = i+1;
    }
}

#endif // INSERTSORT
