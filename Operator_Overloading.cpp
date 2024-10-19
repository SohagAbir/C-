#include<iostream>
using namespace std;
class Sum {
    int num1, num2;
    public:
    void input(int a, int b) {
         num1 = a;
         num2 = b;
    }
    Sum operator+(Sum obj){
        Sum temp;
        temp.num1 = num1 + obj.num1;
        temp.num2 = num2 + obj.num2;
        return temp;
    }
    void display() {
        cout << "Sum of two numbers: " << num1 + num2 << endl;
        cout << "Difference of two numbers: " << num1 - num2 << endl;
        cout << "Product of two numbers: " << num1 * num2 << endl;
        cout << "Quotient of two numbers: " << num1 / num2 << endl;
        cout << "Remainder of two numbers: " << num1 % num2 << endl;
    }


};

int main() {
    Sum obj1, obj2;
    obj1.input(5, 10);
    obj2.input(3, 8);
    Sum obj3 = obj1 + obj2;
    obj3.display();
    return 0;

   

}
