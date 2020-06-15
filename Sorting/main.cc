#include<climits>
#include"myvector.h"
#include"sumaMaxima.h"

 // 65536 3254217 of mergesort
 // bool myfunction (int i,int j) { return (i<j); }


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
    //VECTOR A;
    // A.push_back(-1);A.push_back(6);
    // A.push_back(3);A.push_back(-6);A.push_back(2);A.push_back(8);
    // A.push_back(4);A.push_back(-5);A.push_back(4);A.push_back(-3);A.push_back(4);
    // A.push_back(4);A.push_back(-4);A.push_back(4);A.push_back(-5);
    //A.push_back(-3);A.push_back(-4);A.push_back(-5);


    // for(auto it = A.begin() ; it != A.end(); it++){
    //     std::cout << *it << " " ;
    // }std::cout<< std::endl;

    // DATA data = SEG_MAX_LIN(A,A.size());
    // std::cout << "e: " << data.first.first << " d: " << data.first.second
    //  << " sumamax: " << data.second << std::endl;




    //PROBLEMA PROPUESTO
    // https://docs.google.com/document/d/1QA1RtGvqQBLpEdx876lUlgtE-K9mvpy7PIOMcHre-xQ/edit

    // std::cout << "Indique la cantidad de rutas: ";
    // unsigned long rutas,calles; std::cin>>rutas;
    // if(rutas > 0){
    //     for(auto e = 1 ; e <= rutas ; e++){
    //         std::cout << "# Calles de la ruta #" << e << " : "; std::cin>>calles;
    //         VECTOR A;
    //         for(auto i = 1 ; i <= calles-1; i++){
    //             long temp;
    //             std::cout <<"Ruta #"<<e<< " Costo de ir calle #" << i << " a la calle #" << i+1 << " : ";std::cin>>temp;A.push_back(temp);
    //         }
    //         DATA data = SEG_MAX_LIN(A,A.size());
    //         L_L E = data.first.first;
    //         L_L d = data.first.second;
    //         L_L sumamax = data.second;
    //         if(sumamax == 0 ){
    //             std::cout << "La Ruta #" << e << " no tiene  calles interesantes" << std::endl;
    //         }else{
    //             std::cout << "La mejor parte de la Ruta #" << e << " es entre la Calle #" << E+1 << " y la Calle #" << d+2 << std::endl;
    //         }
    //
    //     }
    // }



    // std::vector<int> c(10);c.push_back(7);c.push_back(2);c.push_back(11);
    // for(auto it = c.begin() ;it != c.end() ; it++){
    //     std::cout << *it << " ";
    // }std::cout << std::endl;
    // std::sort(c.begin(),c.end(),myfunction);
    // for(auto it = c.begin() ;it != c.end() ; it++){
    //     std::cout << *it << " ";
    // }std::cout << std::endl;








    /*
        QUICKSORT
    */
    // MyVector<int> vec(10);
    // vec.printVector();
    // vec.quickSortF();
    // vec.printVector();







    return 0;
}
