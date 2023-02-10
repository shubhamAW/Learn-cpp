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

class Oval : public Shape { // 'Oval' has become an abstract class, because 'Shape::Draw' is not implemented in 'Oval'
};

void Draw(Shape* pshape) {
	pshape->Draw();
}

int main() {
	//Shape shape; // Since 'Shape' is an abstract class, it can not be instantiated
	Shape* pshape = nullptr; // Pointer of 'Shape' (abstract class) can be defined
	
	Triangle t;
	Shape& rt = t; // Reference of 'Shape' (abstract class) can be defined
	Draw(&t);

	Rectangle r;
	Draw(&r);

	//Oval o; // Since 'Shape::Draw' is not implemented in 'Oval', it has become an abstract class
	//Draw(&o);
}

/*
- 'Draw' of 'Shape' is known as pure virtual function or abstract function.
- When we know certain operation exist in the base class but we don't know its
  implementation, then we declare such function as a pure virtual function or abstract function.
- Having one or more abstract functions in a class, makes that class an abstract class.
- Note 'Shape' class is now an abstract class.
- An abstract class cannot be instatiated.
- The class which can be instatiated is called as concrete class. For ex. 'Triangle', 'Rectangle' classes
  are concrete classes.
- If abstract function of a base class is not implemented in derived class then that derived class also
  becomes an abstract class. Oval is an example of derived class turned into abstract class.
- Pointer and reference of an abstract class can be defined.
- Abstract class besides abstract methods can have all sorts of members.
*/
