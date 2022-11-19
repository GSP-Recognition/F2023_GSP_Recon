#include <sample.hpp>

int main(){
    namespace_name::sample sample_object;   //constructor is called

    sample_object.helloWorld();

    //Destructor invoked when object goes out of scope
    return 0;
}