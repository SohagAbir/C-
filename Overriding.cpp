
#include<iostream>

using namespace std;

class MyClass {
    
    public:
    int data;
    
    void setData(int d) {
        data = d;
        cout << "Data : " << data*data << endl;
    }
};

class derived : public MyClass {

    public:
  
        void setData(int d) {
        data = d;
        cout << "Derived Data : " << data*data*data << endl;
    }
};

int main() {
    MyClass obj1;
    obj1.setData(10);
    
    derived obj2;
    obj2.setData(20);

}

