#include <iostream>
using namespace std;
void selectionSort(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex] )
            {
                minIndex = j;
            }
        }
        if ( i != minIndex){      
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
int main(int argc, char const *argv[]){
        int array[] = {63, 8, 3, 2, 22};
        int mysize  = sizeof(array) /  sizeof(array[0]);
        selectionSort(array, mysize);
        for (auto v : array)
        {
                cout<<v<<" ";
        }
         
}
