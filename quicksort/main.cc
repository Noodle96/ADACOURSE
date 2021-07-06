/* C++ implementation of QuickSort */
#include <bits/stdc++.h>
using namespace std;
using VECTOR_INT = vector<int>;
int CONTADOR {0};

//GENERA UN NUMERO ALEATORIO ENTRE -MAX Y MAX
int generarAleatorio(int MAX){
    return rand()%(MAX+MAX+1)-MAX;
}

//CREA VECTOR NUMEROS ALEATORIOS.
VECTOR_INT *generarVectorAleatoriosDesordenado(int tamanhio){
    VECTOR_INT *vector_aleatorio_Desordenado = new VECTOR_INT(tamanhio);
    for(int e = 0 ; e< tamanhio; e++){
        (*vector_aleatorio_Desordenado)[e] = generarAleatorio(tamanhio);
    }
    return vector_aleatorio_Desordenado;
}

int partition (VECTOR_INT &arr, int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element
			swap(arr[i], arr[j]);
            CONTADOR++;
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}

// Generates Random Pivot, swaps pivot with
// end element and calls the partition function
int partition_r(VECTOR_INT &arr, int low, int high)
{
    // Generate a random number in between
    // low .. high
    srand(time(NULL));
    int random = low + rand() % (high - low);

    // Swap A[random] with A[high]
    swap(arr[random], arr[high]);

    return partition(arr, low, high);
}



/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(VECTOR_INT &arr, int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition_r(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
// void printArray(int arr[], int size)
// {
// 	int i;
// 	for (i = 0; i < size; i++)
// 		cout << arr[i] << " ";
// 	cout << endl;
// }
void printVector(VECTOR_INT &vec){
    for(auto it = vec.begin() ; it != vec.end(); it++){
        cout << *it <<" ";
    }cout <<endl;
}


/*
    MAX OF VECTOR:
        * LOG(N)
*/
int maxOfVector(VECTOR_INT &vec){
    int cont = 0;
    int max = vec[0];
    for(auto it = vec.begin() ; it!= vec.end(); it++){
        if(*it > max ){
            max = *it;cont++;
        }
    }
    return cont;
}




// Driver Code
int main()
{
    srand(time(NULL));
    // VECTOR_INT *vec = generarVectorAleatoriosDesordenado(10);
	// int arr[] = {10, 7, 8, 9, 1, 5};
	// int n = sizeof(arr) / sizeof(arr[0]);
	// quickSort(arr, 0, n - 1);
	// cout << "Sorted array: \n";
	// printArray(arr, n);

    //printVector(*vec);
    //quickSort(*vec, 0, vec->size() - 1);
    //printVector(*vec);
    //cout << vec->size() << endl;

    // for(auto e = pow(2,8) ; e <= pow(2,20); e*=2){
    //     float avg = 0;
    //     for(int j = 0 ; j<200; j++){
    //         VECTOR_INT *vec = generarVectorAleatoriosDesordenado(e);
    //         avg += maxOfVector(*vec);
    //     }
    //     avg = avg/200;
    //     cout << e << " " << avg<< " "<<log(e) << endl;;
    // }

    //cout << log(256) <<endl;


    //DEMOSTRANDO EL CASO PROMEDIO DE QUICKSORT
    fstream file;
    file.open("data.txt",ios::out);
0    for(auto e = pow(2,8) ; e <= pow(2,15); e*=2){
        VECTOR_INT *vec = generarVectorAleatoriosDesordenado(e);
        quickSort(*vec,0,vec->size()-1);
        file << e << " " << CONTADOR << " "<<e*(log(e)-1)<<endl;
        CONTADOR=0;
        delete vec;
    }

    file.close();









	return 0;
}

// This code is contributed by rathbhupendra
