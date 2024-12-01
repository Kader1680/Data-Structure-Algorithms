    #include <iostream>
    #include <vector>   
    #include <cmath>    
    using namespace std;

    int main() {
        long long size;
        cin>> size;
        long long arr[size];   

        for (int i = 0; i < size; i++) {
            cin>> arr[i];   
        }
        long long result = 0;

        for (int i = 0; i < size; i++) {
            result += arr[i];   
        }
        if (result < 0)
        {
            result*= -1;
        }

          

        cout<<result;
    }
