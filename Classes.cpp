#include <iostream>

class A {
    int A1;
    float A2;

public:
    int getA1() {
        return A1;
    }

    void setA1(int valor) {
        A1 = valor;
    }

    float getA2() {
        return A2;
    }

    void setA2(float valor) {
        A2 = valor;
    }

    void MA1() {
        std::cout << "Metodo MA1" << std::endl;
    }

    void MA2() {
        std::cout << "Metodo MA2" << std::endl;
    }
};

class B {
    int B1;
    float B2;

public:
    int getB1() {
        return B1;
    }

    void setB1(int valor) {
        B1 = valor;
    }

    float getB2() {
        return B2;
    }

    void setB2(float valor) {
        B2 = valor;
    }

    void MB1() {
        std::cout << "Metodo MB1" << std::endl;
    }

    void MB2() {
        std::cout << "Metodo MB2" << std::endl;
    }
};

int main() {
    A objA;
    B objB;

    objA.setA1(10);
    objA.setA2(20.5);
    std::cout << "A1: " << objA.getA1() << ", A2: " << objA.getA2() << std::endl;
    objA.MA1();
    objA.MA2();

    objB.setB1(30);
    objB.setB2(40.5);
    std::cout << "B1: " << objB.getB1() << ", B2: " << objB.getB2() << std::endl;
    objB.MB1();
    objB.MB2();

    return 0;
}
