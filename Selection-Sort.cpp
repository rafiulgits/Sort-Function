#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int data[],int len);
int main()
{
    int len; while(cin>>len)
    {
        int data[len];
        for(int i=0;i<len;i++)
            cin>>data[i];

        SelectionSort(data,len);
        puts("Sorted Complete");
        for(int i=0;i<len;i++)
            cout<<data[i]<<" ";
        cout<<endl;
    }
}
void SelectionSort(int data[],int len)
{
    unsigned int flag=999999999;
    for(int i=0;i<len-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<len;j++)
        {

            /* This condition is for ascending order
               For descending order sort use
               if(data[j]=>data[minIndex])
            */
            if(data[j]<=data[minIndex])
                minIndex=j;
        }
        swap(data[i],data[minIndex]);
    }
}
