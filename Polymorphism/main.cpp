#include <iostream>
using namespace std;

/*==============================================================================
 *      POLYMORPHISM
 * ==============================================================================
 * In it's simplicity it means "Many forms"
 * Types of Polymorphism:
 * 1.) Compile-time polymorphism
 *          a) Function overloading : Same name different parameters
 *          b) Operator Overloading
 * 2.) Runtime Polymorphism
 *          a) Method Overriding : Where a method in a derived class has same name
 *          and parameters as method in the base class, but does different things.
 * */

// Base class
class MediaDevice {
public:
    // The virtual keyword means that this function can be overridden in any derived class.
    virtual void play(){
        cout << "Starting playback." << endl;
    }
};

//Derived class for DVD
class DVDPlayer : public MediaDevice {
public:
    // The override keyword confirms that this function is intended to
    // override a virtual function in the base class.
    void play() override{
        cout << "Playing DVD." << endl;
    }
};

//Derived class for Streaming
class StreamingService : public MediaDevice{
public:
    void play() override {
        cout << "Streaming online video." << endl;
    }
};

int main() {
    MediaDevice* device;
    DVDPlayer dvd;
    StreamingService stream;

    /*
     * -> Operator: In C++, the arrow operator (->) is used to access members
     * (methods or properties) of an object through a pointer to an object.
     * device->play() means "access the play method of the object that device points to."
     *
     * The need to use device->play() instead of just play() is about specifically
     * directing the function call to the method associated with the object that
     * the pointer (device) refers to. This allows for flexible, dynamic behavior
     * in complex systems, leveraging the power of polymorphism in
     * object-oriented programming. Without using device->, you wouldn't be specifying
     * which object's play method to call, which is essential when the method behavior
     * varies between different objects.
     *
     * */

    //point to DVD player
    device = &dvd;
    device->play(); // outputs playing DVD

    // Point to streaming service
    device = &stream;
    device->play(); // outputs streaming online video


    return 0;
}
