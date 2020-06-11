#include<climits>
#include"myvector.h"

int main(){
    //int tam; std::cin>>tam;

    /*
        CREARA EL VECTOR CON n  VALORES ALEATORIOS
    */
    //MyVector<int> vec(10);


    /*
        IMPRIME EL VECTOR DE TAL FORMA QUE FUE CREADO ALEATORIAMENTE
    */
    //vec.printVector();


    /*
        APLICADO EL ALGORITMO INSERTSORT LO ORDENA DE MENOR A MAYOR
    */

    /*long asig = 0, comp= 0;
    vec.insertSort(asig,comp);*/

    /*
        IMPRIME EL VECTOR YA ORDENADO CON EL INSERT SORT
    */
    //vec.printVector();
    /*std::cout << "TAMANHIO VECTOR: " << vec.getLength() << std::endl;
    std::cout << "ASIGNACIONES: " << asig << "\n COMPARACIONES " << comp << std::endl;*/







    /*
        MERGE SORT
    */
    //vec.testing();








    /*
        BUBBLESORT
    */
    //  vec.printVector();
    //vec.bubbleSortF();
    //  vec.printVector();}

    // std::ofstream dataBubbleSort;
    // dataBubbleSort.open("dataBubbleSort.txt" , std::ios::app);
    //
    // for(auto n = 2; n < 33000 ; n *=2 ){
    //     auto promedioX = 0;
    //     //SE HARA UNA PRUEBA DE 50 VECES CON LA MISMA CUANTIDAD DE ELEMENTOS PARA PODER HALLAR UN PROMEDIO
    //     for (int e = 0 ; e < 50 ; e++){
    //         MyVector<int> vec(n);
    //         auto duration = vec.bubbleSortF();
    //         promedioX  += duration.count();
    //         //std::cout << duration.count() << std::endl;
    //         std::cout << promedioX << std::endl;
    //     }
    //     promedioX /=50;
    //     dataBubbleSort << n << " " << promedioX << std::endl;
    //
    // }
    // dataBubbleSort.close();

    MyVector<int> v(32768);
    auto duration = v.bubbleSortF();
    std::cout << duration.count() << std::endl;



    // std::cout << INT_MAX << std::endl;
    // std::cout << LONG_MAX << std::endl;
    return 0;
}
