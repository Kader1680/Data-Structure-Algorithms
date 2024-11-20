// {
//     "value" : 5,                             =======> Head
//     "next" : {                 
//             "value" : 5,
//             "next" : 
//                     {
//                     "value" : 5,
//                     "next" : {
//                             "value" : 5,
//                             "next" : nullptr  =======> TAILS
//                         }
//                 }
//             }
// }


#include <iostream>
using namespace std;

// class Linkdlist
// {
 
// public:
//     Linkdlist(/* args */); // crete new node 
//     void append(){}  // crete new node and append in the end
//     void prepend(){}  // crete new node and append in the end
//     bool insret(){}  // crete new node and append in the end
     
    
// };

class Node{
   
public:
    int value;
    Node* next;

    Node(int val){
        this->value = val;
        this->next = nullptr; 
    }
};
 

class Linkdlist{
    private:
        Node* head;
        Node* tail;
        int length;
    public:
        Linkdlist(int value){
            Node* newNode = new Node(value);
            // head + tail point to the new node that will created
            head = newNode;
            tail = newNode;
            length = 1;
        };
      

        void append(int value){
            Node* newNode = new Node(value);
            
            if (length == 0){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }

            length++;
            
        }
        void printList(){
            Node* temp = head;
            while (temp != nullptr)
            {
                cout<< temp->value<<endl;
                temp = temp->next;
            }
            
        }

        void deleteLast(){
            Node* temp = head;
            Node* pre = head;
            if (length == 0) return;
    
            while (temp->next)
            {
                pre = temp;
                temp = temp->next;
            }
            tail = pre;
            tail->next = nullptr;
            length--;

            if (length == 0)
            {
                head = nullptr;
                tail = nullptr;
            }
            delete temp;
            
        }
        void getHead(){
            cout<<"head "<<head->value<<endl;

        }
        void getTail(){
            cout<<"Tail "<<tail->value<<endl;
        }
        void getLength(){
            cout<<"length "<<length<<endl;
        }
};
 

// create new linkdlist



int main(int argc, char const *argv[])
{
    Linkdlist* mylinkdlist = new Linkdlist(5);  // 5 is value that passed to linkdlist node
    
    mylinkdlist->append(6);

    mylinkdlist->getHead();
    mylinkdlist->getTail();
    mylinkdlist->getLength();
    mylinkdlist->printList();

    return 0;
}
