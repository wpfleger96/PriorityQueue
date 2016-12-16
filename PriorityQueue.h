/*
PriorityQueue.h
Author: Will Pfleger
Submission Date: 10/6/16  
Purpose: this is the header file for the PriorityQueue. It defines all properties of the PriorityQueue as well as its Nodes
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

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

using namespace std;

//Represents the Node type
template<typename T>
struct Node{
  T contents;
  Node* next;
  Node* prev;
  int priority;
};

//Represents the PriorityQueue type
template<typename T>
class PriorityQueue{
 private:
  int length;
  Node<T>* first;
  Node<T>* last;
  
 public:
  PriorityQueue();
  void enqueue(T value, int priority);
  T dequeue();
  T peek();
  int peekPriority();
  void clear();
  void print();
  int size();
  bool isEmpty();
};
  
#endif
