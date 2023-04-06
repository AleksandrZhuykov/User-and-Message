#pragma once
#include <fstream>
#include <iostream>

using namespace std;

class User {
    string _name;
    string _login;
    string _pass;
public:
    User(string name, string login, string pass) :_name(name), _login(login), _pass(pass) {}

    friend fstream& operator >>(fstream& is, User& obj);
    friend ostream& operator <<(ostream& os, const User& obj);
};
class Message {
    string _text;
    string _sender;
    string _receiver;
public:
    Message(string text, string sender, string receiver) :_text(text), _sender(sender), _receiver(receiver) {}

    friend fstream& operator >>(fstream& is, Message& obj);
    friend ostream& operator <<(ostream& os, const Message& obj);
};