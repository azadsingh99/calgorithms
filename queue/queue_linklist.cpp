#include<iostream>
using namespace std;

int main()
{
    int n, *arr;
    
    cin >> n;
    
    arr = new int[n];
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    for(int i=0; i<n; i++)
    {
        int result = arr[i]%5;
        
        if(arr[i] < 38)
            continue;
        else if(result >= 3)
        {
            while(arr[i]%5==0)
                arr[i]++;
        }   
        else 
            continue;
    }
    
    for(int i=0; i<n; i++)
        cout << arr[i] << endl;
}

#include<iostream>
using namespace std;
//Kangaroo Solution//
int main()
{
    int kangaroo_1_x, kangaroo_1_v;
    int kangaroo_2_x, kangaroo_2_v;
    
    cin >> kangaroo_1_x >> kangaroo_1_v >> kangaroo_2_x >> kangaroo_2_v;
    
    if((kangaroo_1_x < kangaroo_2_x) && (kangaroo_1_v < kangaroo_2_v))
    {
        cout << "NO" << endl;
    }
    
    else 
    {
        int i = kangaroo_1_x;
        int j = kangaroo_2_x;   
        while(1)
        {
            i = i + kangaroo_1_v;
            j = j + kangaroo_2_v;
            
            if(i == j)
            {
                cout << "YES" << endl;
                break;
            }
        }
    
    }
    
    return 0;
    
}

//apple and orange problem//

/*
int main()
{
    int lower_range, upper_range;
    int apple_pos, orange_pos;
    int *apple_position, *orange_position;
    int apple_count, orange_count;
    
    int *apple, *orange;
    
    cin >> lower_range >> upper_range;
    cin >> apple_pos >> orange_pos;
    cin >> apple_count >> orange_count;
    
    apple_position = apple = (int *)malloc(apple_count * sizeof(int *));
    orange_position = orange = (int *)malloc(orange_count * sizeof(int *));
    
    for(int i=0; i<apple_count; i++)
        cin >> apple[i];
    
    for(int i=0; i<orange_count; i++)
        cin >> orange[i];
    
    for(int i=0; i<apple_count; i++)
    {
        apple_position[i] = apple_pos + apple[i];
    }
    
    for(int i=0; i<orange_count; i++)
    {
        orange_position[i] = orange_pos + orange[i] ;
    }
    
    int countapp = 0, countor = 0;
    for(int i=0; i<apple_count; i++)
    {
        if(apple_position[i] >= lower_range && apple_position[i] <= upper_range)
        {
            countapp++;
        }
    }
    
    for(int i=0; i<orange_count; i++)
    {
        if(orange_position[i] >= lower_range && orange_position[i] < upper_range)
        {
            countor++;
        }
    }
    
    cout << countapp << endl;
    cout << countor << endl;
    
    
} */


//migratory bird//
/*
#include<iostream>
using namespace std;

int main()
{
    int n,  count=0, val = 0, k=0;
    int *arr;
    
    cin >> n;
    arr = new int[n];
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int max = 0;
    for(int i=0; i<n; i++)
    {
        count = 0;
        k=0;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                k++;
            }
        }
        
        if(count >= max)
        {
            max = count;
            if(val < arr[k])
                val = arr[k];
        }
    }
    
    cout << val << endl;
    return 0;
}

*/