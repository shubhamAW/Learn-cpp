
int main() {
	Circle u(10);
	double area = u.GetArea();
	// area = Circle::GetArea(); // Error because GetArea() is a non-static member function. Hence object is required.
	area = u.GetArea(15);
	area = Circle::GetArea(20);
}

/*
- Static member function can be called using object or class name.
- Static member function cannot be const.
- When to declare member function as static?
  When implmentation of member function doesn't depends upon data members (state variables).
- Static member function doesn't have 'this' pointer.
*/
