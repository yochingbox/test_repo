/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file ver.h
* \purpose version control
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/ 
#ifndef _VER_H
#define _VER_H

/* Version Control Rules
Major version - major feature, file format changes
Minor version – minor feature
Patch version – Bug fixes
Build version – every release build
*/
enum version{
    MAJOR_VER = 0,
    MINOR_VER = 0,
    PATCH_VER = 0,
    BUILD_VER = 40
};

#endif // _VER_H
