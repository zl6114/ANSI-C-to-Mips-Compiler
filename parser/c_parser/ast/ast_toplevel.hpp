#ifndef ast_toplevel_hpp
#define ast_toplevel_hpp

#include <string>
#include <iostream>
#include <vector>


// ########  #######  ########     ##       ######## ##     ## ######## ##
//    ##    ##     ## ##     ##    ##       ##       ##     ## ##       ##
//    ##    ##     ## ##     ##    ##       ##       ##     ## ##       ##
//    ##    ##     ## ########     ##       ######   ##     ## ######   ##
//    ##    ##     ## ##           ##       ##        ##   ##  ##       ##
//    ##    ##     ## ##           ##       ##         ## ##   ##       ##
//    ##     #######  ##           ######## ########    ###    ######## ########


class Program
{
public:
    virtual ~Program()
    {
    }

    Program(){
    }



    virtual void print() const =0;

};

class Program_call
    : public Program
{
private:
    const Program *Program_call1;
    const Program *Program_call2;
public:
    Program_call(const Program *_Program_call1, const Program *_Program_call2)
        : Program_call1(_Program_call1)
        , Program_call2(_Program_call2)
    {}


    virtual void print() const override
    {
        Program_call1 -> print();
        Program_call2 -> print();
    }

    ~Program_call(){
        delete Program_call1;
        delete Program_call2;
    }

};

class Empty
	: public Program
{
public:
	Empty()
	{
	}

    virtual void print() const override
    {
    }

	~Empty(){
	}
};

#endif
