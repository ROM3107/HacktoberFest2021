#include<iostream>
#include<climits>
using namespace std;
void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void dnf_sort(int arr[],int n){
    int low=0;int mid=0;int high=n-1;
    while(mid<=high){
        switch (arr[mid])
        {
        case 0:
            swap(arr,low,mid);
            low++;mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr,mid,high);
            high--;
            break;
        }
    }
}
int main(){
    int arr[]={1,1,2,0,0,1,2,2,1,0};
    dnf_sort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}