//
// Created by chris on 2021/12/12.
//

#include <iostream>
using namespace std;
#include <vector>

class Sort{
public:
    /**

     * @param v
     */
    void BubbleSort(vector<int>&v){
        int len = v.size();
        for (int i = 0; i < len - 1; ++i) {
            for (int j = 0; j < len - 1; ++j) {
                if (v[j] > v[j + 1]){
                    int temp = v[j + 1];
                   v[j + 1] = v[j];
                    v[j] = temp;
                }
            }
        }
    }

    void SelectSort(vector<int> &arr){
        for (int i = 0; i < arr.size(); ++i) {
            int minTempIndex = i;
            for (int j = i + 1; j < arr.size(); ++j) {
                if (arr[j] < arr[minTempIndex]){
                    minTempIndex = j;
                }
            }
            //swap
            int temp = arr[minTempIndex];
            arr[minTempIndex] = arr[i];
            arr[i] = temp;
        }
    }

    void InsertSort(vector<int> &arr){
        int len = arr.size();
        for (int i = 0; i < len; ++i) {
            int temp = arr[i];
            for (int j = i - 1; j >= 0; --j) {
                if (arr[j] > temp){
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                } else{
                    break;
                }
            }
        }
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

int main(){
//    testBubbleSort();
//    testSelectSort();
    testInsertSort();
    return 0;
}