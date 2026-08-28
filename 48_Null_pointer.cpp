#include<iostream>

int main() {

    // null value =   a special value that means something has no value.
    //                that pointer is not pointing at anything(null)


    // nullprt   =      keyword represent a null pointer literal.


    // nullptrs are helpfull when determining if an address was successfully assigend to a pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;



    if(pointer == nullptr) {
        std::cout << "address was not assigend ";

    }else{
        std::cout  << "address was assigend ";
    }


    return 0;


}