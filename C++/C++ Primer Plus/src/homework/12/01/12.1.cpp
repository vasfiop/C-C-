#include <header.h>

class Cow
{
    char name[20];
    char *hobby;
    double weight;

public:
    Cow();
    Cow(const char *nm, const char *ho, double wt);
    Cow(const Cow &c);
    ~Cow();
    Cow &operator=(const Cow &c);
    void ShowCow() const;
};

int main(int argc, char const *argv[])
{
    Cow cow1("hehehe", "eat", 123.4);
    Cow cow2("heihei", "drink", 321.2);
    Cow cow3(cow2);
    Cow cow4 = cow1;

    cow1.ShowCow();
    cow2.ShowCow();
    cow3.ShowCow();
    cow4.ShowCow();

    return 0;
}
Cow::Cow()
{
}
Cow::Cow(const char *nm, const char *ho, double wt)
{
    strncpy(name, nm, 20);

    int ho_size = strlen(ho);
    hobby = new char[sizeof(char) * ho_size + 1];
    strncpy(hobby, ho, ho_size);
    hobby[ho_size] = '\0';
    weight = wt;
}
Cow::Cow(const Cow &c)
{
    strncpy(this->name, c.name, 20);
    int ho_size = strlen(c.hobby);
    hobby = new char[sizeof(char) * ho_size + 1];
    strncpy(hobby, c.hobby, ho_size);
    hobby[ho_size] = '\0';
    weight = c.weight;
}
Cow::~Cow()
{
    delete[] hobby;
    hobby = nullptr;
}
Cow &Cow::operator=(const Cow &c)
{
    strncmp(name, c.name, 20);
    int ho_size = strlen(c.hobby);
    hobby = new char[sizeof(char) * ho_size + 1];
    strncpy(hobby, c.hobby, ho_size);
    hobby[ho_size] = '\0';
    weight = weight;

    return *this;
}
void Cow::ShowCow() const
{
    cout << "name: " << name << endl;
    cout << "hobby: " << hobby << endl;
    cout << "weight: " << weight << endl;
    cout << endl;
}