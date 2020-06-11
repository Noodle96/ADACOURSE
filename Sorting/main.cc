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
        INSERT SORT
    */
    // std::ofstream dataInsertSort;
    // dataInsertSort.open("dataInsertSort.txt",std::ios::app);
    // for(auto n = 2; n < 33000 ; n *=2 ){
    //     auto promedioX = 0;
    //     //SE HARA UNA PRUEBA DE 50 VECES CON LA MISMA CUANTIDAD DE ELEMENTOS PARA PODER HALLAR UN PROMEDIO
    //     for (int e = 0 ; e < 50 ; e++){
    //         MyVector<int> vec(n);
    //         auto duration = vec.insertSortF();
    //         promedioX  += duration.count();
    //         std::cout << promedioX << std::endl;
    //     }
    //     promedioX /=50;
    //     dataInsertSort << n << " " << promedioX << std::endl;
    //
    // }
    // dataInsertSort.close();







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
    //#
    //#
    //#
    //#
    //#
    // testing bubble sort with n = 32768
    // MyVector<int> v(32768);
    // auto duration = v.bubbleSortF();
    // std::cout << duration.count() << std::endl;

    //testing insertSort with n = 8192
    // MyVector<int> v(8192);
    // auto duration = v.insertSortF();
    // std::cout << duration.count() << std::endl;



    // std::cout << INT_MAX << std::endl;
    // std::cout << LONG_MAX << std::endl;
    return 0;
}
