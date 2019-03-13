#include <iostream>
#include <queue>

using namespace std;

void printQueue(queue<int>);

int main() {
	queue<int> someQueue;

	if (someQueue.empty())
		cout << "Queue is currently empty..." << endl;

	for (int i = 0; i < 3; i++) {
		someQueue.push(i);
		cout << i << " has been pushed into the queue!" << endl;
	}

	printQueue(someQueue);

	cout << "The front of this queue is: " << someQueue.front() << endl;
	cout << "The back of this queue is: " << someQueue.back() << endl;
	cout << "The queue size is: " << someQueue.size() << endl;

	system("pause");
	return 0;
}

void printQueue(queue<int> someQueue) {
	int i = 0;
	while (!someQueue.empty()) {
		cout << "Position " << i << ": " << someQueue.front() << endl;
		i++;
		someQueue.pop();
	}
}