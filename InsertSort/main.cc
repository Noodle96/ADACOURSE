#include<climits>
#include"myvector.h"

int main(){
    //int tam; std::cin>>tam;

    /*
        CREARA EL VECTOR CON n  VALORES ALEATORIOS
    */
    MyVector<int> vec(100);


    /*
        IMPRIME EL VECTOR DE TAL FORMA QUE FUE CREADO ALEATORIAMENTE
    */
    //vec.printVector();


    /*
        APLICADO EL ALGORITMO INSERTSORT LO ORDENA DE MENOR A MAYOR
    */
    long asig = 0, comp= 0;
    vec.insertSort(asig,comp);

    /*
        IMPRIME EL VECTOR YA ORDENADO CON EL INSERT SORT
    */
    //vec.printVector();
    std::cout << "TAMANHIO VECTOR: " << vec.getLength() << std::endl;
    std::cout << "ASIGNACIONES: " << asig << "\n COMPARACIONES " << comp << std::endl;




    // std::cout << INT_MAX << std::endl;
    // std::cout << LONG_MAX << std::endl;
    return 0;
}
