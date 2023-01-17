/*
 - Each variable uses space on computer's memory to store its value
 - Allocate -> we indicate that var has been given some space on computer's memory
 - Deallocate -> space has been reclaimed by computer and var cannot be accessed now

 - Memory allocation is done in two ways -
    - Static memory allocation (Compile time allocation)
    - Dynamic memory allocation (Run time allocation)



 * Static Memory allocation
    In this, size and location where variable will be stored is fixed during compile time.

    #include<iostream>
    using namespace std;

    int main(){
        int x; 4 byte and memory add 201
        char c;
        int arr[10];
    }

    -In static memory allocation, compiler calculates how much memory above variable will need and fix a location where this variable will be stored.

    - location of where variables will be stored is SAVED, but actual physical memory is NOT allocated to variable at compile time

    - Static memory allocation is slightly faster than dynamic memory allocation

    - Allocation and deallocation of memory is done bcompiler.

    ______________________________________________________________________________________________________________________________________________________________

    * Dynamic Memory Allocation
    - It allows us to define memory requirements during the execution of the program

    - It uses a special type of memory called HEAP memory.

    - New keyword is use to deallocate memory

    - In this, unlike static memory, the allocation and deallocation of memory should be done by the programmar.


*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    //allocate memory

    int *arr =new int[n];
    cout<< sizeof(arr) << endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i];


    }

    delete[] arr;
}

/*
    - New keyword returns the address that has been allocated to the variable on the heap memory. this happen during the time of execution

    - During the execution of program, depending on the value of n, new keyword returns the physical address of the memory where the array has been allocated on heap.


*/