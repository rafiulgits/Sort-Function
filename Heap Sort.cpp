#include<stdio.h>
#include<iostream>
using namespace std;

void heapy(int start , int stop, int data[]);
void heapSort(int start, int stop, int data[]);

int main()
{
    int len; cin>>len; int data[len];
    for(int i=0; i<len; i++)
        cin>>data[i];
    heapSort(0, len, data);
    for(int i=0; i<len; i++)
        cout<<data[i]<<" ";
    cout<<endl;
}
void heapy(int start , int stop, int data[])
{
    int largest_value_iudex = start;
    int left_index = 2*start+1;
    int right_index = 2*start+2;

    if(left_index<stop && data[left_index]>data[largest_value_iudex])
    {
        largest_value_iudex = left_index;
    }
    if(right_index<stop && data[right_index]>data[largest_value_iudex])
    {
        largest_value_iudex = right_index;
    }

    if(largest_value_iudex != start)
    {
        int temp = data[start];
        data[start] = data[largest_value_iudex];
        data[largest_value_iudex] = temp;


        /* recursion call*/
        heapy(largest_value_iudex, stop, data);
    }
}
void heapSort(int start, int stop, int data[])
{
    /* Build Max heap*/
    for(int i=stop/2-1; i>=0; i--)
    {
        heapy(i, stop, data);
    }

    /* heap sort functionality*/
    for(int i=stop-1; i>=0; i--)
    {
        int temp = data[i];
        data[i] = data[0];
        data[0] = temp;

        heapy(0, i, data);
    }
}
