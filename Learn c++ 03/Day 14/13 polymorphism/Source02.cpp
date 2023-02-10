class Shape {
public:
	virtual void Draw() const = 0;
};

class Triangle : public Shape {
public:
	 void Draw() const override {}
};

class Rectangle : public Shape {
public:
	 void Draw() const override {}
};

class Oval : public Shape {
public:
	void Draw() const override {}
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