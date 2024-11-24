
#include <iostream>

class Rectange
{
private:
    double length;
    double width;

public:
    void setLength(double len)
    {
        if (length < 0)
        {
            std::cout << "Length cannot be negative" << std::endl;
        }
        else
        {
            length = len;
        }
    }

    double getLength()
    {
        return length;
    }

    void setWidth(double w)
    {
        {
            if (width < 0)
            {
                std::cout << "Width cannot be negative" << std::endl;
            }
            else
            {
                width = w;
            }
        }
    }

    double getWidth()
    {
        return width;
    }

    double Area()
    {

        return length * width;
    }

    double Perimeter()
    {
        return (length + width) * 2;
    }
};

int main()
{
    Rectange rect;

    rect.setLength(10);
    rect.setWidth(12);

    std::cout << "Length of rectangle : " << rect.getLength() << std::endl;
    std::cout << "Width of rectangle : " << rect.getWidth() << std::endl;

    std::cout << "Area of rectange : " << rect.Area() << std::endl;
    std::cout << "Perimeter of rectangle : " << rect.Perimeter() << std::endl;

    return 0;
}