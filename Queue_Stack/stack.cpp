#include <iostream>
#include <stack>
using namespace std;

// create node

// class Node{
//     public:
//         int value;
//         Node* next;
//         // create constructor of the node accept value and ptr

//         Node(int value){
//             this->value = value; 
//             next = nullptr;
//         }
// };

// // create stack

// class Stack{

//     private:

// };

int main(int argc, char const *argv[])
{
    


    stack <string> langage;

    langage.push("c++");
    langage.push("python");
    langage.push("java");
    langage.push("ruby");
    while (!langage.empty())
    {
        cout<<langage.top()<<" ";
        langage.pop();
    }
    
    cout<<endl;
    return 0;
}
