////ͼ��洢=�Ҷ�ֵ����={P1,P2,P3,P4,P5����}
////0<=Pi<=255����һ��������Ҫ8bit
////���Ҷ�ֵ���з��飬��ÿһ�������е������п��ܶ�<255��->�Ͳ���Ҫ��8λ���ֱ�ʾ���ش�С
////ÿ�������صĸ��������ص�λ��������2���̶�λ��
////��������3λ��������ʾ��ǰ���ÿһλ���صĵ�λ�������8bit=2^3��
////����������8λ����ʾ��ǰ�������ص�ĸ���
//
////s[i]:��¼ǰi�����ֵ����Ŵ���ʽ�õ������Ž�(��ѷ�������λ��)
////l[i]:��¼�ڵ�ǰ��i�������������ж��ٸ�����(���ֻ��ÿһ������һ��l[x]�洢��Ч)
////b[i]:��¼��i����������λ��
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
//int TraceBack(int n, int l[], int b[]);  //�����ж��ٸ���
//void Out(int m, int min_len, int l[], int b[]);
//
//int main()
//{
//    //int p[] = {0,10,12,15,255,1,2};//ͼ��Ҷ����� �±��1��ʼ����  
//    int p[] = { 0,255,1,5,2,1,2 };
//    int s[N] = { 0 }, l[N] = { 0 }, b[N] = { 0 };
//
//    cout << "ͼ��ĻҶ�����Ϊ��" << endl;
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
//        b[i] = length(p[i]);//�������ص�p��Ҫ�Ĵ洢λ��  
//        int bmax = b[i];
//        s[i] = s[i - 1] + bmax + header;
//        l[i] = 1;
//
//        for (int j = 2; j <= i && j <= Lmax; j++)  //���һ�κ���һ�����أ��������أ���������
//        {
//            //if(bmax<b[i-j+1])   //���һ��b[i-j+1]��Ч����ǰһ�ε��е����ֵ�������Ǻ�һ���е����ֵ
//            if (bmax < length(p[i - j + 1]))
//            {
//                bmax = length(p[i - j + 1]);
//            }
//
//            if (s[i] > s[i - j] + j * bmax + header)
//            {
//                s[i] = s[i - j] + j * bmax + header;
//                l[i] = j;
//                b[i] = bmax;  //�Ҽӣ����µ�ǰ�飬����Ĵ洢λ��
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
//int TraceBack(int n, int l[], int b[]) //�Ӻ���ǰ��飬���֮���Ӧ�εģ����һ���洢��Ч
//{
//    stack<int>ss;
//    ss.push(l[n]);
//    ss.push(b[n]);
//    while (n != 0)
//    {
//        n = n - l[n];
//        ss.push(l[n]);  //l[0]=0,Ҳ��ѹ��ջ��
//        ss.push(b[n]);
//    }
//    int i = 0;
//    while (!ss.empty())
//    {
//        b[i] = ss.top();
//        ss.pop();
//        l[i] = ss.top(); //��ʱ����[]�������洢���ڣ����У�Ԫ�ظ���
//        ss.pop();
//        i++;
//    }
//    return i - 1;
//}
//
//void Out(int m, int min_len, int l[], int b[])
//{
//    int i = 0;
//    cout << "��С���ȣ�" << min_len << endl;
//    cout << "���ֳɣ�" << m << "��" << endl;
//    for (i = i + 1; i <= m; i++)
//    {
//        cout << "��һ���κ���" << l[i] << "Ԫ��.   " << "��Ҫ�洢λ��" << b[i] << endl;
//    }
//}
