#include <iostream> 

using namespace std; 

int show(int a[], int size)
{
    for (int i= 0; i<size; i++)
    {
        cout << a[i]<< " ";
    }
}

int main()
{
    int a[] = {1, 3 , 5, 5 ,2 , 8};
    int asize = sizeof(a)/ sizeof(a[0]);
    cout<< "\n The array befor soring is \n ";
    show(a, asize);
    show(a, a + asize);
    cout << "\n The array after soring is \n";
    show(a, asize);
    return 0;

}