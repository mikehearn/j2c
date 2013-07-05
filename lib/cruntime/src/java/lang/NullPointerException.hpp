// Generated from /runtime/java/lang/NullPointerException.java

#pragma once

#include <java/lang/fwd-runtime.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::lang::NullPointerException
    : public RuntimeException
{

public:
    typedef RuntimeException super;
protected:
    void ctor(String* message, Throwable* cause);
    void ctor(String* message);
    void ctor(Throwable* cause);
    void ctor();

    // Generated

public:
    NullPointerException(String* message, Throwable* cause);
    NullPointerException(String* message);
    NullPointerException(Throwable* cause);
    NullPointerException();
protected:
    NullPointerException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
