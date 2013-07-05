// Generated from /runtime/java/util/Collections.java
#include <java/util/Collections_ValueIterator.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map_Entry.hpp>

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

java::util::Collections_ValueIterator::Collections_ValueIterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Collections_ValueIterator::Collections_ValueIterator(Iterator* it) 
    : Collections_ValueIterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(it);
}

void java::util::Collections_ValueIterator::ctor(Iterator* it)
{
    super::ctor();
    this->it = it;
}

java::lang::Object* java::util::Collections_ValueIterator::next()
{
    return java_cast< ::java::lang::Object* >(npc(java_cast< Map_Entry* >(npc(it)->next()))->getValue());
}

bool java::util::Collections_ValueIterator::hasNext()
{
    return npc(it)->hasNext();
}

void java::util::Collections_ValueIterator::remove()
{
    npc(it)->remove();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Collections_ValueIterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Collections.ValueIterator", 35);
    return c;
}

java::lang::Class* java::util::Collections_ValueIterator::getClass0()
{
    return class_();
}

