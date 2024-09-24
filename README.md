# test-mix-dll

该工程会生成mydll动态库和test-dll应用程序，test-dll调用mydll打印了一个`std::string`字符串的长度。

debug编译的test-dll能正常调用release编译的mydll吗？进行测试。

## 自行编译

使用CMAKE分别在debug和release模式下进行编译

## 或者直接使用预编译文件

若不想自行编译，可以直接使用build/下的预编译文件，编译平台为WINDOWS X64。

## 测试

分别测试3种动态库使用方式：

- debug的应用程序使用debug的动态库：直接运行debug编译目录下的test-dll
- release的应用程序使用release的动态库。：直接运行release编译目录下的test-dll
- debug的应用程序使用release的动态库：创建一个新文件夹test-mix，将debug的test-dll和release的mydll拷贝到此，然后运行test-dll

## 预期结果

当mydll与test-dll编译模式相同时，mydll中的函数能输出正确字符串长度“12”；而混用编译模式时，输出错误结果。

这说明混用是会影响程序正常运行的，因为`std::string`在不同编译模式下的实现代码和内存分布不兼容。
