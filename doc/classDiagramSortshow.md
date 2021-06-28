classDiagram
Sort <|-- BubbleSort
Sort <|-- SelectSort
Sort <|-- QuickSort
Sort ..> Dataset
Sort ..> SortShow

class SortShow{
+show()
}
class Sort{
+ori()
+improved()
+setData()
+print()
+show()
+isSorted()
+calcTime()
-vector<variant<>> data
-int size
-clock_t start
-clock_t end
}
class BubbleSort{
+void ori();
+void improved();
}
class SelectSort{
+void ori();
+void improved();
}
class QuickSort{
+ori();
+improved();
}
class Dataset{
+setDataSize()
+setData()
+getSize()
+getData()
-getUniformRealDistribution()
-getGaussDistribution()
-getUpperDistribution()
-getLowerDistribution()
-vector<variant<>> data
-int size
}