#include <iostream>
#include <functional>
#include <cassert>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//using callback_t = void (*) (int n);

typedef void (*callback_t) (int n);

using FunctionCallback1 = std::function<void (int)>;

void Ctimer_API(callback_t* ptr_to_ptr)
{
    printf("CTimer_API_running\n");
    if(ptr_to_ptr != nullptr && *ptr_to_ptr != nullptr) {
    	auto ptr_to_fun = *ptr_to_ptr;
    	(*ptr_to_fun)(5);

    	(**ptr_to_ptr)(17);
    } else {
    	printf ("Ctimer_API called with nullptr");
    }

}

void helloworld(int i){
	cout << "!!!Hello World!!!\n" << endl;
}

auto get_callback() -> FunctionCallback1&
{
	 cout << "GetCallback running\n" << endl;
     // Global variable, its lifetimes corresponds to the program lifetime.
     static FunctionCallback1 callback;
     return callback;
};

/** Set global variable callback */
auto set_callback(FunctionCallback1 func) -> void
{
	cout << "SetCallback running\n" << endl;
     auto& callback = get_callback();
     callback = func;
}

void callback_adapter(int n)
{
	cout << "Callback A running with argument " << n << endl;
    get_callback()(n);
}

void RegisterCallback(const std::function<void(int)>& callback){
	cout << "RegisterCallback running\n" << endl;
//	ctimerRegisterCallback(&callback);	it has conversion error
	set_callback(callback);
	static callback_t callback2 = &callback_adapter;
	Ctimer_API(&callback2);
	//Ctimer_API(nullptr);

}

int main() {

	//callback_t caller;
	//caller = helloworld;
	auto foo = [](int flag0){cout << "foo entered\n" << endl;};
	//caller = foo;
	RegisterCallback(foo);

	//Ctimer_API(caller);
	return 0;
}
