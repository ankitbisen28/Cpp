// Not Working solve this if you have any idea;
#include <iostream>

using namespace std;

template <class T>
void sortarr(T x[], int n)
{
    int i, j;
    T temp;
    for(i=0; i<n-1; j++)
    {
        for(j=i+1; j<n; j++)
        {
            if(x[i]>x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    cout << "\n After Sorting \n";
    for(i = 0; i<n; i++)
    cout<< x[i]<< " ";
}

int main()
{
    int arr1[]={20,30,40,50,10};
    sortarr(arr1, 5);
    return 0;
}