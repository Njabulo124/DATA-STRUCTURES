#include<iostream>
#include "Header.h"
using namespace std;



int main() {
// Create a queue with a maximum capacity of 8
QueueOfProcess q;

// Read in eight processes from the keyboard
for (int i = 0; i < 8; i++) {
    // Get the process number, TTL, and priority from the user
    int number, ttl, priority;
    cout << "Enter process number (1000-2000): ";
    cin >> number;

    // Check for termination condition (process number 0)
    if (number == 0) break;

    cout << "Enter process number TTL (1-25): ";
    cin >> ttl;
    cout << "Enter process number priority (0 or 1): ";
    cin >> priority;

    // Create a new process object with the given number, TTL, and priority
    Process process;
    process.number = number;
    process.ttl = ttl;
    process.priority = priority;

    // Enqueue the process in the queue
    q.enqueue(process);
}

// Process the circular queue with priorities
while (!q.isEmpty()) {
    // Dequeue the front process
    Process currentProcess = q.dequeue();

    // If the process has priority 0, decrease its TTL by 2
    if (currentProcess.priority == 0) {
        currentProcess.ttl -= 2;
    } else {
        // If the process has priority 1, decrease its TTL by 1
        currentProcess.ttl -= 1;
    }

    // If the process has finished running, print a message and remove it from the queue
    if (currentProcess.ttl > 0) {
        q.enqueue(currentProcess);
    } else {
        cout << "Process " << currentProcess.number << " finished running.\n";
    }
}

return 0;
}

