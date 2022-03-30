#include <iostream>

// class Parent { public: virtual ~Parent( void ) {} };						// Virtual destructeur (presence vtable) (polymorphisme par sous typage)
																			// (active runtime type info : rtti )

// class Child1 : public Parent {};
// class Child2 : public Parent {};

class A {};
class B {};

class C {

public:
				C( A const & _ ) { return ; }

	explicit 	C( B const & _ ) { return ; }
};


void 	f(C const & _ ) {

	return ;
}

int main ( void ) {

	f( A() );		// Implicit conversion OK
	f( B() );		// Implicit Conversion NOT ok, constructor is explicit

	return (0);
}

