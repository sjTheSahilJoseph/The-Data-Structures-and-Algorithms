#include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("1.1 Arrays in Data Structures, Declaration, Initialization, Memory Representation.\n");

    /*
        If we create a variable, then it'll be stored in our memory.
        A memory is basically a long tape of bytes.
        | | | | | | | | | | | | | ... kind of this.
        So let's say we created an signed int variable.
        The size of int will be 4 bytes. So it'll take 4 bytes of memory.
        And store the value in it.
        Byte means 8 bits.
        So 4 bytes means 32 bits.
    */
    int a = 5;

    /*
       When the compiler compiles that code into a program,
       It'll the memory manager will allocate 4 bytes of memory (typically 4 bytes).
       And place binary converted from 5.
       So in each bit, there should be 1 or 0 (binary).
       In memory, the 5 is stored as binary.
    */

    /*
        Address is always in hexa-decimal form.
        But for now,
        Let's say, the address of int a will looks like:
            It took 4 bytes,
            1st byte -> 100,
            2nd byte -> 101,
            3rd byte -> 102,
            4th byte -> 103,

        Why we need an array?
        The reason is in a single int variable, we can only store one value.
        Let's say we have to store 50 roll numbers in our program, so we need to create 50 int variables.
        But when we use array, we need to only make an array of 50 integers, and then we can use then using indexing from 0.

        We need to create an array of type integers so we can store all the roll numbers of 50 students under a single thing.

        Arrays are the collection of data of same type.
        Arrays are contiguous block of memory.
        Index of the array starts from 0.

        The syntax is like:
            data_type name_of_the_array[size_of_the_array];

    */
    int arr[50];

    /*
        This is invalid declaration.
        We need to give a size.
        Or we can declare or initlialize at same time. So the compiler will automatically take the size.
        int arr[];
    */

    /*
        This is also invalid:
    */
    // int n, b[n];
    /*
        We can do that but in macros, but for now, understand the size should be constant.
        We can use a variable but still, it should have some value. Which should be constant.
    */
    // int size = 5;
    // int arr2[size]; // valid

    /*
        Size of the array is constant.
        We can't change its size after it's allocated.
    */

    /*
       There are 3 types of arrays:
        1. 1d array (int a[50];).
        2. 2d array (int a[50][50];).
        3. Multi-dimensional array (int a[50][20][3]..;).
    */

    /*
        Array.
        Array is a collection of more than one data element of same data type.
        In array, all the elements are in in congiguous memory locations.
        The array index starts from 0.
    */

    /*
        Arrays can be initialized in the compile time or in runtime.
        In compile time, we can say:
            int size = 50;
            int arr[50];

        In runtime, we can ask the user to tell what size of array the user wants.
        int size;
        scanf("%d", &size);
        int arr[size];

        But in both cases, that size is fixed.
        We cannot change the size of array in runtime.
    */

    /*
        The formula of calculating the address of next element is.
        Base Address = we have to know.
        Size = we have to know.
        Base Address + index we want to access * (size of data type).

    */

    // Int array address accessing.
    int arr3[10] = {1,2,3,4,5};
    int* base_address = arr3;
    int index_we_want = 2;
    int* i = base_address + index_we_want;

    printf("%d", *i);

    // Char array address accessing.
    char arr4[10] = {'s', 'j'};
    char* base_address2 = arr4;
    int index_we_want2 = 1;
    char* i2 = base_address2 + index_we_want2;

    printf("%c", *i2);

    /*
        Runtime Array Initialization
            We can use loops etc...
            We can ask user to enter the data into the array.
    */

    // Int array initialization at runtime.
    int rarr[10]; // Declared an array.
    printf("\nEnter the elements of the array\n");
    for (int i = 0; i < 10; i++) {
    printf("\nEnter index %d: ", i+1);
    scanf("%d", &rarr[i]);
    printf("\n");
    }
    for (int i = 0; i < 10; i++) {
    printf("\nValue at Index %d: ", i+1);
    printf("%d", rarr[i]);
    printf("\n");
    }

    // We can access the data at specifif index using:
    // arr[index];


    return 0;
}
