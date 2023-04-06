#include "Header.h"

fstream& operator >>(fstream& is, User& obj)
{
    is >> obj._name;
    is >> obj._login;
    is >> obj._pass;
    return is;
}
ostream& operator <<(ostream& os, const User& obj)
{
    os << obj._name;
    os << ' ';
    os << obj._login;
    os << ' ';
    os << obj._pass;
    return os;
};
fstream& operator >>(fstream& is, Message& obj)
{
    is >> obj._text;
    is >> obj._sender;
    is >> obj._receiver;
    return is;
}
ostream& operator <<(ostream& os, const Message& obj)
{
    os << obj._text;
    os << ' ';
    os << obj._sender;
    os << ' ';
    os << obj._receiver;
    return os;
};