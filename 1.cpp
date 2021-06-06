#include<iostream>
using namespace std;
int arr[100],n,start;
void reverse(int arr[],int start,int end)
{
    while(start<end){
int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
    }
}
int main()
{
cout<<"print no of elements ";
cin>>n;
cout<<"enter the elements: ";
for(int i=0;i<n;i++)
 cin>>arr[i];
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" \n";
    
reverse(arr,0,n-1);
cout<<"reverse array is: ";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    
return 0;
    

}