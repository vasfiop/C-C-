#ifndef _STRING1_H_
#define _STRING1_H_

#include <iostream>

namespace string
{
    class String
    {
    private:
        char *str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;

    public:
        String(const char *s);
        String(const String &);
        String();
        ~String();

        int length() const { return len; }

        String &operator=(const String &);
        String &operator=(const char *);
        char &operator[](int i);
        const char &operator[](int i) const;

        // friend bool operator<(const String &st, const String &st2);
        // friend bool operator>(const String &st, const String &st2);
        // friend bool operator==(const String &st, const String &st2);

        friend std::ostream &operator<<(std::ostream &os, const String &st);
        friend std::istream &operator>>(std::istream &is, String &st);

        static int HowMany();

        bool operator<(const String &st);
        bool operator>(const String &st);
        bool operator==(const String &st);
    };

}

#endif