class MinStack {
private:
int* arr;
int size;
public:
    MinStack() {
        arr = new int[size];
        size = 0;
    }
    
    void push(int val) {
        arr[size] = val;
        size++;
    }
    
    void pop() {
        size--;
    }
    
    int top() {
        return arr[size - 1];
    }
    
    int getMin() {
        int min = arr[0];
        for(int i = 0; i < size; i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }
};
