/****************************************************

Psuedo code

start program


// Define a structure to represent a process
Structure Process:
    Integer number // Process identifier (in the range 1000 to 2000)
    Integer ttl    // Time to live in milliseconds (in the range 1 to 25)

// Initialize a queue to store processes
QueueOfProcess q

// Read up to eight processes from the keyboard and enqueue them
Repeat for i from 1 to 8:
    Integer number, ttl
    Display "Enter process number (1000-2000): "
    Input number

    // Check for termination condition (enter 0 for process number)
    If number is 0:
        Exit loop

    Display "Enter process TTL (1-25): "
    Input ttl

    // Create a Process object and enqueue it
    process = Create Process with number and ttl
    q.enqueue(process)

// Process the queue until it's empty
Repeat until q is empty:
    // Dequeue the next process
    currentProcess = q.dequeue()

    // Decrement the time to live (ttl) by 1 millisecond (representing a quantum)
    currentProcess.ttl = currentProcess.ttl - 1

    // If the process still has time left, re-enqueue it
    If currentProcess.ttl > 0:
        q.enqueue(currentProcess)
    Else:
        // The process has finished running, print its number
        Display "Process " + currentProcess.number + " finished running."

// End of program


*********************************************************************/

#include<iostream>
using namespace std;

// Define a structure to represent a process, including its number and TTL (Time to Live).
struct Process {
    int number; // Process identifier or number.
    int ttl;    // Time to Live (how long the process can run).
};

// Define a class for a Queue of Process objects.
class QueueOfProcess {
private:
    Process* processes; // An array to hold the processes.
    int front;          // Index for the front of the queue.
    int rear;           // Index for the rear of the queue.
    int capacity;       // Maximum capacity of the queue.

public:
    // Constructor to initialize the queue.
    QueueOfProcess();

    // Destructor to clean up memory.
    ~QueueOfProcess();

    // Enqueue a process into the queue.
    void enqueue(Process process);

    // Dequeue and return the front process from the queue.
    Process dequeue();

    // Check if the queue is empty.
    bool isEmpty();
};

