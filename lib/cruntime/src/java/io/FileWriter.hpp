// Generated from /runtime/java/io/FileWriter.java

#pragma once

#include <fwd-runtime.hpp>
#include <java/io/fwd-runtime.hpp>
#include <java/lang/fwd-runtime.hpp>
#include <java/io/Writer.hpp>

struct default_init_tag;

class java::io::FileWriter
    : public Writer
{

public:
    typedef Writer super;

private:
    Writer* out {  };
protected:
    void ctor(FileOutputStream* out);
    void ctor(FileDescriptor* fd);
    void ctor(::java::lang::String* path) /* throws(IOException) */;
    void ctor(File* file) /* throws(IOException) */;

public:
    void write(::char16_tArray* b, int32_t offset, int32_t length) /* throws(IOException) */ override;
    void flush() /* throws(IOException) */ override;
    void close() /* throws(IOException) */ override;

    // Generated

private:
    FileWriter(FileOutputStream* out);

public:
    FileWriter(FileDescriptor* fd);
    FileWriter(::java::lang::String* path);
    FileWriter(File* file);
protected:
    FileWriter(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void write(int32_t c);
    virtual void write(::char16_tArray* buffer);
    virtual void write(::java::lang::String* s);
    virtual void write(::java::lang::String* s, int32_t offset, int32_t length);

private:
    virtual ::java::lang::Class* getClass0();
};
