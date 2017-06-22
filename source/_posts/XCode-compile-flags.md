---
title: XCode compile flags
date: 2017-06-15 11:13:05
tags:
---

编译源文件生成目标文件



链接生成App
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang -arch arm64
 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS10.3.sdk
 -L/Users/it/Library/Developer/Xcode/DerivedData/HelloWorld-aqsxjkpgwopliietielmucyfycyg/Build/Products/Debug-iphoneos
 -F/Users/it/Library/Developer/Xcode/DerivedData/HelloWorld-aqsxjkpgwopliietielmucyfycyg/Build/Products/Debug-iphoneos
 -filelist /Users/it/Library/Developer/Xcode/DerivedData/HelloWorld-aqsxjkpgwopliietielmucyfycyg/Build/Intermediates/HelloWorld.build/Debug-iphoneos/HelloWorld.build/Objects-normal/arm64/HelloWorld.LinkFileList
 -Xlinker -rpath -Xlinker @executable_path/Frameworks -miphoneos-version-min=10.0 -dead_strip -Xlinker -object_path_lto
 -Xlinker /Users/it/Library/Developer/Xcode/DerivedData/HelloWorld-aqsxjkpgwopliietielmucyfycyg/Build/Intermediates/HelloWorld.build/Debug-iphoneos/HelloWorld.build/Objects-normal/arm64/HelloWorld_lto.o
 -Xlinker -export_dynamic -Xlinker -no_deduplicate -fembed-bitcode-marker -fobjc-arc -fobjc-link-runtime -framework helloframew
 -Xlinker -dependency_info
 -Xlinker /Users/it/Library/Developer/Xcode/DerivedData/HelloWorld-aqsxjkpgwopliietielmucyfycyg/Build/Intermediates/HelloWorld.build/Debug-iphoneos/HelloWorld.build/Objects-normal/arm64/HelloWorld_dependency_info.dat 
 -o /Users/it/Library/Developer/Xcode/DerivedData/HelloWorld-aqsxjkpgwopliietielmucyfycyg/Build/Products/Debug-iphoneos/HelloWorld.app/HelloWorld


-fobjc-arc
   Synthesize retain and release calls for Objective-C pointers
   启用Automatic Reference Counting

-Xlinker <arg>
   Pass arg to the linker.
   传入参数给连接器(ld)

-isysroot <dir>
   Set the system root directory (usually /)

-iquote <directory>
   Add directory to QUOTE include search path
   增加引号方式(#include "")包含头文件的查找目录

-include <filename> 
   相当于执行编译之前, 在源文件中增加一个#include <filename>


