# test-mix-dll

�ù��̻�����mydll��̬���test-dllӦ�ó���test-dll����mydll��ӡ��һ��`std::string`�ַ����ĳ��ȡ�

debug�����test-dll����������release�����mydll�𣿽��в��ԡ�

## ���б���

ʹ��CMAKE�ֱ���debug��releaseģʽ�½��б���

## ����ֱ��ʹ��Ԥ�����ļ�

���������б��룬����ֱ��ʹ��build/�µ�Ԥ�����ļ�������ƽ̨ΪWINDOWS X64��

## ����

�ֱ����3�ֶ�̬��ʹ�÷�ʽ��

- debug��Ӧ�ó���ʹ��debug�Ķ�̬�⣺ֱ������debug����Ŀ¼�µ�test-dll
- release��Ӧ�ó���ʹ��release�Ķ�̬�⡣��ֱ������release����Ŀ¼�µ�test-dll
- debug��Ӧ�ó���ʹ��release�Ķ�̬�⣺����һ�����ļ���test-mix����debug��test-dll��release��mydll�������ˣ�Ȼ������test-dll

## Ԥ�ڽ��

��mydll��test-dll����ģʽ��ͬʱ��mydll�еĺ����������ȷ�ַ������ȡ�12���������ñ���ģʽʱ�������������

��˵�������ǻ�Ӱ������������еģ���Ϊ`std::string`�ڲ�ͬ����ģʽ�µ�ʵ�ִ�����ڴ�ֲ������ݡ�
