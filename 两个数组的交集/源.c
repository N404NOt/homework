#define _CRT_SECURE_NO_WARNINGS 
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
	static int arr[1000];
	 int i = 0, j = 0,key=0,l=0;
	*returnSize = 0;
	for (i = 0; i < nums1Size; i++)
	{
		for (j = 0; j < nums2Size; j++)
		{
			key = 0;
			if (nums1[i] == nums2[j])
			{
				key = 1;
				break;
			}
		}
		if (key == 1)
		{
			for (j = 0; j < *returnSize; j++) {
				if (nums1[i] == arr[j]) break;//�ж�nums1[i] �Ƿ��� arr �������������
			}
			if (j == *returnSize) {//���ڷ��������У�����ӵ�����������
				arr[*returnSize] = nums1[i];
				*returnSize += 1;
			}
			
		}
	}
	return arr;
}



int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
	static int arr[1000];
	*returnSize = 0;
	int i, j, k;
		for (i = 0; i < nums1Size; i++) {
			for (j = 0; j < nums2Size; j++) {
				if (nums2[j] == nums1[i]) break;//�ж�nums1[i] �Ƿ���nums2������
			}
			//if (j == nums2Size) {// nums1��iλ�õ�������nums2�����в����ڣ���ǽ�������
			//	continue;
			//}
			//ֻ������һ�������д��ڵ����ݲ������������ж��Ƿ��Ѿ�����ӵ�����������
			for (j = 0; j < *returnSize; j++) {
				if (nums1[i] == arr[j]) break;//�ж�nums1[i] �Ƿ��� arr �������������
			}
			if (j == *returnSize) {//���ڷ��������У�����ӵ�����������
				arr[*returnSize] = nums1[i];
				*returnSize += 1;
			}
		}
	return arr;
}