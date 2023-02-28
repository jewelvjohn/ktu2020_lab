package pk1;

public class Sort
{
    public int[] sort(int[] array)
    {
        int i,j;
        int temp;
        int length = array.length;

        for(i=0; i<length; i++)
        {
            for(j=i+1; j<length; j++)
            {
                if(array[i]>array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        return array;
    }
}
