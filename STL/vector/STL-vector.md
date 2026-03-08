### vector容器
`vector<int> m` 造了一个名称是`m`的`vector`类型的容器
`m.push_back(10)`就是在内存中开辟了一个空间，把$10$这个数存了进去。
`vector<int>::iterator`是要编译器给一个用于装整数的`vector `容器里的迭代器
`begin()/end()`就是迭代器，指向容器中最开始/最末尾的后一个地址
**注意** 可以使用`auto Begin = m.begin()`替代之前的复杂写法，让编译器自己去猜。

容器中存的是数，但是迭代器通过地址来帮助我们查找那些数，这也就是为什么最后打印数据的时候需要使用解引用`*`运算符。
$$\text{迭代器} = \text{指针的逻辑} + \text{更强的适应性}$$
由于`vector`容器中一般内存连续，所以迭代器一般是原生指针。
**注意**
```C++
vector<int>::iterator Begin = m.begin();
vector<int>::iterator End = m.end();
for(Begin;Begin!=End;Begin++)
{
    cout<<*Begin<<" ";
}
```
运行此代码，会出现`warning`,因为在编译器看来这个`for`循环中，`Begin`啥也没做，无实际意义。
所以要么使用`while`循环，要么在循环内部定义迭代器