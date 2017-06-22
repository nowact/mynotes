---
title: charts ios port of MPAndroidChart
date: 2017-06-20 18:36:18
tags:
---

Class List
==========

ChartView
---------
@brief
@property list
ChartData  //管理多个数据集，每个数据集可以绘制一条独立的曲线

ChartData
--------
@property
`NSArray<DataSet>`

@method
setDrawValues //Enables / disables drawing values (value-text) for all DataSets this data object contains.

DataSet
---------
@property list
`Array<DataEntry>` //数据集中的所有数据项

DataEntry
---------
@property list
x //数据项的x坐标
y //数据项的y坐标
icon //数据项显示时的icon

ChartXAxis --> ChartAxisBase
-----
@brief
Each Line-, Bar-, Scatter-, CandleStick- and RadarChart has an XAxis object.

@property
label //数轴旁边的刻度
gridLines //平行于数轴的刻度线

@method
setLabelRotationAngle //设置刻度label的旋转角度

ChartYAxis --> ChartAxisBase
-----
@brief
Each Line-, Bar-, Scatter or CandleStickChart has a left and a right YAxis object, responsible for either the left, or the right axis respectively. The RadarChart has only one YAxis.

