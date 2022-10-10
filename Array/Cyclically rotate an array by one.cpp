

//User function Template for C++

void rotate(int arr[], int n)
{
    int temp =arr[0];
    arr[0]=arr[n-1];
    int temp2;
    for(int i =1;i<n;i++){
        temp2=arr[i];
        arr[i]= temp;
        temp=temp2;
        
    }
    
}