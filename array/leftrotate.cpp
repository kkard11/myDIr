// Array Left Rotation
// It works on the following principal
// A'B, AB' (A'B')' = BA
// So, basically divide array in two subarray ie A and B.
// reverse first subarray -> A'
// reverse second subarray -> B'
// reverse both subarray -> (A'B') = BA <- output


// this method should work for any kind (sorted/unsorted) array
#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int> &A, int start, int end) {
    int temp;
    while(start < end) {
        temp = A[start];
        A[start] = A[end];
        A[end] = temp;
        start++;
        end--;
    }
}

void printArray(vector<int> &A, int n){
    for(int i=0; i < n; i++)
        cout << A[i] << " ";
}

void leftRotate(vector <int> &A, int n, int d){
    Reverse(A, 0, d-1);
    Reverse(A, d, n-1);
    Reverse(A, 0, n-1);
}


int main() {

    int n, arrsize,d;

    vector<int> arr(n);
    cin >> n;
    cin >> d;
    for (int arr_i = 0; arr_i < n; arr_i++)
        cin >> arr[arr_i];

    arrsize = sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr, n, d);
    printArray(arr, n);
    return 0;
}
