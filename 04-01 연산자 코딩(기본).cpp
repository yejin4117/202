#include <iostream> //cout, endl ��ü�� ������ ����.

using namespace std;

class Point
{
public:
    //������
    Point(int _x, int _y);
    Point(void);

    //������ �����ε�
    Point operator + (const Point& rhs)
    {
        Point p;
        p.mX = mX + rhs.mX;
        p.mY = mY + rhs.mY;
        return p;
    }

    void print(void);

private:
    int mX;
    int mY;
};

int main() {
    Point p1(1, 2);
    Point p2(3, 4);

    Point sum = p1 + p2;
    sum.print(); // (4, 6)
    return 0;
}

Point::Point(int _x, int _y) :mX(_x), mY(_y) {}
Point::Point(void) {}

void Point::print(void) {
    cout << "(" << mX << ", " << mY << ")" << endl;
}