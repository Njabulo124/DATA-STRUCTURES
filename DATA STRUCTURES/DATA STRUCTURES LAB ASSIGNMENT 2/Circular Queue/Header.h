/***********************************************

_____Psuedo code_________

program start

Initialize a circular queue 'q' of size MAX (8)
Set the front and rear pointers of the queue to -1 and -1 respectively
Set the maximum time to live for a process to 25
Set the priority of a process to either 0 or 1
Read in 8 processes from the keyboard
	For each process, read in the number (in range 1000-2000), time to live (in range 1-25), and priority (0 or 1)
	  If the priority is 1, subtract 1 from the time to live
 	  If the time to live is still positive, enqueue the process in the circular queue 'q'
      	Otherwise, print the process
For each process in the circular queue 'q', dequeue it and print it

program end
**********************************************/

#include <iostream>
using namespace std;

// Struct to represent a process
struct Process {
int number; // unique process number
int ttl; // time to live (time before process is terminated)
int priority; // priority of the process
};

// Class to represent a queue of processes
class QueueOfProcess {
private:
// Pointer to store the processes
Process* processes;


// Index of the front (next to be processed) and rear (last processed)
int front;
int rear;

// Capacity of the queue
int capacity;
public:
// Default constructor (initializes to empty queue)
QueueOfProcess();


// Destructor (frees memory)
~QueueOfProcess();

// Add a process to the back of the queue
void enqueue(Process process);

// Remove the process at the front of the queue 
Process dequeue();

// Check if the queue is empty
bool isEmpty();
};

