class A {
private:
    int x;
    B b;
    C* c;
public:
    A& operator= (const  A& a) {
        if (this == &a) return *this;
        C* temp_c = nullptr;
        try {
            temp_c = new C(*a.c);
            b = a.b;
            x = a.x;
        } catch (std::exception& e) {
            if (temp_c) delete temp_c;
            return *this;
        }
        delete c;
        c = temp_c;
        return *this;
    }
}
