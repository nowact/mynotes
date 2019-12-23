
python import

#### 最常见(最推荐)的导入方式

1. import module_name [as alias]  
   导入整个模块
2. from module_name import attribute_name [as alias]  
   from package_name.module_name import attribute_name [as alias]  
   执行了正常的模块的导入过程，但是仅attribute_name在当前命名空间可见

3. from package_name import module_name [as alias]  
   from package_name.sub_package_name import module_name [as alias]  
   从包中导入子模块



#### 不推荐的用法
1. import package_name  
   python默认不会自动导入一个包下的子模块,所以用如下的方式访问子模块会报错  
   package_name.module_name.attribute_name  
   这样设计的好处是避免自动导入不相关的包引起的副作用，和避免一个包含有大量子模块导致导入耗时过久。但是包的作者可以在包的初始化文件__init__.py中根据需要做相应的定制。
   
2. import package_name.sub_package_name.module_name  
   该方式导入后使用不方便，需要全路径引用  
   package_name.sub_package_name.module_name.attribute_name


#### 错误的用法
1. import module_name.attribute_name  
   直接import之后必须是包名或模块名，不能包含模块里具体的定义
