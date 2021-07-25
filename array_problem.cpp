#include<iostream>  //MAXIMUM & MINIMUM NUMBER IN ARRAY
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max_num= INT_MIN;
    int min_num=INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max_num){
            max_num=arr[i];
        }
        if(arr[i]<min_num){
            min_num=arr[i];
        }
    }
    cout<<max_num<<"\n";
    cout<<min_num<<"\n";
}
#include<iostream>  //LINEAR SEARCH IN ARRAY
#include<climits>
using namespace std;
linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }

    }
    return -1;
}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearSearch(arr,n,key)<<endl;

}

//BINARY SEARCH IN ARRAY
#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s=0; //starting point
    int mid;
    int e=n;  //ending point
    while(s<=e){
        int mid=(s+e)/2;

    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
             e=mid-1;

    }
    else{
       e=mid+1;
    }
    }
    return -1;
}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key)<<endl;
}
//TO PRINT ALL THE POSSIBLE SUBARRAY OF GIVEN ARRAY
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }cout<<endl;

        }
    }
    return 0;
}
//FIND THE SUBARRAY IN AN ARRAY WHICH HAS MAXIMUM SUM (KADANE'S ALGORITHM)
#include<iostream>
#include<climits> //climits header file used as we use INT_MIN
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum=INT_MIN;
    int currentSum=0;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
       if(currentSum<0){   //if currentsum become negative we make it to zero and it goes like that and in all the positive number we get maximum of that is our desired result
        currentSum=0;
        }
        maxSum= max(maxSum,currentSum);
    }

    cout<<maxSum;
}

