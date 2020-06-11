#ifndef  MERGESORT_H
#define  MERGESORT_H


//ALGORITMO DE INTERCALACION
template<typename T>
void intercalacion(std::vector<T>&A,unsigned p, unsigned q, unsigned r){
    //vector auxiliar b
    std::vector<T> b; b.reserve(A.size());

    //insertaremos en b desde p hasta q
    for(auto i = p ; i<=q;i++){
        std::cout << b.size() << std::endl;
        b[i] = A[i];
    }
    std::cout << "hola" << std::endl;
    for(auto it = b.begin() ; it != b.end(); it++){
        std::cout << *it << " ";
    }std::cout << std::endl;
}




#endif //MERGESORT_H
