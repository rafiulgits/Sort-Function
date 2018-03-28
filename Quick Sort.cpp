#include<iostream>
#include<stdio.h>
using namespace std;

void QuickSort(int start, int stop, int data[]);
int pivot(int start, int stop, int data[]);
void swapData(int value1, int value2);


int main()
{
    int len; cin>>len; int data[len];
    for(int i=0; i<len; i++)
        cin>>data[i];
    QuickSort(0,len,data);
    for(int i=0; i<len; i++)
        cout<<data[i]<<" ";
}

void QuickSort(int start, int stop, int data[])
{
    if(start<stop)
    {
        int cap = pivot(start, stop, data);
        QuickSort(start, cap-1, data);
        QuickSort(cap+1, stop, data);
    }
}
int pivot(int start, int stop, int data[])
{
    int pivotValue = data[stop];
    int pivotIndex = start;

    for(int i=start; i<stop; i++)
    {
        if(data[i]<=pivotValue)
        {
            int temp = data[i];
            data[i] = data[pivotIndex];
            data[pivotIndex] = temp;

            pivotIndex++;
        }
    }
    int temp = data[stop];
    data[stop] = data[pivotIndex];
    data[pivotIndex] = temp;

    return pivotIndex;
}
