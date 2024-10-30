class MyCircularQueue {
    private:
        int *arr;
        int front, rear, size, capacity;
    public:
        MyCircularQueue(int k) {
            capacity = k;
            arr = new int[capacity];
            front = -1;
            rear = -1;
            size = 0;
        }
        bool enQueue(int value) {
            if (isFull()) return false;
            if (isEmpty()) front = 0;
            rear = (rear + 1) % capacity;
            arr[rear] = value;
            size++;
            return true;
        }
        bool deQueue() {
            if (isEmpty()) return false;
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % capacity;
            }
            size--;
            return true;
        }
        int Front() {
            return isEmpty() ? -1 : arr[front];
        }

        int Rear() {
            return isEmpty() ? -1 : arr[rear];
        }
        bool isEmpty() {
            return size == 0;
        }
        bool isFull() {
            return size == capacity;
        }
        ~MyCircularQueue() {
            delete[] arr;
        }};

/**
 * Usage:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
