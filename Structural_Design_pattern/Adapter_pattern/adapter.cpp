
#include<iostream>
#include<memory>
using namespace std;

class IndianSocket {
    public:
      virtual void indianCharge() = 0;
};


class USAsocket {
    public:
    void UsaCharge() {
        cout << "USA Plug is charging" << endl;
    }
};

class SocketAdapter : public IndianSocket, public USAsocket {

    public:
       void indianCharge() {
         UsaCharge();
       }
};

int main () {
    unique_ptr<IndianSocket> socket = make_unique<SocketAdapter>();
    socket->indianCharge();
    return 0;
}

