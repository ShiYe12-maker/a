#include <iostream>
#include <vector>

using namespace std;

// 故意留有逻辑问题的函数：寻找数组最大值
int findMax(int arr[], int size) {
    int maxVal = arr[0]; // 思考：如果数组里全是负数，这个初始值会有什么问题？
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {
    int myNumbers[] = {-10, -5, -20, -2, -15};
    int n = sizeof(myNumbers) / sizeof(myNumbers[0]);

    cout << "--- 调试练习程序 ---" << endl;

    double avg = calculateAverage(myNumbers, n);
    int maxV = findMax(myNumbers, n);

    cout << "平均值: " << avg << endl;
    cout << "最大值: " << maxV << endl; // 这里会输出 0，而不是 -2

    return 0;
}