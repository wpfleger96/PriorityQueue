/*
PriorityQueue.cpp
Author: Will Pfleger
Submission Date: 10/6/16  
Purpose: this program is the implementation of a PriorityQueue. It takes in template values and priorities and organizes them with respect to priority.
         The constructor is specified as well as functions to enqueue/dequeue, peek/peekPriority, clear the queue, and determine size/emptyness.
Statement of Academic Honesty:
The following code represents my own work. I have neither received nor given inappropriate
assistance. I have not copied or modified code from any source other than the course webpage or
the course textbook. I recognize that any unauthorized assistance or plagiarism will be handled in
accordance with the University of Georgia's Academic Honesty Policy and the policies of this
course. I recognize that my work is based on an assignment created by the Department of
Computer Science at the University of Georgia. Any publishing or posting of source code for this
project is strictly prohibited unless you have written consent from the Department of Computer
Science at the University of Georgia.
*/

#include <iostream>
#include <array>
#include "PriorityQueue.h"

using namespace std;

//Constructor
template<typename T>
PriorityQueue<T>::PriorityQueue(){
  first = last = NULL;
}

//Enqueues the given value based on its priority
template <typename T>
void PriorityQueue<T>::enqueue(T value, int p){
  Node<T>* add = new Node<T>();
  add->contents = value;
  add->priority = p;
  //Node to add goes first
  if(first == NULL || p < first->priority){
    add->next = first;
    first = add;
  }
  //Node goes somewhere else in the queue
  else{
    Node<T>* temp = first;
    while(temp->next != NULL && temp -> priority < p){
      temp = temp -> next;
    }
    add -> next = temp -> next;
    temp -> next = add;
  }
}

//Removes the highest priority node from the queue and returns its contents to the user
template<typename T>
T PriorityQueue<T>::dequeue(){
  Node<T>* temp;
  temp = first;
  first = first->next;
  T content = temp->contents;
  delete temp;
  return content;
}


//Prints the contents of the queue to the console
template<typename T>
void PriorityQueue<T>::print(){
  Node<T>*temp = first;
  while(temp != NULL){
    cout << temp->contents << " " << temp-> priority << endl;
    temp = temp->next;
  }
}

//Returns the contents of the node with the highest priority 
template<typename T>
T PriorityQueue<T>::peek(){
  return first->contents;
}

//Returns the highest priority value
template<typename T>
int PriorityQueue<T>::peekPriority(){
  return first->priority;
}

//Removes all items in the queue
template<typename T>
void PriorityQueue<T>::clear(){
  while(first != NULL){
    Node<T>* temp = first;
    first = first->next;
    delete temp;
  }
}


//Returns the size of the queue 
template<typename T>
int PriorityQueue<T>::size(){
  if(first == NULL)
    return 0;
  else if(first == last)
    return 1;
  int count = 0;
  Node<T>* temp = first;
  while(temp != NULL){
    temp = temp->next;
    count++;
  }
  return count;
}

//Determines if the queue is empty 
template<typename T>
bool PriorityQueue<T>::isEmpty(){
  if(first == NULL)
    return true;
  else 
    return false;
}
