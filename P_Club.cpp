#include <iostream>
#include <climits>
using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;
    int v_x;
    int v_y;
    int x;
    int y;

public:
    Car(string make, string model, int year, int v_x, int v_y, int x, int y)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->v_x = v_x;
        this->v_y = v_y;
        this->x = x;
        this->y = y;
    }

    int get_v_x()
    {
        return v_x;
    }
    int get_v_y()
    {
        return v_y;
    }
    int get_x()
    {
        return x;
    }
    int get_y()
    {
        return y;
    }

    // x direction
    void accelerate_px(int speed)
    {
        v_x += speed;
    }
    void accelerate_nx(int speed)
    {
        v_x -= speed;
    }
    void brake_px(int speed)
    {
        v_x -= speed;
    }
    void brake_nx(int speed)
    {
        v_x += speed;
    }

    // y direction
    void accelerate_py(int speed)
    {
        v_y += speed;
    }
    void accelerate_ny(int speed)
    {
        v_y -= speed;
    }
    void brake_py(int speed)
    {
        v_y -= speed;
    }
    void brake_ny(int speed)
    {
        v_y += speed;
    }

    // move
    void move()
    {
        x += v_x;
        y += v_y;
    }

    bool detect_collision(Car Car_2)
    {
        // time should also be greater than or equal to zero
        if ((float)(x - Car_2.get_x()) / (float)(Car_2.get_v_x() - v_x) >= 0 && ((float)(x - Car_2.get_x()) / (float)(Car_2.get_v_x() - v_x) == (float)(y - Car_2.get_y()) / (float)(Car_2.get_v_y() - v_y)))
            return true;
        return false;
    }

    int time_to_collision(Car Car_2)
    {
        if (detect_collision(Car_2))
            return (float)(x - Car_2.get_x()) / (float)(Car_2.get_v_x() - v_x);

        // if the cars does not collide the function return INT_MAX as time
        return INT_MAX;
    }

    ~Car()
    {
    }
};

int main()
{
    Car Car_1("Audi", "R8", 2007, 0, 0, 10, 20);
    Car Car_2("Mercedes", "Benz", 2012, 5, -10, 0, 0);
    Car_1.accelerate_px(10);
    if (Car_1.detect_collision(Car_2))
        cout << "Collision" << endl;
    else
        cout << "No collision";
    return 0;
}