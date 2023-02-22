class IClonnable {
public:
	virtual void Clone() = 0; // pure virtual function
};

class ISerializable {
public:
	virtual void Serialize() = 0;
};

class Dervied : public IClonnable, public ISerializable {
public:
	void Clone() override {}
	void Serialize() override {}
};

int main() {
	//IClonnable clonnable;
	Dervied derived;
	derived.Clone();
	derived.Serialize();

	IClonnable* pclonnable = &derived;
	pclonnable->Clone();

	ISerializable* sclonnable = &derived;
	sclonnable->Serialize();

}

/*
- An interface is an abstract class which contains public pure virtual functions
  and optionally virtual destructor.
- Thus every interface is an abstract class, however every abstract class is not an interface.
- In Microsoft programming, interface name is prefixed with letter 'I'.
- In CAA programming, interface name is prefixed with 'CATI'.
*/