class A {
private:
    int x;
    B b;
    C* c;
public:
    A (const A& a) {
        x = a.x;
        b = a.b;
        c = new C(*a.c);
    }
    A& operator= (const  A& a) {
        try{
            A new_a(a);
            std::swap(*this, new_a);
        } catch (std::exception& e) {
            
        }
        return *this;
    }
}
