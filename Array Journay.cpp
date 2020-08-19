#include <iostream>
using namespace std;
void arrayJournay(int arr[], int k, int n){
    int sum=arr[0];
    int pos;
    int i;
    int count=0;
    for(i=1;i<n;){
            int max=arr[i];
            pos=i;
            count=0;
        for(int j=1;j<k;j++){
                if(i+j<n){
                count++;
                    if(arr[i+j]>max){
                     max=arr[i+j];
                     pos=i+j;
                }
            }
        }
        if(count==k-1){
            sum=sum+max;
            }
        i=pos+1;
    }
    cout<<sum;

}

int main(){
    int n;
    int k;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"\n Enter array journay size: ";
    cin>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
        arrayJournay(arr,k,n);
        return 0;


}
