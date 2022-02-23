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
				if (nums1[i] == arr[j]) break;//判断nums1[i] 是否在 arr 这个返回数组中
			}
			if (j == *returnSize) {//不在返回数组中，则添加到返回数组中
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
				if (nums2[j] == nums1[i]) break;//判断nums1[i] 是否在nums2数组中
			}
			//if (j == nums2Size) {// nums1中i位置的数据在nums2数组中不存在，则非交集数据
			//	continue;
			//}
			//只有在另一个数组中存在的数据才能走下来，判断是否已经被添加到返回数组中
			for (j = 0; j < *returnSize; j++) {
				if (nums1[i] == arr[j]) break;//判断nums1[i] 是否在 arr 这个返回数组中
			}
			if (j == *returnSize) {//不在返回数组中，则添加到返回数组中
				arr[*returnSize] = nums1[i];
				*returnSize += 1;
			}
		}
	return arr;
}