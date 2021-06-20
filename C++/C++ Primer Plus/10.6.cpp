#include"include"
class Move
{
    private:
        double x;
        double y;
    public:
        Move(double a=0,double b=0);
        ~Move();
        void showmove() const;
        Move add(const Move &m);
        void reset(double a=0,double b=0);
};

int main(int argc, char const *argv[])
{
    Move date1(1,2);
    Move date2(3,4);

    date1.showmove();
    date1.add(date2);
    date1.showmove();
    date1.reset(10,10);
    date1.showmove();
    
    return 0;
}
Move::Move(double a,double b)
{
    this->x=a;
    this->y=b;
}
Move::~Move()
{

}
void Move::showmove() const
{
    cout<<"x: "<<this->x<<endl;
    cout<<"y: "<<this->y<<endl;
}
Move Move::add(const Move &m)
{
    this->x+=m.x;
    this->y+=m.y;

    return m;
}
void Move::reset(double a,double b)
{
    this->x=a;
    this->y=b;
}