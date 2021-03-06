//
// Created by Erik Sevre on 2018-11-28.
//

#pragma once

#include <iostream>

namespace LLRaw{

    //
    //  Node
    //
    template <class DataType>
    class Node {
    public:
        using NodeRawPointer = Node*;
        using NodePointer = Node*;

    public:
        Node() {}
        explicit Node(DataType dataValue, NodeRawPointer next_ptr = nullptr)
            : data(dataValue)
            , next(next_ptr)
        {}

    public:
        DataType data {0};
        NodePointer next {nullptr};
    };

    //
    //  Linked List
    //
    template <class DataType>
    class LinkedListRawPointer {
    public:
        using NodeBase = Node<DataType>;
        using NodePointer = NodeBase*;
        using NodeRawPointer = NodeBase*;

    public:
        void addAtEnd(DataType dataValue)
        {
            if (head == nullptr) {
                head = NodePointer(new NodeBase(dataValue));
                tail = head;
                return;
            }
            NodePointer temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = NodePointer(new NodeBase(dataValue));
            tail = temp->next;
        }
        void sortedInsert(DataType dataValue)
        {
            // should we insert at head?
            if (head == nullptr) {
                head = NodePointer(new NodeBase(dataValue));
                tail = head;
                return;
            }
            // should we insert before head?
            //
            if (head->data > dataValue) {
                head = NodePointer(new NodeBase(dataValue, head));
                return;
            }
            // should we insert after tail?
            //
            if (tail->data < dataValue) {
                tail->next = NodePointer(new NodeBase(dataValue));
                tail = tail->next;
                return;
            }
            // look for node we want to insert at
            //
            NodePointer temp = head;
            while (temp->next != nullptr) {
                // do we insert here?
                if (temp->next->data > dataValue) {
                    temp->next = NodePointer(new NodeBase(dataValue, temp->next));
                    break;
                }
                temp = temp->next;
            }
            // just in case, we will check if the temp value is at the tail ...
            if (temp->next == nullptr) {
                tail = temp;
            }
        }

    public:
        NodePointer head = nullptr;
        NodePointer tail = nullptr;

    };


    template <class T>
    void print_list(LinkedListRawPointer<T> list) {
        auto temp = list.head;
        while (temp != nullptr) {
            std::cout << temp->data;
            if (temp->next != nullptr) {
                std::cout << " --> ";
            } else {
                std::cout << '\n';
            }
            temp = temp->next;
        }
    }

}



