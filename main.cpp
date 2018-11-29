#include <iostream>

#include "LinkedListRawPointer.hpp"
#include "LinkedListSharedPointer.hpp"

#include <memory>

#include "memory_playground.hpp"


void quickPointerDemo(){
    using IntBase = int;
    using IntPtr = int*;

    IntPtr iptr = IntPtr(new IntBase(2));
    std::cout << "iptr value is : " << (*iptr) << '\n';
}


int main()
{
    //
    // Showing how using keyword simplifies pointer usage
    //
    quickPointerDemo();

    //
    //  Raw Poiner List
    //
    LLRaw::LinkedListRawPointer<double> list1;

    list1.sortedInsert(1.1);
    list1.sortedInsert(5.5);
    list1.sortedInsert(2.04);
    list1.sortedInsert(-11.01);

    LLRaw::print_list(list1);


    //
    //  Shared Pointer List
    //
    LLShared::LinkedListSharedPointer<double> list2;

    list2.sortedInsert(4.4);
    list2.sortedInsert(1.0011);
    list2.sortedInsert(-34.3);
    list2.sortedInsert(1012.0);

    LLShared::print_list(list2);

    //
    //  Shared memory demos,
    //
    //  Second demo has object that prints to screen on delete.
    //    memory_demo();
    memory_demo_2();
}