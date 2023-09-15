#include <iostream>
#include <vector>
using namespace std;

template<typename T>

class VectorT {
    private:
    vector<T> myVec;

    public:
    VectorT(vector<T> myVec = {}) {
        this->myVec = myVec;
    }

    void insert(T val) {
        myVec.push_back(val);
    }

    void show() {
        for (T val: myVec) {
            cout << val << "\n";
        }
    }
};

int main() {
    cout << "testing \n";
    
    VectorT myVec(vector<int>{14, 88, 1488});
    myVec.show();
    cout << "\n";
    myVec.insert(69);
    myVec.show();
    cout << "\n";
    
    return 0;
}