class Shape {
public:
	virtual void Draw() const = 0;
};

class Triangle : public Shape {
public:
	virtual void Draw() const {}
};

class Rectangle : public Shape {
public:
	virtual void Draw() const {}
};

class Oval : public Shape {
public:
	virtual void Draw() const {}
};

void Draw(Shape& shape) {
	shape.Draw(); // Gives polymorphic behavior
}

int main() {
	Triangle t;
	Draw(t);

	Rectangle r;
	Draw(r);

	Oval o;
	Draw(o);
}

/*
- A base class pointer and a base class reference along with virtual function
  offers polymorphic behaviour.
*/