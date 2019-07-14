#include <iostream>

    using namespace std;

 void bubbleSort(int arr[],int n)
    {
        int i,j,k;
        for(i=0;i<n;i++)
        {
            for(j=n-1;j>=i+1;j--)
            {
                if(arr[j]<arr[j-1])
                    {
                        k=arr[j];
                        arr[j]=arr[j-1];	
                        arr[j-1]=k;
                    }
            }
        }
    }


 int main()
 {
     int arr[5];

        for(int n=0;n<5;n++)
        {
           cin>>arr[n];
        }
            cout<<endl;
            cout<<"--\t--\t--\t--\t--"<<endl;


    bubbleSort(arr,5);

    for(int m=0;m<5;m++)
        {
            cout<<arr[m]<<"\t";
        }


    return 0;
 }
