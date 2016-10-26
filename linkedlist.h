#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"
#include<iostream>
using std::cout;

// TODO your code goes here:

template<typename T>
class LinkedList{
 
private:
    Node<T> * head,*tail;
    int count;
    
public:
    LinkedList()
        :head(nullptr),tail(nullptr),count(0){
    }
    
    ~LinkedList(){
        
        if(count!=0){
        
            Node<T>* temp=head;
            
            while(temp!=nullptr){
                    
                Node<T>* temp2=temp->next;
                delete temp;
                count--;
                temp=temp2;
                
            }
        }
        
    }
    
    void push_front(T dataIn){
     
        if(count==0){
            head=tail=new Node<T>(dataIn);
        }
        
        else{
            Node<T> * temp=new Node<T>(dataIn);
            temp->next=head;
            head->previous=temp;
            
            head=temp;
            
        }
        
        ++count;
         
    }
    
    const T front() const {
        
        return head->data;
        
    }
    
    void push_back(T dataIn){
        
        Node<T> *temp=new Node<T>(dataIn);
        
        if(count==0){
            head=tail=temp;
        }
        else{
                
            temp->previous=tail;
            tail->next=temp;
            
            tail=temp;
        
        }
        
        ++count;
        
    }
    
    const T back() const {
    
        return tail->data;
        
    }
    
    int size(){
        
        return count;
        
    }
    
    NodeIterator<T> begin() const {
        
        return NodeIterator<T> (head);
        
    }
    
    NodeIterator<T> end() const {
        
        return NodeIterator<T>(tail->next);
    }
    
    
    
    
};


// do not edit below this line

#endif
