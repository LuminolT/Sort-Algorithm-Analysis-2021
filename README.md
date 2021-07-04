# Sort-Algorithm-Analysis-2021

UML Class Diagram

论文先在`\doc\Thesis.md`写：

PlanA：懒得改成Tex了，直接md渲染

PlanB：学有余力，改成Tex

![image](https://user-images.githubusercontent.com/48964589/123812733-e93ce980-d926-11eb-9b23-eb8a2d56dbdf.png)

一次测试结果，发现析构有问题
```
----------------Latest Run Log----------------
UNIFORM
0x4f7010
Bubble Sort:
        Is sorted? Yep
        Run time: 0.156s
        Swap times: 267115
        Cmp times: 523776
Insert Sort:
        Is sorted? Yep
        Run time: 0.041s
        Swap times: 1017
        Cmp times: 1023
Select Sort:
        Is sorted? Yep
        Run time: 0.037s
        Swap times: 1017
        Cmp times: 523776
Quick Sort:
        Is sorted? Yep
        Run time: 0.002s
        Swap times: 0
        Cmp times: 0
Bubble Sort:
        Is sorted? Yep
        Run time: 0.095s
        Swap times: 534230
        Cmp times: 1047552
Insert Sort:
        Is sorted? Yep
        Run time: 0.045s
        Swap times: 268132
        Cmp times: 2046
Select Sort:
        Is sorted? Yep
        Run time: 0.046s
        Swap times: 2034
        Cmp times: 785920
Quick Sort:
        Is sorted? Yep
        Run time: 0.003s
        Swap times: 0
        Cmp times: 0
0x4f7010
Bubble Sort:
        Is sorted? Noop
        Run time: 1.549s
        Swap times: 4701906
        Cmp times: 9434112
Insert Sort:
        Is sorted? Noop
        Run time: 0.606s
        Swap times: 272220
        Cmp times: 6141
Select Sort:
        Is sorted? Noop
        Run time: 0.613s
        Swap times: 6122
        Cmp times: 9172480
Quick Sort:
        Is sorted? Noop
        Run time: 0.006s
        Swap times: 0
        Cmp times: 0
Bubble Sort:
        Is sorted? Noop
        Run time: 1.519s
        Swap times: 8869582
        Cmp times: 17820672
Insert Sort:
        Is sorted? Noop
        Run time: 0.6s
        Swap times: 4439896
        Cmp times: 10236
Select Sort:
        Is sorted? Noop
        Run time: 0.615s
        Swap times: 10210
        Cmp times: 13366784
Quick Sort:
        Is sorted? Noop
        Run time: 0.011s
        Swap times: 0
        Cmp times: 0
GAUSS
0x4f7010
Bubble Sort:
        Is sorted? Noop
        Run time: 0.096s
        Swap times: 9136697
        Cmp times: 18344448
Insert Sort:
        Is sorted? Noop
        Run time: 0.041s
        Swap times: 4440913
        Cmp times: 11259
Select Sort:
        Is sorted? Noop
        Run time: 0.039s
        Swap times: 11227
        Cmp times: 13890560
Quick Sort:
        Is sorted? Noop
        Run time: 0.002s
        Swap times: 0
        Cmp times: 0
Bubble Sort:
        Is sorted? Noop
        Run time: 0.098s
        Swap times: 9403812
        Cmp times: 18868224
Insert Sort:
        Is sorted? Noop
        Run time: 0.04s
        Swap times: 4708028
        Cmp times: 12282
Select Sort:
        Is sorted? Noop
        Run time: 0.037s
        Swap times: 12244
        Cmp times: 14152704
Quick Sort:
        Is sorted? Noop
        Run time: 0.002s
        Swap times: 0
        Cmp times: 0
0x4f7010
Bubble Sort:
        Is sorted? Noop
        Run time: 1.553s
        Swap times: 13571488
        Cmp times: 27254784
Insert Sort:
        Is sorted? Noop
        Run time: 0.593s
        Swap times: 4712116
        Cmp times: 16377
Select Sort:
        Is sorted? Noop
        Run time: 0.613s
        Swap times: 16332
        Cmp times: 22539264
Quick Sort:
        Is sorted? Noop
        Run time: 0.007s
        Swap times: 0
        Cmp times: 0
Bubble Sort:
        Is sorted? Noop
        Run time: 1.513s
        Swap times: 17739164
        Cmp times: 35641344
Insert Sort:
        Is sorted? Noop
        Run time: 0.607s
        Swap times: 8879792
        Cmp times: 20472
Select Sort:
        Is sorted? Noop
        Run time: 0.619s
        Swap times: 20420
        Cmp times: 26733568
Quick Sort:
        Is sorted? Noop
        Run time: 0.011s
        Swap times: 0
        Cmp times: 0
UPPER
0x4f7010
Bubble Sort:
        Is sorted? Noop
        Run time: 0.095s
        Swap times: 18006279
        Cmp times: 36165120
Insert Sort:
        Is sorted? Noop
        Run time: 0.037s
        Swap times: 8880809
        Cmp times: 21495
Select Sort:
        Is sorted? Noop
        Run time: 0.037s
        Swap times: 21437
        Cmp times: 27257344
Quick Sort:
        Is sorted? Noop
        Run time: 0.002s
        Swap times: 0
        Cmp times: 0
Bubble Sort:
        Is sorted? Noop
        Run time: 0.095s
        Swap times: 18273394
        Cmp times: 36688896
Insert Sort:
        Is sorted? Noop
        Run time: 0.038s
        Swap times: 9147924
        Cmp times: 22518
Select Sort:
        Is sorted? Noop
        Run time: 0.038s
        Swap times: 22454
        Cmp times: 27519488
Quick Sort:
        Is sorted? Noop
        Run time: 0.002s
        Swap times: 0
        Cmp times: 0
0x4f7010
Bubble Sort:
        Is sorted? Noop
        Run time: 1.537s
        Swap times: 22441070
        Cmp times: 45075456
Insert Sort:
        Is sorted? Noop
        Run time: 0.585s
        Swap times: 9152012
        Cmp times: 26613
Select Sort:
        Is sorted? Noop
        Run time: 0.61s
        Swap times: 26542
        Cmp times: 35906048
Quick Sort:
        Is sorted? Noop
        Run time: 0.006s
        Swap times: 0
        Cmp times: 0
Bubble Sort:
        Is sorted? Noop
        Run time: 1.529s
        Swap times: 26608746
        Cmp times: 53462016
Insert Sort:
        Is sorted? Noop
        Run time: 0.607s
        Swap times: 13319688
        Cmp times: 30708
Select Sort:
        Is sorted? Noop
        Run time: 0.61s
        Swap times: 30630
        Cmp times: 40100352
Quick Sort:
        Is sorted? Noop
        Run time: 0.01s
        Swap times: 0
        Cmp times: 0
UPPER
0x4f7010
Bubble Sort:
        Is sorted? Noop
        Run time: 0.096s
        Swap times: 26875861
        Cmp times: 53985792
Insert Sort:
        Is sorted? Noop
        Run time: 0.039s
        Swap times: 13320705
        Cmp times: 31731
Select Sort:
        Is sorted? Noop
        Run time: 0.037s
        Swap times: 31647
        Cmp times: 40624128
Quick Sort:
        Is sorted? Noop
        Run time: 0.002s
        Swap times: 0
        Cmp times: 0
Bubble Sort:
        Is sorted? Noop
        Run time: 0.096s
        Swap times: 27142976
        Cmp times: 54509568
Insert Sort:
        Is sorted? Noop
        Run time: 0.039s
        Swap times: 13587820
        Cmp times: 32754
Select Sort:
        Is sorted? Noop
        Run time: 0.039s
        Swap times: 32664
        Cmp times: 40886272
Quick Sort:
        Is sorted? Noop
        Run time: 0.002s
        Swap times: 0
        Cmp times: 0
0x4f7010
Bubble Sort:
        Is sorted? Noop
        Run time: 1.722s
        Swap times: 31310652
        Cmp times: 62896128
Insert Sort:
        Is sorted? Noop
        Run time: 0.6s
        Swap times: 13591908
        Cmp times: 36849
Select Sort:
        Is sorted? Noop
        Run time: 0.601s
        Swap times: 36752
        Cmp times: 49272832
Quick Sort:
        Is sorted? Noop
        Run time: 0.007s
        Swap times: 0
        Cmp times: 0
Bubble Sort:
        Is sorted? Noop
        Run time: 1.496s
        Swap times: 35478328
        Cmp times: 71282688
Insert Sort:
        Is sorted? Noop
        Run time: 0.595s
        Swap times: 17759584
        Cmp times: 40944
Select Sort:
        Is sorted? Noop
        Run time: 0.6s
        Swap times: 40840
        Cmp times: 53467136
Quick Sort:
        Is sorted? Noop
        Run time: 0.01s
        Swap times: 0
        Cmp times: 0

Process finished with exit code 0

```

