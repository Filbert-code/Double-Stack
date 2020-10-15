#include <ostream>
using namespace std;

class point
{
private:
    int x;
    int y;

public:
    point()
    {
        x = 0;
        y = 0;
    }
    point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    friend ostream &operator<<(ostream &output, const point &p)
    {
        output << "Point: [" << p.x << ", " << p.y << "]" << endl;
        return output;
    }
};