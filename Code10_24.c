#define  _CRT_SECURE_NO_WARNINGS 0
//int* GetMin(int* nums, int len)
//{
//    int* tmp = (int*)malloc(sizeof(int) * len);
//    int min = nums[len - 1];
//    for (int j = len - 1; j > 0; j--)
//    {
//        if (min > nums[j])
//            min = nums[j];
//        tmp[j] = min;
//    }
//    return tmp;
//}
//int partitionDisjoint(int* nums, int numsSize) {
//    int left = 0;
//    int i = 0;
//    int Lmax = nums[i];
//    int Rmin = 0;
//    int* Min = GetMin(nums, numsSize);
//    while (i < numsSize - 1)
//    {
//        //����һ��Lmax
//        if (Lmax < nums[i])
//            Lmax = nums[i];
//        //����һ��Rmin
//        Rmin = Min[i + 1];
//        if (Lmax <= Rmin)
//        {
//            left = i;
//            break;
//        }
//        i++;
//    }
//    free(Min);
//    return left + 1;
//}
//int partitionDisjoint(int* nums, int numsSize) {
//    int max = nums[0];
//    int left = 0;
//    int i = 0;
//    while (left < numsSize - 1)
//    {
//        for (i = left + 1; i < numsSize; i++)//���[left+1,numsSize-1]Ԫ���Ƿ�Ϸ�
//        {
//            if (nums[i] < max)//˵������������䲻�Ϸ�
//            {
//                //���·�����������ֵ
//                for (int j = left + 1; j <= i; j++)
//                    if (max < nums[j])
//                        max = nums[j];
//                left = i;
//                break;
//            }
//        }
//        if (i >= numsSize)//˵������ֵĺϷ�
//            break;
//    }
//    return left + 1;
//}
//int Dig_pits(int* nums, int left, int right)
//{
//    int pit = left;
//    int pit_key = nums[pit];
//    while (left < right)
//    {
//        //���ҿ�ʼ��С
//        while ((left < right) && (nums[right] >= pit_key))
//            right--;
//        nums[pit] = nums[right];
//        pit = right;
//        while ((left < right) && (nums[left] <= pit_key))
//            left++;
//        nums[pit] = nums[left];
//        pit = left;
//    }
//    nums[left] = pit_key;
//    return right;
//}
//int findKthLargest(int* nums, int numsSize, int k) {
//    int index = numsSize - k;
//    int left = 0;
//    int right = numsSize - 1;
//    while (left < right)
//    {
//        int pit = Dig_pits(nums, left, right);
//        if (pit < index)
//            left = pit + 1;
//        else if (pit > index)
//            right = pit - 1;
//        else
//            return nums[pit];
//    }
//    return nums[left];
//}