//
// Created by chris on 2021/12/12.
//

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Sort {
public:
    /**

     * @param v
     */
    void BubbleSort(vector<int> &v) {
        int len = v.size();
        for (int i = 0; i < len - 1; ++i) {
            for (int j = 0; j < len - 1; ++j) {
                if (v[j] > v[j + 1]) {
                    int temp = v[j + 1];
                    v[j + 1] = v[j];
                    v[j] = temp;
                }
            }
        }
    }

    void SelectSort(vector<int> &arr) {
        for (int i = 0; i < arr.size(); ++i) {
            int minTempIndex = i;
            for (int j = i + 1; j < arr.size(); ++j) {
                if (arr[j] < arr[minTempIndex]) {
                    minTempIndex = j;
                }
            }
            //swap
            int temp = arr[minTempIndex];
            arr[minTempIndex] = arr[i];
            arr[i] = temp;
        }
    }

    void InsertSort(vector<int> &arr) {
        int len = arr.size();
        for (int i = 0; i < len; ++i) {
            int temp = arr[i];
            for (int j = i - 1; j >= 0; --j) {
                if (arr[j] > temp) {
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                } else {
                    break;
                }
            }
        }
    }

    /**
     * 尔排序也称为缩小增量排序，是插入排序的一种更高级的改进版本。
     * 插入排序对大规模的乱序数据数组的效率是比较低的，因为他每次都只能将数据移动一位，
     * 希尔排序；为了加快插入的速度，让数据移动的时候可以实现跳跃移动，节省了一部分的开支。
     * @param arr
     */
    void ShellSort(vector<int> &arr) {
        int h = 1;
        while (h < arr.size() / 3)
            h = h * 3 + 1;//h = 4
        while (h >= 1) {
            for (int i = h; i < arr.size(); i++) {
                for (int j = i; j >= h && arr[j] < arr[j - h]; j -= h) {
                    int temp = arr[j];
                    arr[j] = arr[j - h];
                    arr[j - h] = temp;
                }
            }
            h /= 3;
        }
    }

    /**
     * 归并排序的思想是分治思想，就是将一个数组一刀切为两半，
     * 递归切，直到切成单个元素，然后重新组装合并，单个元素合并成小数组，
     * 两个小数组合并成大数组，直到最终合并完成，排序完毕。
     */

    void MergeSort(vector<int> &arr){
        int len = arr.size();
        vector<int> a = arr;
        vector<int> b = vector<int>(len);
        for (int seg = 1; seg < len; seg += seg) {
            for (int start = 0; start < len; start += seg + seg) {
                int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
                int k = low;
                int start1 = low, end1 = mid;
                int start2 = mid, end2 = high;
                while (start1 < end1 && start2 < end2)
                    b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
                while (start1 < end1)
                    b[k++] = a[start1++];
                while (start2 < end2)
                    b[k++] = a[start2++];
            }
            vector<int> temp = a;
            a = b;
            b = temp;
        }
        if (a != arr) {
            for (int i = 0; i < len; i++)
                b[i] = a[i];
            b = a;
        }
//        delete[] b;
    }
};





void testBubbleSort(){
    vector<int> arr = {5,4,8,10,28,9,777,44};
    Sort *p = new Sort();
    p->BubbleSort(arr);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void testSelectSort(){
    vector<int> arr = {5,4,8,10,28,9,777,44};
    Sort *p = new Sort();
    p->SelectSort(arr);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void testInsertSort(){
    vector<int> arr = {5,4,8,10,28,9,777,44};
    Sort *p = new Sort();
    p->InsertSort(arr);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void testShellSort(){
    vector<int> arr = {5,4,8,10,28,9,777,44};
    Sort *p = new Sort();
    p->ShellSort(arr);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void testMergeSort(){
    vector<int> arr = {5,4,8,10,28,9,777,44};
    Sort *p = new Sort();
    p->MergeSort(arr);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
//    testBubbleSort();
//    testSelectSort();
//    testInsertSort();
//    testShellSort();
    testMergeSort();
    return 0;
}