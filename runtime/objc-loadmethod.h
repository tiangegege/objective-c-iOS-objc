/***********************************************************************
* objc-loadmethod.h
* Support for +load methods.
**********************************************************************/

#ifndef _OBJC_LOADMETHOD_H
#define _OBJC_LOADMETHOD_H

#include "objc-private.h"

__BEGIN_DECLS

extern void add_class_to_loadable_list(Class cls);
extern void add_category_to_loadable_list(Category cat);
extern void remove_class_from_loadable_list(Class cls);
extern void remove_category_from_loadable_list(Category cat);

extern void call_load_methods(void);

__END_DECLS

#endif
