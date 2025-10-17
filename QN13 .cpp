#include <iostream>
using namespace std;

class c_polygon {
protected:
    float width, height;

public:
    void set_values(float w, float h) {
        width = w;
        height = h;
    }

  
    virtual float area() {
        return 0;  
    }
};


class c_rectangle : public c_polygon {
public:
    float area() override {     
        return width * height;
    }
};


class c_triangle : public c_polygon {
public:
    float area() override {
        return (width * height) / 2;
    }
};

int main() {
    c_polygon *poly;     
    c_rectangle rect;
    c_triangle tri;

    rect.set_values(10, 5);
    tri.set_values(10, 5);

    
    poly = &rect;
    cout << "Area of Rectangle: " << poly->area() << endl;

    poly = &tri;
    cout << "Area of Triangle: " << poly->area() << endl;

    return 0;
}
