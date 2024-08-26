#include <iostream>

using namespace std;

void display(int a[])    //here int a[] is same as int * a here it act as a pointer
{
    // int size=sizeof(a)/sizeof(a[0]);    //we cannot declare here sizeof operator to find size of a array so we have to pass size of a

    for (int i = 0; i <= 4; i++)
    {

        cout << a[i] << " ";
    }

    cout << endl;

    return;
}

void change(int b[])
{

    b[0] = 100;
}

int main()
{

    int arr[5] = {1, 4, 2, 7, 46};

    // accessing the elements of array in another function

    // updation, pass by value / reference ?

    display(arr);

    change(arr);

    display(arr);
}