# include <stdio.h>

int main(int argc, char const* argv[]) {

    printf("What is a Data Structure?\n");

    // What is Data Structure?
    // Data Structure is one of the most fundamental subject in Computer Science & in-depth understanding of this topic is very important especially when you're into development/programming domain where you build efficient software systems and applications.
    // In Computer science, a data structure is a data organization, management and storage format that enables efficient access and modification.
    // In simple words, Data structures is a way in which data is stored on a computer.

    // Why do we need Data Structures?
    // Data structures is a particular way of storing and organizing information in a computer so that it can be retrieved and used most productively.
    // Each Data Structure allows data to be stored in specific manner.
    // Data Structures allows efficient data search and retrieval.
    // Specific Data structures are decided to work for specific problems.
    // It allows to manage large amount of data such as large databases and indexing services such as hash table.

    // For Example:
    //  Let's say we have to search a word from a dictionary.
    //  In a dictionary the words are organized in alphabetical order.
    //  So we can directly jumps into the word and search for that.
    //  But if it would not be in alphabetical order. Then it would be very hard to find a single word most of the time.
    //  So that's the real life example of data structure.

    // For Example2:
    //  We have map to find route on the basis of x and y cordinates.

    // For Example3:
    //  We have SQL table, which is stored in the tabular format. So we can do multiple operation on them.

    // ============================================

    // Array Data Structure.
    // An array is a collection of elements of the same type placed in contiguous memory locations that can be individually referenced by using an index to a unique identifier.
    int arr[4] = {0,1,2,3};
    // Now in the ram, we have sizeof(int)x4 bytes of memory allocated in contiguous manner.
    // We can index it from 0 to 4.
    // The point to use array is, let's say we have to access 2nd element in this array, we can directly do it without having our program to seachring through this value in the whole array.
    printf("%d", arr[2]); // Direct Value.
    
    return 0;
}
