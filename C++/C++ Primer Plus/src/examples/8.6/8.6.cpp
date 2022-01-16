//�������ڽṹ��
#include <iostream>
#include <string>

using namespace std;

struct free_throws
{
    string name;
    int made;
    int attempts;
};

// ʹ�����õĺ���
void display(const free_throws &ft);
free_throws &add(free_throws &first, free_throws &last);
void clear(free_throws &target);
// ʹ��ָ��ĺ���
void display(const free_throws *ft);
free_throws *add(free_throws *first, free_throws *last);
void clear(free_throws *target);

int main(int argc, char const *argv[])
{
    free_throws one = {"one", 13, 14};
    free_throws two = {"two", 10, 16};
    free_throws three = {"three", 7, 9};
    free_throws four = {"four", 5, 9};
    free_throws five = {"five", 6, 14};
    free_throws team = {"team", 0, 0};
    free_throws dup;

    display(one);
    dup = add(team, one);
    display(team);
    display(dup);

    add(team, two) = one;
    display(one);
    display(team);

    return 0;
}
void display(const free_throws *ft)
{
    cout << "Name: " << ft->name << endl;
    cout << "Made: " << ft->made << '\t';
    cout << "Attempts: " << ft->attempts << '\n';
}
free_throws *add(free_throws *first, free_throws *last)
{
    first->attempts += last->attempts;
    first->made += last->made;

    return first;
}
void clear(free_throws *target)
{
    target->name = "";
    target->attempts = 0;
    target->made = 0;
}
void clear(free_throws &target)
{
    target.name = "";
    target.attempts = 0;
    target.made = 0;
}
free_throws &add(free_throws &first, free_throws &last)
{
    first.attempts += last.attempts;
    first.made += last.made;

    return first;
}
void display(const free_throws &ft)
{
    cout << "Name: " << ft.name << endl;
    cout << "Made: " << ft.made << '\t';
    cout << "Attempts: " << ft.attempts << '\n';
}