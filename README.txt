/*
README.txt
Author: Will Pfleger
Submission Date: 10/6/16  
Purpose: this provides more information about my project
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

PriorityQueue.cpp implements a priority queue in which nodes are composed of contents and a priority value. The contents can by any data type as this queue is implemented using a template. The queue is organized with respect to the priority value (an integer; the lower the number the higher the priority). To use this program, make use of Makefile and PriorityTest.cpp. You can open PriorityTest.cpp to change difference scenarios (e.g. what type of data to fill nodes with, how many nodes, different priorities) as well as testing the different functions available to PriorityQueue instances (enqueue(T value, int priority), dequeue(), peek(), peekPriority(), clear(), size(), isEmpty()). Once you have changed the PriorityTest.cpp to your satisfaction, utilize the Makefile to run the program. To compile, enter "make compile" in the command line. To run, type "make run". To remove previously compiled code, type "make clean".