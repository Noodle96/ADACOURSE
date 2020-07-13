#include<iostream>
#include<vector>
#include<climits>
#include<cmath>

#include"../Sorting/myvector.h"
using VECTOR = MyVector<int>;

#define LIMITE 200

long vecesLinea4(VECTOR &v){
    long vecesEntro = 0;
    auto it = v.myvector.begin();
    int max =  *it;it++;
    for( ; it != v.myvector.end() ; it++){
        if(max < *it){
            max = *it;
            vecesEntro++;
        }
    }
    return vecesEntro;
}


int main(){

    for(auto n = pow(2,8) ; n < pow(2,21); n *= 2){
        long promedio = 0 ;
        for(auto e = 0 ;e < LIMITE ; e++){
            VECTOR v(n);
            promedio += vecesLinea4(v);
        }
        promedio /= LIMITE;
        std::cout << n << " " << promedio << std::endl;

    }

    return  0;
}
