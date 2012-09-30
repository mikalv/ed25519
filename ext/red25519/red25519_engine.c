#include "ruby.h"

static VALUE mEd25519 = Qnil;
static VALUE mEd25519_Engine = Qnil;

static VALUE Ed25519_Engine_create_keypair(VALUE self, VALUE seed);

void Init_red25519_engine()
{
    mEd25519 = rb_define_module("Ed25519");
    mEd25519_Engine = rb_define_module_under(mEd25519, "Engine");

    rb_define_singleton_method(mEd25519_Engine, "create_keypair", Ed25519_Engine_create_keypair, 1);
}

static VALUE Ed25519_Engine_create_keypair(VALUE self, VALUE seed)
{
    return Qnil;
}
