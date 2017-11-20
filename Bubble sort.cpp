#include <bits/stdc++.h>
using namespace std;
void BubbleSortAscending(int *data, int start, int stop);
void BubbleSortDescending(int *data, int start, int stop);
int main()
{
    int len; cin>>len; int data[len];
    for(int i=0;i<len;i++) cin>>data[i];
    BubbleSortDescending(data,0,len);
    for(int i=0;i<len;i++) cout<<data[i]<<" ";
}
void BubbleSortAscending(int *data, int start, int stop)
{
    for(int i=start;i<stop-1;i++)
    {
        for(int j=i;j<stop;j++)
        {
            if(data[i]>data[j])
            {
                int temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
}
void BubbleSortDescending(int *data, int start, int stop)
{
    for(int i=start;i<stop-1;i++)
    {
        for(int j=i;j<stop;j++)
        {
            if(data[i]<data[j])
            {
                int temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
}
