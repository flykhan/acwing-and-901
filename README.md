# 代码训练

# AcWing

## 1. [3375. 成绩排序 - AcWing题库](https://www.acwing.com/problem/content/3378/)

给定学生的成绩单，成绩单中包含每个学生的姓名和分数，请按照要求将成绩单按成绩从高到低或从低到高的顺序进行重新排列。

对于成绩相同的学生，无论以哪种顺序排列，都要按照原始成绩单中靠前的学生排列在前的规则处理。

#### 输入格式

第一行包含整数 N，表示学生个数。

第二行包含一个整数 0 或 1，表示排序规则，0 表示从高到低，1 表示从低到高。

接下来 N 行，每行描述一个学生的信息，包含一个长度不超过 10 的小写字母构成的字符串表示姓名以及一个范围在 0∼100 的整数表示分数。

#### 输出格式

输出重新排序后的成绩单。

每行输出一个学生的姓名和成绩，用单个空格隔开。

#### 数据范围

1≤N≤1000

#### 输入样例1：

```
4
0
jack 70
peter 96
Tom 70
smith 67
```

#### 输出样例1：

```
peter 96
jack 70
Tom 70
smith 67
```

#### 输入样例2：

```
4
1
jack 70
peter 96
Tom 70
smith 67
```

#### 输出样例2：

```
smith 67
jack 70
Tom 70
peter 96
```



## 2. [3376. 成绩排序2 - AcWing题库](https://www.acwing.com/problem/content/3379/)

给定学生的成绩单，成绩单中包含每个学生的学号和分数，请将成绩单按成绩从低到高的顺序重新排序。

如果学生的成绩相同，则按照学号从小到大的顺序进行排序。

#### 输入格式

第一行包含整数 N，表示学生数量。

接下来 N 行，每行包含两个整数 p 和 q，表示一个学生的学号和成绩。

学生的学号各不相同。

#### 输出格式

输出重新排序后的成绩单。

每行输出一个学生的学号和成绩，用单个空格隔开。

#### 数据范围

1≤N≤100,
1≤p≤100,
0≤q≤100

#### 输入样例：

```
3
1 90
2 87
3 92
```

#### 输出样例：

```
2 87
1 90
3 92
```



## 3. [3373. 进制转换 - AcWing题库](https://www.acwing.com/problem/content/3376/)

将一个长度最多为 30 位数字的十进制非负整数转换为二进制数输出。

#### 输入格式

输入包含多组测试数据。

每组测试数据占一行，包含一个长度不超过 3030 位的十进制非负整数。

#### 输出格式

每组数据输出一个结果，占一行，为输入对应的二进制数。

#### 数据范围

输入最多包含 100100 组测试数据。

#### 输入样例：

```
0
1
3
8
```

#### 输出样例：

```
0
1
11
1000
```



## 4. [3374. 进制转换2 - AcWing题库](https://www.acwing.com/problem/content/3377/)

将 M 进制的数 X转换为 N 进制的数输出。

#### 输入格式

第一行包括两个整数：M 和 N。

第二行包含一个数 X，X 是 M 进制的数，现在要求你将 M 进制的数 X 转换成 N 进制的数输出。

#### 输出格式

共一行，输出 X 的 N 进制表示。

#### 数据范围

2≤N,M≤36
X 最多包含 100 位。
在输入中，当某一位数字的值大于 10（十进制下）时，我们用大写字母 A∼Z，分别表示（十进制下的）数值 10∼35。
在输出中，当某一位数字的值大于 10（十进制下）时，我们用小写字母 a∼z，分别表示（十进制下的）数值 10∼35。

#### 输入样例：

```
10 2
11
```

#### 输出样例：

```
1011
```



