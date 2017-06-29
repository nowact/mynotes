---
title: ios animation
date: 2017-06-22 18:39:16
tags:
---

CAAnimation
    ↓
CAPropertyAnimation
    ↓                    ↓
CABasicAnimation    CAKeyframeAnimation

CABasicAnimation    
Simple animations involve changing the properties(from a start value to an end value) of a layer
and letting Core Animation animate those changes over time.  Simple animation 也被称为property-based animation.
implicit simple animation: all you have to do is update the properties of your layer object. 
explicit simple animation: create a CABasicAnimation object and use that object to configure the animation parameters
