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
     //将[l1,r1]和[l2,r2]的有序序列合并成一个有序序列
    void merge(vector<int> &nums,int  l1,int r1,int l2,int r2){
        int i = l1;//左半部分起始位置
        int j = l2;//you半部分起始位置
        int n = (r1 - l1 + 1) + (r2 - l2 + 1);
        vector<int> temp(n);
        int k = 0;
        while (i <= r1 && j <= r2){
            if (nums[i] < nums[j])
                temp[k ++] = nums[i ++];
            else
                temp[k ++] = nums[j++];
        }
        //如果还有剩余就放进辅助数组中
        if(i <= r1)
            temp[k++] = nums[i++];
        while (j <= r2)
            temp[k++] = nums[j++];
        //更新原始数组元素
        for (int i = 0; i < n; ++i) {
            nums[l1 + i] = temp[i];
        }
    }
    void MergeSort(vector<int> &arr,int start,int end){
        if (start < end){
            int mid = (start + end) >> 1;
            MergeSort(arr,start,mid);
            MergeSort(arr,mid + 1,end);
            merge(arr,start,mid,mid + 1,end);//合并已经有序的数组
        }
    }


    void QuickSort(vector<int> &arr,int low,int high){
        if (low >= high)
            return;
        int first = low;
        int last = high;
        int key = arr[first];

        while (first < last){
            //将比第一个小的移动到前面
            while (first < last && arr[last] >= key)
                last --;
            if (first < last)
                arr[first++] = arr[last];
            //将比第一个大的移动到后面
            if(first < last && arr[first] <= key)
                first ++;
            if (first < last)
                arr[last--] = arr[first];

        }


        //基准置位
        arr[first] = key;
        QuickSort(arr,low,first - 1);
        QuickSort(arr,first + 1,high);
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
    p->MergeSort(arr,0,7);
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void testQUickSort(){
    vector<int> arr = {5,4,8,10,28,9,777,44};
    Sort *p = new Sort();
    p->QuickSort(arr,0,7);
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
//    testMergeSort();
    testQUickSort();
    return 0;
}