#include <assert.h>
#include <typeinfo>

enum class Color { Black, Red, Green, Blue, White};

class Shape {
public:
	virtual ~Shape() {}
public:
	virtual void Draw() = 0; // general member function
};

class Rectangle : public Shape {
public:
	void Draw() {}
	void Fill(Color color) {} // special member function
};

class Line : public Shape {
public:
	void Draw() {}
};

int main() {
	const size_t size = 2;
	Shape* pshape[size] = { new Rectangle, new Line };
	for (int i = 0; i < size; i++) {
		pshape[i]->Draw();
		if (typeid(*pshape[i]) == typeid(Rectangle)) {
			Rectangle* prect = dynamic_cast<Rectangle*>(pshape[i]); // Here because we want to call
			// special member function of Rectangle, we are doing downcasting
			assert(prect != nullptr);
			prect->Fill(Color::Blue);
		}
	}
	for (int i = 0; i < size; i++) {
		delete pshape[i];
		pshape[i] = nullptr;
	}
}
