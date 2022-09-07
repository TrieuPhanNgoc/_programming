#include <iostream>

typedef struct 
{
    int length;
    int width;
    std::string name;
} Rectangle;

int main() {
    Rectangle* rec = new Rectangle();
    rec->length = 15;
    rec->width = 10;
    rec->name = "ClickButton";

    std::cout << "Name of Rectangle: " << rec->name << " - with size: " << rec->length << "x" << rec->width << std::endl;

    return 0;
}
