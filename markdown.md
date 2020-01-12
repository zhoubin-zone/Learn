# 1.使用=和-标记以及和二级标题

我是一级标题
==========
我是二级标题
----------

# 2.使用#标记
使用#可表示1-6级标题 一级对应一个# 二级对应两个# 以此类推（与文字有空格）
# 一级
## 二级
### 三级
#### 四级
##### 五级
###### 六级

# 3.markdown段落没有特殊的格式   
直接编写文字就好
段落的换行使用两个以上空格加上回车

# 4.字体
*斜体文本*  
_斜体文本_

**粗体文本**  
__粗体文本__

***粗斜体文本***  
___粗斜体文本___  

# 5.分割线 三个以上（*-_）
***
* * *
*****
______

------

# 6.删除线 ~~

~~baidu~~
# 7.下划线
<u>xiahuaxia</u>

# 7.脚注
happy[note]  

[note]:note

# list * + - 
* 1
* 2
* 3  

1. number add .   ordered   
2. 1
3. 2
4. 3  
------

1. 1234 
    - 2  
    - 3
2. 22222  
    - 333
    - 444


# 8.block
> 11111
>> 22222
>>> 3. 33333
>>> + 44444

* 11111
    > 2222
    > 3333
* 44444
    >55555
------
# 9 code block (`) tab ```type
`printf()` function
--------   
    int mian(){
        printf("hello world");
    }
-------
```javascript
console.log("hello world");    
```
```c
#include<stdio.h>
int main(){
    printf("hello world");
}
```

# 10 href  
 [name](addr)     
<http://baidu.com>

-------
this is a website [baidu][a]    
need empty line

[a]: http://baidu.com/

-------
![alt logo](https://pics3.baidu.com/feed/43a7d933c895d14380a0f8eaf82d880458af0703.jpeg?token=facf23e49aed4e7f987172d9f9918078&s=BF60E315DA743B9EF4B8DC05030060E3 "online")


<img src="https://pics3.baidu.com/feed/43a7d933c895d14380a0f8eaf82d880458af0703.jpeg?token=facf23e49aed4e7f987172d9f9918078&s=BF60E315DA743B9EF4B8DC05030060E3" width="50%">
----------------

# 11 table
Markdown 制作表格使用 | 来分隔不同的单元格，使用 - 来分隔表头和其他行。

|  表头   | 表头  |
|  ----  | ----  |
| 单元格  | 单元格 |
| 单元格  | 单元格 |

-: 设置内容和标题栏居右对齐。
:- 设置内容和标题栏居左对齐。
:-: 设置内容和标题栏居中对齐。

# 12 不在 Markdown 涵盖范围之内的标签，都可以直接在文档里面用 HTML 撰写。

目前支持的 HTML 元素有：<kbd> <b> <i> <em> <sup> <sub> <br>等 ，如：
使用 <kbd>Ctrl</kbd>+<kbd>Alt</kbd>+<kbd>Del</kbd> 重启电脑

---------------
转义
Markdown 使用了很多特殊符号来表示特定的意义，如果需要显示特定的符号则需要使用转义字符，Markdown 使用反斜杠转义特殊字符：   
**文本加粗** 
\*\* 正常显示星号 \*\*






