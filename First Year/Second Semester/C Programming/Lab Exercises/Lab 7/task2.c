#include <stdio.h>
#include <string.h>

struct Vehicle {
    char name[20];
    int maxSpeed;
};

struct Car {
    struct Vehicle v;
    int doors;
};

struct Boat {
    struct Vehicle v;
    int capacity;
};

struct Plane {
    struct Vehicle v;
    int maxHeight;
};

int main() {
    struct Car car = {{"Car", 180}, 4};
    struct Boat boat = {{"Boat", 80}, 50};
    struct Plane plane = {{"Plane", 900}, 10000};

    if(car.v.maxSpeed > plane.v.maxSpeed) {
        printf("Car is faster\n");
    }

    else
        printf("Plane is faster\n");

    return 0;
}
