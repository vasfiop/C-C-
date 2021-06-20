#include"include"

typedef unsigned long Item;

class _Stack
{
    private:
        enum {MAX=10};
        Item * pitems;
        int size;
        int top;
    public:
        _Stack(int n=MAX);
        _Stack(const _Stack &st);
        ~_Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item &item);
        bool pop(Item &item);
        _Stack &operator=(const _Stack &st);
};

int main(int argc, char const *argv[])
{
    _Stack st1(10);
    srand(time(0));
    for (int i = 0; i < 10; i++)
        if (!st1.push(rand()%100))
            cout << "Push error!" << endl;;
    
    if (!st1.push(0))
        cout << "Push 0 error!" << endl;
    _Stack st2(st1);
    _Stack st3 = st1;
    // 故意导致pop error
    for (int i = 0; i < 11; i++)
    {
        Item item;
        cout << "#" << i+1 << ": " << endl;
        if (!st1.pop(item))
            cout << "st1 pop error!" << endl;
        else
            cout << "st1: " << item << endl;
 
        if (!st2.pop(item))
            cout << "st2 pop error!" << endl;
        else
            cout << "st2: " << item << endl;

        if (!st3.pop(item))
            cout << "st3 pop error!" << endl;
        else
            cout << "st3: " << item << endl;
        cout << endl;
    }

    return 0;
}

_Stack::_Stack(int n)
{
    pitems=new Item[n];
    size=n;
    top=0;
}
_Stack::_Stack(const _Stack &st)
{
    size=st.size;
    pitems=new Item[size];
    top=st.top;
    for(int i=0;i<top;i++)
        pitems[i]=st.pitems[i];
}
_Stack::~_Stack()
{
    delete [] pitems;
    pitems=nullptr;
}
bool _Stack::isempty() const
{
    return top==0;
}
bool _Stack::isfull() const 
{
    return top==size;
}
bool _Stack::push(const Item &item)
{
    if(isfull())
        return false;
    pitems[top++]=item;
    return true;
    
}
bool _Stack::pop(Item &item)
{
    if(isempty())
        return false;
    item=pitems[--top];
    return true;
}
_Stack & _Stack::operator=(const _Stack & st)
{
    size=st.size;
    pitems=new Item[size];
    top=st.top;
    for(int i=0;i<top;i++)
        pitems[i]=st.pitems[i];
    return *this;
}