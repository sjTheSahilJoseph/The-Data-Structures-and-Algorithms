# include <stdio.h>

int main(int argc, char const *argv[]) {
    
    // List is a common world entity.
    // List is nothing but a collection of same type objects.
    // It can be a list of names, list of rollNumbers, etc...

    // Let's first define list as abstract data type.
    // I want to make a list that can store a given number of elements of a given data type.
    // It can be a static list which will not change.
    // Before creating the list, we will know the number of elements.
    // We should be write / modify element of a position.
    // We should be read the data form specific position.
    // If I ask you the basic implementation of a list, then you'll say Array.

    // Are you talking about array?
        // We can create array of any data type.
        // We can read/write/update the elements on array by position.
    
    // Now I want a list that has many more features.
        // I want a dynamic list that should grow as per my need.
        // I will call my list "empty" if there are no elements present. When the size is 0.
        // I can insert the element into the list.
        // I can insert the element at any position in the list.
        // I can remove element in that list.
        // I can count the elements in that list.
        // I should read / modify the element in that list.
        // I should be specify the data type of that list.
    // I want that data structure. How do I get it?
        // I can implement it using array, but we have to define multiple features on top of array to achieve this.
    
    // To Implement such a list.
    // If we want to insert an element to the index, we need to make shifts to other elements, or so on.
    // If we want to delete an element, we need to reposition other elements.
    // etc...

    // How do we now that the array should be which size?
    // We cannot change the size of array.
    // When array is full, create a new larger array, copy previous array into the new array. Free the memory for the previous array.

    // When the array is full, we create a new array which will be the size of double of the previous array.
    
    // This looks like the cool implementation.

    // The Study of Data Structures is not just the study of operations and etc...
    // It's also analyzing the cost of Time and Memory.

    // This implementation is not the best for the memory, Then what is better than this in term of memory?
    // Linked List.

    return 0;
}