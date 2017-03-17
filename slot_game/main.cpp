#include"Usage.hpp"
#include"Slot.hpp"


int main (int argc, char**argv)
{
    int choice = 0;
    Usage *u = Usage::instance();
    User user("aristocrat");
    Slot slot;
    slot.assignUser(&user);
    while(true) {
        u->outputUsage();
        choice = u->getChoice();
        cout<<"Your Choice is "<<"\""<<u->getUsageStr(choice)<<"\""<<endl;
        u->action(choice, user, slot);
    }
    return 1;
}
