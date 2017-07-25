---
title: lldb usage
date: 2017-07-05 09:46:23
tags:
---

设置断点
-------

- 指定文件行号
breakpoint set --file foo.c --line 12 

- 指定c语言函数名
breakpoint set --name foo

- 指定objective-c方法名
breakpoint set --selector alignLeftEdges: 

- 指定objective-c类名和方法名
breakpoint set -name "-[UICollectionView reloadData]"

