#include "node.h"
#include "linkedlist.h"

#include <iostream>
using std::cout;
using std::endl;

int main(){

    LinkedList<int> ll;
    
    Node<int> *a=new Node<int>(10);
    Node<int> *b=new Node<int>(20);
    
    ll.push_front(a->data);
    ll.push_front(b->data);
    
    NodeIterator<int> itr=ll.begin();
    
    ll.push_back(25);
    
    while(itr!=nullptr){
        
        cout<<*itr<<"  ";
        ++itr;
        
    }
    LinkedList<char> lc;
    //a->next=b; b->previous=a;
    //cout<<a->previous<<"  "<<a<<"  "<<a->next<<endl;
    //cout<<b->previous<<"  "<<b<<"  "<<b->next<<endl;
    
    
}