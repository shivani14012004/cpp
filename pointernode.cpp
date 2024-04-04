#include <iostream>
using namespace std;
class Node{
          public: int data;
           Node*next;
           Node*nn;
};
class List{
      private: Node*head;

      public: List(){
               head=NULL;
      }

      void insertNode(int d)
{
         Node*nn=new Node;
         nn->data=d;
         nn->next=NULL;
         head=nn;
}
     void displayNode()
{
    cout<<*nn<<endl; 
}
};
int main()
{
      List l1;
      List l2;

      l1.insertNode(4);
      l2.displayNode();

return 0;
}


