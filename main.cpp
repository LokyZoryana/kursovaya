#include <iostream>
#include <string>
#include <exception>

using namespace std;

class Human{
private:
    string FirstName;
    string Name;
    string Organization;
    string Rank;
public:

};

class Guest : public Human{
private:
public:
};

class Seller : public Human{
private:
    int pay;
public:
        int Pay{

        }

};

class Inspector : public Human{
private:
public:
    string Control{

}
};

class Dish {
private:
public:
};

class Sweet : public Dish{
private:
public:
};

class Bake : public Dish {
private:
public:
};


int main()
{
return 0;
}