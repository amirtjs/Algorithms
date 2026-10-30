#ifndef STACK_TEMPLATE_H
#define STACK_TEMPLATE_H

#include "list.h"

template <typename Data> class Stack
{
public:
    Stack()
    {
    }

    Stack(const Stack &a) : _list(a._list)
    {
    }

    Stack &operator=(const Stack &a)
    {
        _list = a._list;
        return *this;
    }

    ~Stack()
    {
    }

    void push(Data data)
    {
        _list.insert(data);
    }

    Data get() const
    {
        List<Data> &list = const_cast<List<Data> &>(_list);
        return list.first()->data();
    }

    void pop()
    {
        _list.erase_first();
    }

    bool empty() const
    {
        List<Data> &list = const_cast<List<Data> &>(_list);
        return list.first() == nullptr;
    }

private:
    List<Data> _list;
};

#endif