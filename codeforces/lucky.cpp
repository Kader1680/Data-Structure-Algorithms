#include <iostream>
using namespace std;
#include <vector>
int main() {
    int size;
    cin>>size;
    vector<int> arr(size);
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
        
    }
    int min = arr[0];
    for(int i=1; i<size; i++){  
        if(arr[i] < min){
            min = arr[i];
        }
        
    }
    
    // cout<<"this is minmum "<<min<<endl;
    int frequence = 0;
    for(int i=0; i< size; i++){
          if(arr[i] == min){
                frequence++;
            }
    }
    if(frequence % 2 != 0){
        cout<<"Lucky";
    }else{
        cout<<"Unlucky";
    }
    
    // cout<<"this is frequence "<<frequence<<endl;
    return 0;
}


