class Title
{
private:
    char *value;

    void makeValue(const char *);

public:
    Title();
    ~Title();
    Title(const char *);
    void GetTitle(char **);
    void SetTitle(const char *);
};