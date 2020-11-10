#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
} 

void Rectangle::set_width(int w) {
    this->width = w;
}

void Rectangle::set_height(int h) {
    this->height = h;
}

int Rectangle::area() {
    return width * height;
}

int Rectangle::perimeter() {
	return (width*2) + (height*2);
}

int Rectangle::get_width() {
	return 0;
}

int Rectangle::get_height() {
	return 0;
}
