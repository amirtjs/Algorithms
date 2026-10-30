#ifndef LIST_TEMPLATE_H
#define LIST_TEMPLATE_H

template <typename Data> class List
{
public:
    class Item
    {
    public:
        explicit Item(Data data) : _data(data), _next(nullptr)
        {
        }

        Item *next() { return _next; }
        Data data() const { return _data; }

        Data _data;
        Item *_next;
    };

    List() : _first(nullptr), _last(nullptr)
    {
    }

    List(const List &a) : _first(nullptr), _last(nullptr)
    {
        copy_from(a);
    }

    List &operator=(const List &a)
    {
        if (this != &a) {
            clear();
            copy_from(a);
        }
        return *this;
    }

    ~List()
    {
        clear();
    }

    Item *first()
    {
        return _first;
    }

    Item *last()
    {
        return _last;
    }

    // вставка в начало
    Item *insert(Data data)
    {
        return insert_after(nullptr, data);
    }

    //вставка после item если item == nullptr то в начало
    Item *insert_after(Item *item, Data data)
    {
        Item *node = new Item(data);
        if (!item) {
            node->_next = _first;
            _first = node;
            if (!_last)
                _last = node;
        } else {
            node->_next = item->_next;
            item->_next = node;
            if (!node->_next)
                _last = node;
        }
        return node;
    }

    Item *erase_first()
    {
        return erase_next(nullptr);
    }

    //удал эл после item если item == nullptr то первый
    Item *erase_next(Item *item)
    {
        Item *target = item ? item->_next : _first;
        if (!target)
            return nullptr;

        Item *next = target->_next;
        if (item)
            item->_next = next;
        else
            _first = next;

        // если удалили последний, то последним становится item
        if (target == _last)
            _last = item;

        delete target;
        return next;
    }

private:
    void copy_from(const List &a)
    {
        Item *tail = nullptr;
        for (Item *it = a._first; it; it = it->_next)
            tail = insert_after(tail, it->_data);
    }

    void clear()
    {
        while (_first)
            erase_first();
    }

    Item *_first;
    Item *_last;
};

#endif