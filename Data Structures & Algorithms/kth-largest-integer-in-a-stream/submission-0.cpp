class KthLargest {
public:
vector<int> vec;
int k;
    KthLargest(int k, vector<int>& nums) {
        this->vec = nums;
        this->k = k;
    }
    
    int add(int val) {
        vec.push_back(val);
        sort(vec.begin(), vec.end());
        return vec[vec.size() - k];
    }
};
