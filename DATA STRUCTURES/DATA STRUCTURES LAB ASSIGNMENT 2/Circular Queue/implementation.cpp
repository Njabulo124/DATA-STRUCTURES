#include "Header.h"
#define size 8

QueueOfProcess :: QueueOfProcess() {
// Initialize the queue with the specified size
capacity = size;
// Allocate memory for the queue using new[]
processes = new Process[size];
// Initialize the front and rear pointers to the beginning of the queue
front = 0;
rear = -1;
}

QueueOfProcess :: ~QueueOfProcess() {
// Delete the memory allocated for the queue using delete[]
delete[] processes;
}

void QueueOfProcess :: enqueue(Process process) {
// Increment the rear pointer to add a new process to the end of the queue
processes[++rear] = process;
}

Process QueueOfProcess :: dequeue() {
// Check if the queue is empty
if (isEmpty()) {
// If the queue is empty, print a message and return a special "empty" process
cout << "Queue is empty. Cannot dequeue.\n";
Process emptyProcess;
emptyProcess.number = -1;
return emptyProcess;
}
// Return the front process and increment the front pointer
Process frontProcess = processes[front++];
return frontProcess;
}

bool QueueOfProcess :: isEmpty() {
// Check if the queue is empty by comparing the front and rear pointers
return front > rear;
}

/*QueueOfProcess :: QueueOfProcess() {
    capacity = size;
    processes = new Process[size];
    front = 0;
    rear = -1;
}

QueueOfProcess :: ~QueueOfProcess() {
    delete[] processes;
}

void QueueOfProcess :: enqueue(Process process) {

    processes[++rear] = process;
}

Process QueueOfProcess :: dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot dequeue.\n";
        Process emptyProcess;
        emptyProcess.number = -1;
        return emptyProcess;
    }
    Process frontProcess = processes[front++];
    return frontProcess;
}

bool QueueOfProcess :: isEmpty() {
    return front > rear;
}
*/
