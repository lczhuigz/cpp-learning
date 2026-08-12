class Base{

    protected:

        int n;

    private:

        void foo1(Base & b){

            n ++;   //  okey
            b.n ++; //  okey
        }
};

class Derived :public Base{

    void foo2(Base &b, Derived &d){

        n ++;   //  okey
        this -> n ++;   //  okey
        //b.n ++;   //Error. You cannot access a protected member through base
        d.n ++; //  okey
    }
};

void compare(Base &b, Derived &d){  //  a non-member non-friend function

    //  b.n ++;  //Error
    //  d.n ++;  //Error
}