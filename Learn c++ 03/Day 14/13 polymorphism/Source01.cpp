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

void Draw(Shape* pshape) {
	pshape->Draw();
}

int main() {
	Triangle t;
	Draw(&t);

	Rectangle r;
	Draw(&r);

	Oval o;
	Draw(&o);
}

/*
- In the above code, pshape->Draw() draws the kind of graphical object with which pshape pointer is associated.
- 'pshape->Draw()' expression exhibits the polymorphic behaviour.
- Thus, an expression involving base pointer along with call to virtual function, exhibits polymorphic behaviour.
- The polymorphism exhibited by pshape->Draw() is known as runtime polymorphism.
- Function and operator overloading is known as compile time polymorphism.
*/
