#ifndef _VECTOR_H_
#define _VECTOR_H_ 1
#include <iostream>
namespace vector
{
    class Vector
    {
    public:
        enum Mode // 枚举 标识两种表示法
        {
            RECT,
            POL
        };

    private:
        double x;
        double y;
        double mag; // 向量长度
        double ang; // 向量的角度
        Mode mode;  // 标识的方式
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();

    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        ~Vector();
        void reset(double n1, double n2, Mode form = RECT);
        double xval() const { return x; }
        double yval() const { return y; }
        double magval() const { return mag; }
        double angval() const { return ang; }
        void polar_mode();
        void rect_mode();
        Vector operator+(const Vector &b) const;
        Vector operator-(const Vector &b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        friend Vector operator*(double n, const Vector &a);
        friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    };
} // namespace vector

#endif