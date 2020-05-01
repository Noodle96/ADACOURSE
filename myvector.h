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
#include<vector>    //vector
#include <algorithm>    // std::swap

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
            num = 0 + rand()%(10000-0);
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
        los atributos asignaciones y comparaciones son pasados por referencia para saber la
        cantidad de comparaciones y asignaciones.
    */
    void insertSort(long &asignaciones, long &comparaciones){
        long i = 1,j;
        while( i < lengthVector){
            comparaciones++;
            j=i;asignaciones++;
            while(j > 0 && myvector[j-1] > myvector[j]){
                comparaciones++;
                std::swap(myvector[j],myvector[j-1]);
                j = j-1; asignaciones++;
            }
            i = i+1; asignaciones++;
        }
    }

};

// #include "stack.tpp"

#endif // MYVECTOR_H
