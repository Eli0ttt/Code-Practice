////图像存储=灰度值序列={P1,P2,P3,P4,P5……}
////0<=Pi<=255，即一个像素需要8bit
////将灰度值序列分组，而每一组中所有的数就有可能都<255的->就不需要用8位数字表示像素大小
////每组中像素的个数和像素的位数：引入2个固定位数
////①我们用3位数字来表示当前组的每一位像素的的位数（最大8bit=2^3）
////②我们引入8位来表示当前组中像素点的个数
//
////s[i]:记录前i个数字的最优处理方式得到的最优解(最佳分组所需位数)
////l[i]:记录第当前第i个数所在组中有多少个数。(因而只有每一组的最后一个l[x]存储有效)
////b[i]:记录第i个数的像素位数
//
//#include<iostream> 
//#include<cmath>  
//#include<stack>
//using namespace std;
//
//const int N = 7;
//
//int length(int i);
//void Compress(int n, int p[], int s[], int l[], int b[]);
//int TraceBack(int n, int l[], int b[]);  //返回有多少个段
//void Out(int m, int min_len, int l[], int b[]);
//
//int main()
//{
//    //int p[] = {0,10,12,15,255,1,2};//图像灰度数组 下标从1开始计数  
//    int p[] = { 0,255,1,5,2,1,2 };
//    int s[N] = { 0 }, l[N] = { 0 }, b[N] = { 0 };
//
//    cout << "图像的灰度序列为：" << endl;
//
//    for (int i = 1; i < N; i++)
//    {
//        cout << p[i] << " ";
//    }
//    cout << endl;
//
//    Compress(N - 1, p, s, l, b);
//    int m = TraceBack(N - 1, l, b);
//    Out(m, s[N - 1], l, b);
//    return 0;
//}
//
//void Compress(int n, int p[], int s[], int l[], int b[])
//{
//    int Lmax = 256, header = 11;
//    s[0] = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        b[i] = length(p[i]);//计算像素点p需要的存储位数  
//        int bmax = b[i];
//        s[i] = s[i - 1] + bmax + header;
//        l[i] = 1;
//
//        for (int j = 2; j <= i && j <= Lmax; j++)  //最后一段含有一个像素，两个像素，所有像素
//        {
//            //if(bmax<b[i-j+1])   //最后一个b[i-j+1]有效，是前一段当中的最大值，并不是后一段中的最大值
//            if (bmax < length(p[i - j + 1]))
//            {
//                bmax = length(p[i - j + 1]);
//            }
//
//            if (s[i] > s[i - j] + j * bmax + header)
//            {
//                s[i] = s[i - j] + j * bmax + header;
//                l[i] = j;
//                b[i] = bmax;  //我加，跟新当前组，所需的存储位数
//            }
//        }
//    }
//}
//
//int length(int i)
//{
//    int k = 1;
//    i = i / 2;
//    while (i > 0)
//    {
//        k++;
//        i = i / 2;
//    }
//    return k;
//    //return ceil(log(i+1)/log(2));  
//}
//
//int TraceBack(int n, int l[], int b[]) //从后向前检查，因而之后对应段的，最后一个存储有效
//{
//    stack<int>ss;
//    ss.push(l[n]);
//    ss.push(b[n]);
//    while (n != 0)
//    {
//        n = n - l[n];
//        ss.push(l[n]);  //l[0]=0,也被压入栈中
//        ss.push(b[n]);
//    }
//    int i = 0;
//    while (!ss.empty())
//    {
//        b[i] = ss.top();
//        ss.pop();
//        l[i] = ss.top(); //此时　ｌ[]，用来存储，第ｉ组中，元素个数
//        ss.pop();
//        i++;
//    }
//    return i - 1;
//}
//
//void Out(int m, int min_len, int l[], int b[])
//{
//    int i = 0;
//    cout << "最小长度：" << min_len << endl;
//    cout << "共分成：" << m << "段" << endl;
//    for (i = i + 1; i <= m; i++)
//    {
//        cout << "第一个段含有" << l[i] << "元素.   " << "需要存储位数" << b[i] << endl;
//    }
//}
