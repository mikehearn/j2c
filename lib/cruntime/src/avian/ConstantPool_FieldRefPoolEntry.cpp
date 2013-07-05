// Generated from /runtime/avian/ConstantPool.java
#include <avian/ConstantPool_FieldRefPoolEntry.hpp>

#include <avian/ConstantPool.hpp>
#include <avian/Stream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

avian::ConstantPool_FieldRefPoolEntry::ConstantPool_FieldRefPoolEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

avian::ConstantPool_FieldRefPoolEntry::ConstantPool_FieldRefPoolEntry(int32_t classIndex, int32_t nameAndTypeIndex) 
    : ConstantPool_FieldRefPoolEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(classIndex,nameAndTypeIndex);
}

void avian::ConstantPool_FieldRefPoolEntry::ctor(int32_t classIndex, int32_t nameAndTypeIndex)
{
    super::ctor();
    this->classIndex = classIndex;
    this->nameAndTypeIndex = nameAndTypeIndex;
}

void avian::ConstantPool_FieldRefPoolEntry::writeTo(::java::io::OutputStream* out) /* throws(IOException) */
{
    Stream::write1(out, ConstantPool::CONSTANT_Fieldref);
    Stream::write2(out, classIndex + int32_t(1));
    Stream::write2(out, nameAndTypeIndex + int32_t(1));
}

bool avian::ConstantPool_FieldRefPoolEntry::equals(::java::lang::Object* o)
{
    if(dynamic_cast< ConstantPool_FieldRefPoolEntry* >(o) != nullptr) {
        auto other = java_cast< ConstantPool_FieldRefPoolEntry* >(o);
        return npc(other)->classIndex == classIndex && npc(other)->nameAndTypeIndex == nameAndTypeIndex;
    } else {
        return false;
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* avian::ConstantPool_FieldRefPoolEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"avian.ConstantPool.FieldRefPoolEntry", 36);
    return c;
}

java::lang::Class* avian::ConstantPool_FieldRefPoolEntry::getClass0()
{
    return class_();
}

