#include <iostream>

    using namespace std;



 void insertionSort(int arr[],int n)
 {
     int i,j,k,p;


     for(i=0;i<n;i++)
         {
            k= arr[i];
            p=i-1;

            while (p>=0 && arr[p]>k)
                {
                    arr[p+1]=arr[p];
                    p=p-1;
                }
            arr[p+1]=k;
         }
 }

int main ()
{
    int arr[5];

    for (int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
            cout<<endl;
            cout<<"--\t--\t--\t--\t--"<<endl;


    insertionSort(arr,5);

    for(int j=0;j<5;j++)
        {
            cout<<arr[j]<<"\t";
        }


    return 0;
}
