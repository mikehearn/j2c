// Generated from /runtime/java/lang/NoClassDefFoundError.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/LinkageError.hpp>

struct default_init_tag;

class java::lang::NoClassDefFoundError
    : public LinkageError
{

public:
    typedef LinkageError super;
protected:
    void ctor(String* message);
    void ctor();

    // Generated

public:
    NoClassDefFoundError(String* message);
    NoClassDefFoundError();
protected:
    NoClassDefFoundError(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
