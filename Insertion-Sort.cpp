#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int data[],int len);
int main()
{
    int len; while(cin>>len)
    {
        int data[len];
        for(int i=0;i<len;i++)
            cin>>data[i];

        InsertionSort(data,len);
        puts("Sorted Complete");
        for(int i=0;i<len;i++)
            cout<<data[i]<<" ";
        cout<<endl;
    }
}
void InsertionSort(int data[],int len)
{
    for(int i=1;i<len;i++)
    {
        int currentValue=data[i];
        int index=i;

        /* Here this condition is for ascending order sorting
           For descending order sorting use
           while(index>0 && data[index-1]<currentValue)
        */
        while(index>0 && data[index-1]>currentValue)
        {
            data[index]=data[index-1];
            index--;
        }
        data[index]=currentValue;
    }
}
