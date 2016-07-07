// find how many times array has been rotated
// array should not have any duplicates
// instead of index if we return the number then we will get minimum element in the sorted array
// time complexity O(logn)


//#include <iostream>
////#include <stdio.h>
//using namespace std;
//
//int rotateArray(int A[], int low, int high)
//{
//    int n=sizeof(A)/sizeof(A[0]);
//    while(low<=high) {
//        if (A[low] <= A[high])
//            return low;
//        int mid = (low+high)/2;
//        int next = (mid+1)%n;
//        int prev = (mid+n-1)%n;
//        if (A[mid]<=A[next] && A[mid] <= A[prev])
//        {
//            return mid;
//        }
//        else if (A[low] <= A[mid])
//        {
//            //low=mid+1;
//            return rotateArray(A, mid+1, high);
//        }
//
//        else if (A[mid] <= A[high])
//        {
//            //high=mid-1;
//            return rotateArray(A, low, mid-1);
//        }
//    return -1;
//    }
//}
//int main(){
//    int A[] = {11, 12, 13, 14, 15, 16, 17, 1};
//    int n=sizeof(A)/sizeof(A[0]);
//    int nocount=rotateArray(A, 0, n-1);
//    cout << "array has been rotated:" << nocount;
//    //printf("stupid");
//    //cout << "array ratate";
//    return 0;
//}


#include <iostream>
//#include <stdio.h>
using namespace std;

int rotateArray(int A[], int n)
{
    int low=0, high=n-1;
    while(low<=high) {
        if (A[low] <= A[high])
            return low;
        int mid = (low+high)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        if (A[mid]<=A[next] && A[mid] <= A[prev])
        {
            return mid;
        }
        else if (A[low] <= A[mid])
        {
            low=mid+1;
        }

        else if (A[mid] <= A[high])
        {
            high=mid-1;
            //return rotateArray(A, low, mid-1);
        }

    }
    return -1;
}
int main(){
    int A[] = {11, 12, 13, 14, 15, 16, 17, 1};
    int n=sizeof(A)/sizeof(A[0]);
    int nocount=rotateArray(A,n);
    cout << "array has been rotated:" << nocount;
    //printf("stupid");
    //cout << "array ratate";
    return 0;
}

