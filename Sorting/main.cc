#include<climits>
#include"myvector.h"

 // 65536 3254217 of mergesort

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
    // std::ofstream dataInsertSortTest1;
    // dataInsertSortTest1.open("dataInsertSort0-1000.txt",std::ios::app);
    // for(auto n = 2; n < 1001 ; n +=50){ // for(n=2; n<=33000 ; n*=2)
    //     auto promedioX = 0;
    //     //SE HARA UNA PRUEBA DE 50 VECES CON LA MISMA CUANTIDAD DE ELEMENTOS PARA PODER HALLAR UN PROMEDIO
    //     for (int e = 0 ; e < 50 ; e++){
    //         MyVector<int> vec(n);
    //         auto duration = vec.insertSortF();
    //         promedioX  += duration.count();
    //         std::cout << promedioX << std::endl;
    //     }
    //     promedioX /=50;
    //     dataInsertSortTest1 << n << " " << promedioX << std::endl;
    //
    // }
    // dataInsertSortTest1.close();
    //






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



    //TEST INTERCALACION
    // std::vector<int> v;
    // v.push_back(80);
    // v.push_back(100);
    // v.push_back(110);
    // v.push_back(2);
    // v.push_back(90);
    // v.push_back(105);
    // intercalacion(v,0,2,5);
    // for(auto it = v.begin() ; it != v.end(); it++){
    //     std::cout << *it << " ";
    // }std::cout << std::endl;




    /*
        MERGE SORT
    */
    //test
    // MyVector<int> vec(100);
    // vec.printVector();
    // vec.mergeSortF();
    // vec.printVector();
    //#
    //#
    //#
    //#
    // std::ofstream dataMergeSort;
    // dataMergeSort.open("dataMergeSort0-1000.txt" , std::ios::app);
    // for(auto n = 2; n < 1050 ; n *=2 ) { // for(auto n = 2; n < 66000 ; n *=2 )
    //     auto promedioX = 0;
    //     //SE HARA UNA PRUEBA DE 50 VECES CON LA MISMA CUANTIDAD DE ELEMENTOS PARA PODER HALLAR UN PROMEDIO
    //     for (int e = 0 ; e < 50 ; e++){
    //         MyVector<int> vec(n);
    //         auto duration = vec.mergeSortF();
    //         promedioX  += duration.count();
    //         //std::cout << duration.count() << std::endl;
    //         std::cout << promedioX << std::endl;
    //     }
    //     promedioX /=50;
    //     dataMergeSort << n << " " << promedioX << std::endl;
    //
    // }
    // dataMergeSort.close();
    //#
    //#
    // MyVector<int> v(12);
    // auto duration = v.mergeSortF();
    // std::cout << duration.count() << std::endl;








    /*
        PROBLEMAS TIPO DE LA SUMA MAXIMA.
    */

    return 0;
}


// 2 0
// 4 1
// 8 5
// 16 12
// 32 26
// 64 67
// 128 179
// 256 356
// 512 463
// 1024 1070
// 2048 3712
// 4096 13679
// 8192 52392
// 16384 201886
// 32768 793023
