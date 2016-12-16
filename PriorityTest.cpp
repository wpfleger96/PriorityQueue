/*
PriorityTest.cpp
Author: Will Pfleger
Submission Date: 10/6/16  
Purpose: this program is the tester for my PriorityQueue. You can comment/un-comment sections of the tester to simulate difference situations. More instructions below.
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
#include <string>
#include "PriorityQueue.h"
#include "PriorityQueue.cpp"

using namespace std;

int main(){
  //Initalizes queue
  PriorityQueue<char> queue;
  //PriorityQueue<int>  queue;
  
  //Queue with characters
  queue.enqueue('a', 1);
  queue.enqueue('b', 2);
  queue.enqueue('c', 3);

  //Queue with integers
  queue.enqueue(3, 1);
  queue.enqueue(6, 1);
  queue.enqueue(9, 3);

  //Print queue contents to console;
  queue.print();

  //Dequeue Node members
  queue.dequeue();
  queue.dequeue();

  //Clear the queue
  queue.clear();

  //Test of peek/peekPriority, size, and is empty
  cout << "Peek: " << queue.peek() << endl;
  cout << "PeekPriority: " << queue.peekPriority() << endl;
  cout << "Size : " << queue.size() << endl;
  cout << "Queue is empty: " << (queue.isEmpty()==1?"true":"false") << endl;
  return 0;
}
