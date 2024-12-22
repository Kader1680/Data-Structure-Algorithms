#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

vector<int> selectionSort(vector<int> arr){
  int size = arr.size();
  for (int i = 0; i < size - 1; i++) {
    int min = i;
    for (int j = i + 1; j < size; j++) {
       if(arr[j] < arr[min]){
          min = j;
       }
       swap(arr[i], arr[min]);
    }
  }
  return arr;
}
int main() 
{
    vector<int> data = {64, 25, 12, 22, 11};
    vector<int> sortedData = selectionSort(data);

    cout << "Sorted Array: ";
    for (int num : sortedData) {
        cout << num << " ";
    }
    cout << endl;
}