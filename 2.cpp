# include <iostream>
using namespace std;
int arr[100],n;
void max(int arr[],int n){
    int max=arr[0];
for(int i=1;i<n;i++)
{
    if(arr[i]>max)
    max=arr[i];
}cout<<"maximum element is: "<<max<<"\n";

}
void min(int arr[],int n){
    int min=arr[0];
for(int i=1;i<n;i++)
{
    if(arr[i]<min)
    min=arr[i];
}
cout<<"maximum element is: "<<min;


}

int main()
{ 
    cout<<"how many elements you want to print in array: ";
cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
max(arr,n);
min(arr,n);
/*arrayInput(arr,n);*/

    return 0;
}