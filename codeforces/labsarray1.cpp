#include <iostream>
using namespace std;
int main() {
    
    long long size;
    cin>>size;
    long long arr[size];
    long long result = 0;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){
        result = result + arr[i];
    }
    if (result<0)
    {
    	result = result * 1;
    }
  
    cout<<(result);
}