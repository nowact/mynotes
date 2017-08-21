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

CAKeyframeAnimation
Whereas a property-based animation changes a property from a start value to an end value, a CAKeyframeAnimation object lets you animate through a set of target values in a way that might or might not be linear. A key frame animation consists of a **set of target data values** and the times at which each value should be reached. The key frame values are the most important part of a keyframe animation. These values define the behavior of the animation over the course of its execution. The main way to specify keyframe values is as an **array of objects** but for values that contain a **CGPoint** data type (such as the layer’s anchorPoint and position properties), you can specify a **CGPathRef** data type instead.
