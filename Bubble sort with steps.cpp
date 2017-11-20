#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int source[], int length);

int main()
{
    /// input area
	int len; cin>>len; int data[len];
	for(int i=0;i<len;i++) cin>>data[i];

	/// call function for sort
	BubbleSort(data,len);

	/// output area
	cout<<endl<<"Sorted array : ";

	for(int i=0;i<len;i++) /// print sorted elements
		cout<<data[i]<<" ";

    cout<<endl;

}
/// function define area
void BubbleSort(int source[], int length)
{
    int Change_Count=1; /// array change counter
    int Check_count=0; /// element check counter
	for(int i=0;i<length-1;i++)
	{
		for(int j=i;j<length;j++)
		{
		    Check_count++;
			if(source[i]>source[j]) /// condition for ascending order
			{
				int temp=source[i]; /// swap
				source[i]=source[j];
				source[j]=temp;
				cout<<"Step "<<Change_Count<<" : "; /// print modify array with step number
                for(int k=0;k<length;k++)
                    cout<<source[k]<<" ";
                cout<<endl;
                Change_Count++; /// increase Change counter for next step
			}
		}
	}
	cout<<"Total check : "<<Check_count<<endl;
}
