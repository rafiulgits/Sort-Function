#include<bits/stdc++.h>
using namespace std;
void MergeArray(int source[],int start, int mid, int stop);
void MergeSort(int data[],int start,int stop);
int main()
{
    int len; while(cin>>len)
    {
        int numArray[len];
        for(int i=0;i<len;i++)
            cin>>numArray[i];
        puts("Sorted Complete :");

        MergeSort(numArray,0,len-1);
        for(int i=0;i<len;i++)
            cout<<numArray[i]<<" ";
        cout<<endl;
    }
}

void MergeSort(int data[],int start,int stop)
{
    if(start<stop)
    {
        int mid=start+(stop-start)/2;
        MergeSort(data,start,mid);
        MergeSort(data,mid+1,stop);

        MergeArray(data,start,mid,stop);
    }
}
void MergeArray(int source[],int start, int mid, int stop)
{
    int len1=mid-start+1; int len2=stop-mid;
    int data1[len1]; int data2[len2];
    for(int i=0;i<len1;i++)
        data1[i]=source[start+i];
    for(int i=0;i<len2;i++)
        data2[i]=source[mid+1+i];
    int index=start, index1=0,index2=0;
    while(index1<len1 && index2<len2)
    {
        /* Here we use descending order condition.
           For ascending order use
           if(data1[index1]<=data2[index2])
        */
        if(data1[index1]>=data2[index2])
            source[index]=data1[index1],
            index++, index1++;
        else
            source[index]=data2[index2],
            index++, index2++;
    }

    /* Only one loop will execute during sorting.
       As because one partition of main array already
       inserted into the main array
     */

    while(index1<len1)
    {
        source[index]=data1[index1];
        index++; index1++;
    }
    while(index2<len2)
    {
        source[index]=data2[index2];
        index++; index2++;
    }

}
