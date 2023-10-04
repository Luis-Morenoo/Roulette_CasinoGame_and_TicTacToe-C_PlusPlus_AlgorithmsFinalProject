#include "queue.h"

void queue::enqueue(string ans)
{
	if (back == n - 1) {// detects if queue is full by using n - 1
		cout << "Queue is full" << endl;
	}
	else {
		if (front == -1) {// detects if the front is -1 then it adds 1 and element is inserted to the rear
			front = 0;
		}
		back = back + 1;
		queue[back] = ans;
	}
}

void queue::dequeue()
{
	if (front == -1 || front > back) {// detects if queue is empty
		cout << "No players in Queue ";

	}
	else {
		ans = queue[front];// displays which patient is taken away from the queue and front adds 1
		front = front + 1;

	}
}

