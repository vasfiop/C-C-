#include <cstring>
#include "string1.h"

namespace string
{
    int String::num_strings = 0;
    int String::HowMany()
    {
        return num_strings;
    }

    String::String(const char *s)
    {
        len = std::strlen(s);
        str = new char[len + 1];
        std::strcpy(str, s);
        num_strings++;
    }
    String::String()
    {
        len = 4;
        str = new char[1];
        str[0] = '\0';
        num_strings++;
    }
    String::String(const String &st)
    {
        num_strings++;
        len = st.len;
        str = new char[len + 1];
        std::strcpy(str, st.str);
    }
    String::~String()
    {
        --num_strings;
        delete[] str;
    }
    String &String::operator=(const String &st)
    {
        if (this == &st)
            return *this;
        delete[] str;
        len = st.len;
        str = new char[len + 1];
        std::strcpy(str, st.str);
        return *this;
    }
    String &String::operator=(const char *s)
    {
        delete[] str;
        len = std::strlen(s);
        str = new char[len + 1];
        std::strcpy(str, s);
        return *this;
    }
    char &String::operator[](int i)
    {
        return str[i];
    }
    const char &String::operator[](int i) const
    {
        return str[i];
    }
    std::ostream &operator<<(std::ostream &os, const String &st)
    {
        os << st.str;
        return os;
    }
    std::istream &operator>>(std::istream &is, String &st)
    {
        char temp[String::CINLIM];
        is.get(temp, String::CINLIM);
        if (is)
            st = temp;
        while (is && is.get() != '\n')
            continue;
        return is;
    }

    // bool operator<(const String &st1, const String &st2)
    // {
    //     return (std::strcmp(st1.str, st2.str) < 0);
    // }
    // bool operator>(const String &st1, const String &st2)
    // {
    //     return st2 < st1;
    // }
    // bool operator==(const String &str1, const String &str2)
    // {
    //     return (std::strcmp(str1.str, str2.str) == 0);
    // }

    // 可以使用友元函数或者非友元函数
    // 两个对比的参数，都是对象，所以不用担心顺序问题
    
    bool String::operator<(const String &st)
    {
        return (std::strcmp(this->str, st.str) < 0);
    }
    bool String::operator>(const String &st)
    {
        return (std::strcmp(this->str, st.str) > 0);
    }
    bool String::operator==(const String &st)
    {
        return (std::strcmp(this->str, st.str) == 0);
    }
}