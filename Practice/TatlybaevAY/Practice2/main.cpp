#include <iostream>
#include <string>
#include "stack.h"

int main()
{
    std::string line;
    std::getline(std::cin, line);

    Stack<char> st;
    bool ok = true;

    for (size_t i = 0; i < line.size(); i++) {
        char c = line[i];

        if (c == '(') {
            // открывающая скобка - просто кладем в стек
            st.push(c);
        } else if (c == ')') {
            // закрывающая скобка должна закрывать именно скобку
            if (st.empty() || st.get() != '(') {
                ok = false;
                break;
            }
            st.pop();
        } else if (c == '"' || c == '\'') {
            // кавычка. если сверху такая же кавычка - значит закрываем
            if (!st.empty() && st.get() == c)
                st.pop();
            else
                st.push(c);
        }
        // остальные символы просто пропускаем
    }

    // если в стеке что-то осталось - значит не все открытое закрыто
    if (!st.empty())
        ok = false;

    std::cout << (ok ? "YES" : "NO") << "\n";

    return 0;
}