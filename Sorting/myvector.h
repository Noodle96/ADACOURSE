#ifndef MYVECTOR_H
#define  MYVECTOR_H

/*
    NUMEROS ALEATORIOS CPP
    Número aleatorios entre 250 y 420:
    num=250+rand()%(421-250);
*/
//numero aleatorios entre 0 y 10 000

/*
        to swap => algorithm
        std::swap(myvector[0],myvector[1]); for exmaple
*/

#include<iostream>
#include<fstream>
#include<chrono>
#include<vector>    //vector
#include <algorithm>    // std::swap

using namespace std::chrono;

#include"bubbleSort.h"
#include"insertSort.h"

 // using HRC = high_resolution_clock::time_point;
 // using  MS = std::chrono::microseconds;

 // using L = int;

template<typename T>
class MyVector{
private:
    std::vector<T> myvector;
    long lengthVector;
public:
    MyVector(int len){
        this->lengthVector = len;
        T num;
        srand(time(NULL));
        for(auto e = 0 ; e< lengthVector; e++){
            num = 0 + rand()%(50000-0); // numeros aleatorios entre 0 y 50 000
            myvector.push_back(num);
        }
    }
    ~MyVector(){};

    long getLength()const{return lengthVector; }

    void printVector(){
        for(auto it = myvector.begin() ; it != myvector.end(); it++) std::cout << *it << " ";
        std::cout<< std::endl;
    }


    /*
        los atributos asInsertSortAndMergeSortignaciones y comparaciones son pasados por referencia para saber la
        cantidad de comparaciones y asignaciones.
    */
    auto insertSortF(){
        auto start = high_resolution_clock::now();
        insertSort(myvector,lengthVector);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        return duration;
    }





    auto bubbleSortF(){
        auto start = high_resolution_clock::now();
        bubbleSort(myvector,lengthVector);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        // std::cout << "Time taken by function: "
        // << duration.count() << " microseconds" << std::endl;

        return duration;
    }


};

// #include "stack.tpp"

#endif // MYVECTOR_H
