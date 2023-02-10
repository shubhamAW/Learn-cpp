class Shape {
public:
	virtual void Draw() const {}
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

void Draw(Shape shape) { // Note shape is no more a reference. 
	shape.Draw(); // doesn't give polymorphic behaviour
}

int main() {
	Triangle t;
	Draw(t); // passing object of derived class such as Triangle to Draw method is resulting into object slicing

	Rectangle r;
	Draw(r);

	Oval o;
	Draw(o);
}


