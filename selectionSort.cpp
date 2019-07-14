#include <iostream>

    using namespace std;

 void selectionSort(int arr[],int n)
    {
        int i,j,k,o;

        i=n;
        for(j=0;j<i-1;j++)
        {
            k=j;
                for(i=j+1;i<n;i++)
                    {
                        if(arr[i]<arr[k])
                        {
                            k=i;
                        }
                        o=arr[j];
                        arr[j]=arr[k];
                        arr[k]=o;
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


    selectionSort(arr,5);

    for(int m=0;m<5;m++)
        {
            cout<<arr[m]<<"\t";
        }


    return 0;
 }

