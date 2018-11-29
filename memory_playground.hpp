//
// Created by Erik Sevre on 2018-11-28.
//

#pragma once

#include <iostream>
#include <memory>


//
// Pass by reference for accurate count
//
template <class T>
void sp_print(const std::shared_ptr<T> &p){
    std::cout << "use count: " << p.use_count() << "\n";
}

void memory_demo(){
    using Pointer = std::shared_ptr<double>;

    Pointer p1;                     // p1 count = 0
    sp_print(p1);

    p1 = Pointer(new double(3));    // p1 count = 1
    sp_print(p1);

    Pointer p2 = p1;                // p1 count = 2
    sp_print(p1);

    Pointer p3 = p2;                // p1 count = 3
    sp_print(p1);

    double *p_raw = p1.get();       // p1 count = 3
    sp_print(p1);

    p3.reset();                     // p1 count = 2
    sp_print(p1);

    p2 = nullptr;                   // p1 count = 1
    sp_print(p1);

    p1 = nullptr;                   // p1 count = 0
    sp_print(p1);

}


struct Thing
{
    int x = 0;
    Thing() = default;
    explicit Thing(int xValue) : x(xValue) {}

    ~Thing(){
        std::cout << "*** thing destroyed ***\n";
    }
};



void memory_demo_2(){
    using Pointer = std::shared_ptr<Thing>;

    Pointer p1;                     // p1 count = 0
    sp_print(p1);

    p1 = Pointer(new Thing(3));    // p1 count = 1
    sp_print(p1);

    Pointer p2 = p1;                // p1 count = 2
    sp_print(p1);

    Pointer p3 = p2;                // p1 count = 3
    sp_print(p1);

    Thing *p_raw = p1.get();       // p1 count = 3
    sp_print(p1);

    p3.reset();                     // p1 count = 2
    sp_print(p1);

    p2 = nullptr;                   // p1 count = 1
    sp_print(p1);

    p1 = nullptr;                   // p1 count = 0
    sp_print(p1);

}




