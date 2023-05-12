#include <cassert>
#include <stdexcept>

// TODO: Define class Pyramid

class Pyramid {


    private:
    int length;
    int width;
    int height;
    int volume;

    void calculateVolume();

public:
    Pyramid(int input_length, int input_width, int input_height);

    [[nodiscard]] int getLength() const;
    [[nodiscard]] int getWidth() const;
    [[nodiscard]] int getHeight() const;
    [[nodiscard]] int getVolume() const;
    
    void setLength(int input_length);
    void setWidth(int input_width);
    void setHeight(int input_height);

};

Pyramid::Pyramid(int input_length, int input_width, int input_height) :
        length (input_length), width(input_width), height(input_height), volume(0) {
    if (length < 0 || width < 0 || height < 0) {
        throw std::invalid_argument("Pyramid arguments must be positive");
    }
    Pyramid::calculateVolume();
}

int Pyramid::getLength() const{
    return length;
}
int Pyramid::getWidth() const{
    return width;
}
int Pyramid::getHeight() const{
    return height;
}

void Pyramid::calculateVolume()  {
    volume = length * width * height / 3;
}
int Pyramid::getVolume() const {
    return volume;
}


void Pyramid::setLength(int input_length) {
    length = input_length;
}

void Pyramid::setWidth(int input_width) {
    width = input_width;
}

void Pyramid::setHeight(int input_height) {
    height = input_height;
}


int main() {
  Pyramid pyramid(4, 5, 6);
  assert(pyramid.getLength() == 4);
  assert(pyramid.getWidth() == 5);
  assert(pyramid.getHeight() == 6);
  assert(pyramid.getVolume() == 40);

  bool caught{false};
  try {
    Pyramid invalid(-1, 2, 3);
  } catch (...) {
    caught = true;
  }
  assert(caught);
}

