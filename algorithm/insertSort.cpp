#include <iostream>
using namespace std;
void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {

        int key = array[i];
        int j = i - 1;
        while (j >= 1 && key < array[j]) {
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = key;
    }
}
int main() {
    int myArray[] = {6,4,2,5,1,3};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    insertionSort(myArray, size);
    for (auto value : myArray) {  
        cout << value << " ";
    }  
}

