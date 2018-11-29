//
// Created by Erik Sevre on 2018-11-28.
//

#include "LinkedListRawPointer.hpp"

namespace LLRaw{
//    template<class DataType>
//    void LinkedListRawPointer<DataType>::addAtEnd(DataType dataValue)
//    {
//        if (head == nullptr) {
//            head = NodePointer(new NodeBase(dataValue));
//            tail = head;
//            return;
//        }
//        NodePointer temp = head;
//        while (temp->next != nullptr) {
//            temp = temp->next;
//        }
//        temp->next = NodePointer(new NodeBase(dataValue));
//        tail = temp->next;
//    }

//    template<class DataType>
//    void LinkedListRawPointer<DataType>::sortedInsert(DataType dataValue)
//    {
//        // should we insert at head?
//        if (head == nullptr) {
//            head = NodePointer(new NodeBase(dataValue));
//            tail = head;
//            return;
//        }
//        // should we insert before head?
//        //
//        if (head->data > dataValue) {
//            head = NodePointer(new NodeBase(dataValue, head));
//            return;
//        }
//        // should we insert after tail?
//        //
//        if (tail->data < dataValue) {
//            tail->next = NodePointer(new NodeBase(dataValue));
//            tail = tail->next;
//            return;
//        }
//        // look for node we want to insert at
//        //
//        NodePointer temp = head;
//        while (temp->next != nullptr) {
//            // do we insert here?
//            if (temp->next->data > dataValue) {
//                temp->next = NodePointer(new NodeBase(dataValue, temp->next));
//                break;
//            }
//            temp = temp->next;
//        }
//        // just in case, we will check if the temp value is at the tail ...
//        if (temp->next == nullptr) {
//            tail = temp;
//        }
//    }

}


