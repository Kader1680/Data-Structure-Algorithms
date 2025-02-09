// int arr = [5, 3, 8, 1, 2]
// try to sort this array using insert sort algorihtm


#include<iostream>

void insertSort(int arr[], int size){

    for (size_t i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j]  > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
        
    }
    
}

int main(int argc, char const *argv[])
{
    

int arr[] = {5, 3, 8, 1, 2};
int size = sizeof(arr)/sizeof(arr[0]);

insertSort(arr, size);

for(int i : arr){

    std::cout << i << std::endl;
 }

    return 0;
}
