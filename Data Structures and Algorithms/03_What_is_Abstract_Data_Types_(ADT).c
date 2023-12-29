#include <stdio.h>

int main(int argc, char const* argv[]) {
    printf("What is Abstract Data Type (ADT)\n");

    /*

       Data Structures Definition.
       In computer science, a data structure is a data organization, management
       and storage format that enables efficient access and modification. There
       are 2 ways of looking at Data Structures.
       1. Mathematical/Logical/Abstract Models/Views.
       2. Implementations.

       What is Abstract Data Type?
       ADT's are entities that are deninitions of data and operations but do not
       have implementatio details.

       For Example:
       A smartphone:
        Abstract/Locial view:
            4gb RAM
            Snapdragon 2.2GHz processor
            5.5 inch LCD screen
            Dual Camera
            Android 8.0

            call()
            text()
            photo()
            video()
        Implementation view:
            class Smartphone {
            private:
                 int ram_size;
                 string processor_name;
                 float screen_size;
                 int camera_count;
                 string android_version;
             public:
                void call();
                void text();
                void photo();
                void video();
            };

        For Example2:
        Integer Array:
            Abstract/Locial view:
                Stores a set of elements of int type.
                Read elements by position i.e index.
                Modify elements by index perform sorting.
            Implementation View:
                int arr[5] = {1,2,3,4,5};
                printf("%d", arr[1]);
                arr[2] = 10;


    */

    return 0;
}
