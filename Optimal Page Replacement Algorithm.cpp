#include<iostream>
using namespace std;
class Queue
{
	int front = -1;
	int rear = -1;
	int *ptr;
	int size;
public:
	Queue(int n)
	{
		size = n;
		ptr = new int[size];
	}
	void enqueue(int num)
	{
		if (!isFull())
		{
			front++;
			ptr[front % size] = num;
		}
		else
			cout << "\nThe Queue is FULL !!\n";
	}
	int dequeue()
	{
		if (!isEmpty())
		{
			rear++;
			return ptr[rear % size];
		}
		else
			cout << "\nThe Queue is Empty !!\n";
	  return 0;
	}
	bool search(int key)
	{
		bool flag = false;
		for (int i = 0; i < size; i++)
		{
			if (ptr[i] == key)
			{
				flag = true;
			}
		}
		return flag;
	}
	bool isFull()
	{
		if (front - rear == size)
			return true;
		else
			return false;
	}
	bool isEmpty()
	{
		if (front == rear)
			return true;
		else
			return false;
	}
};
int main()
{
	int pages, currentPage, frames, temp, pageFault = 0;
	cout << "Enter the Total Pages= ";
	cin >> pages;
	cout << "Enter the number of Frames= ";
	cin >> frames;
	cout << endl;
	Queue queue1(frames);
	bool flag;
	for (int i = 0; i < pages; i++)
	{
		cout << "Enter Page Number= ";
		cin >> currentPage;
		flag = queue1.search(currentPage);
		if (flag == false)
		{
			if (queue1.isFull())
				temp = queue1.dequeue();
			queue1.enqueue(currentPage);
			pageFault++;
		}
	}
	cout << "\n\nPage fault= " << pageFault << endl << endl;
	system("pause");
}

