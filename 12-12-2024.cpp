int n = arr.size();
int lbIdx = lowerBound(arr, target);
int upIdx = upperBound(arr, target);
if (upIdx == -1 || lbIdx == -1 || lbIdx > upIdx)
    return 0;
return upIdx - lbIdx + 1;
}
int upperBound(vector<int> &arr, int target)
{
    int Idx = -1;
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target)
        {

            Idx = mid;
            l = mid + 1;
        }
        else if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return Idx;
}
int lowerBound(vector<int> &arr, int target)
{

    int Idx = -1;

    int l = 0;
    int r = arr.size() - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == target)
        {

            Idx = mid;
            r = mid - 1;
        }
        else if (arr[mid] > target)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return Idx;