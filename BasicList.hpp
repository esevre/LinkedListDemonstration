//
// Created by Erik Sevre on 2018-11-28.
//

#pragma once

#include <iostream>

#include <memory>

namespace BL{

    template <class DataType>
    class Node {
    public:
        using NodeBase = Node<DataType>;
        using NodeRawPointer = NodeBase*;
        using NodePointer = NodeBase*;  // change this later ;)

    public:
        Node() {}
        explicit Node(const DataType &dataValue, NodePointer nextPtr = nullptr)
            : data(dataValue)
            , next(nextPtr)
        {}

    public:
        DataType data {0};
        NodePointer next = nullptr;
    };

    template <class DataType>
    class BasicList
    {
    public:
        using NodeBase = Node<DataType>;
        using NodeRawPointer = NodeBase*;
        using NodePointer = NodeBase*;  // change this later ;)

    public:
        // no need for constructor

        void insertAtHead(const DataType &dataValue)
        {
            if (head == nullptr) {
                head = NodePointer(new NodeBase(dataValue));
                tail = head;
                return;
            }
            head = NodePointer(new NodeBase(dataValue, head));
        }

        void insertAtTail(const DataType &dataValue)
        {
            if (head == nullptr) {
                head = NodePointer(new NodeBase(dataValue));
                tail = head;
                return;
            }
            tail->next = NodePointer(new NodeBase(dataValue));
            tail = tail->next;
        }


        BasicList(){}





    public:
        NodePointer head = nullptr;
        NodePointer tail = nullptr;
    };


}

