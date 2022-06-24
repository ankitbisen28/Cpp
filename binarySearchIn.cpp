#include <iostream>
#include <algorithm>

using namespace std;
 
void show(int a[], int arraysize)
{
    for(int i= 0; i < arraysize ; i++ )
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[] = {10, 34 ,89, 85 ,90, 83};
    int ele;
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\n Array is \n ";
    show (a , asize);

    sort(a, a + asize);
    cout << "\n After sorting \n";
    show(a, asize);

    cout << "\n \n enter Element to search?:";
    cin >> ele;

    if(binary_search(a, a + asize, ele))
    {
        cout<< "\n Element found in the array:";
    }
    else {
        cout << "\n Element not found in the array";
    }
    return 0;
}