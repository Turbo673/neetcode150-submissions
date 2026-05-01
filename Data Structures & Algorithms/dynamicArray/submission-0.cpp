class DynamicArray {
    private:
    int cap;
    int size;
    int* arr;
public:

    DynamicArray(int capacity) {
        if(cap <= 0) cap = 1;
        cap = capacity; 
        size = 0;
        arr = new int[cap];
    }

    ~DynamicArray() {
        delete[] arr;
        arr = nullptr;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(size == cap) resize();
        arr[size] = n;
        size++;
    }

    int popback() {
        int val  = arr[size - 1];
        size--;
        return val;
    }

    void resize() {
             int newCap = cap * 2;
      int* newArr = new int[newCap];
      for(int i = 0; i < size; i++) {
        newArr[i] = arr[i];
      }
      delete[] arr;
      arr = newArr;
      cap = newCap;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return cap;
    }
};
