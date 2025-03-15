#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;  // 陣列大小
    int numbers[SIZE];   // 宣告整數陣列

    // 輸入數字
    cout << "請輸入 " << SIZE << " 個數字：" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "輸入第 " << i + 1 << " 個數字: ";
        cin >> numbers[i];
    }

    // 輸出數字
    cout << "你輸入的數字是：" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
