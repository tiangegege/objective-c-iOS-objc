#ifndef _OBJC_LOAD_H_
#define _OBJC_LOAD_H_

#include <objc/objc-class.h>

#include <mach-o/loader.h>

/* dynamically loading Mach-O object files that contain Objective-C code */

OBJC_EXPORT long objc_loadModules (
	char * _Nullable modlist[_Nullable], 
	void * _Nullable errStream,
	void (* _Nullable class_callback) (Class _Nullable, Category _Nullable),
	/*headerType*/ struct mach_header * _Nullable * _Nullable hdr_addr,
	char * _Nullable debug_file
) OBJC2_UNAVAILABLE;

OBJC_EXPORT int objc_loadModule (
	char * _Nullable moduleName, 
	void	(* _Nullable class_callback) (Class _Nullable, Category _Nullable),
	int * _Nullable errorCode
) OBJC2_UNAVAILABLE;
OBJC_EXPORT long objc_unloadModules(
	void * _Nullable errorStream,				/* input (optional) */
	void (* _Nullable unloadCallback)(Class _Nullable, Category _Nullable)		/* input (optional) */
) OBJC2_UNAVAILABLE;

#endif /* _OBJC_LOAD_H_ */
