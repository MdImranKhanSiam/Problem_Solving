#include <bits/stdc++.h>

using namespace std;

void heapify( vector<int>&store, vector<int>&heap );
void insert_element( vector<int>&heap, int value );
void heapify_up( vector<int>&heap, int index );
void heapify_down( vector<int>&heap, int index );
void swap_index( vector<int>&heap, int index1, int index2 );
void remove_max( vector<int>&heap );

int main()
{
    int length;

    cin >> length;

    vector<int>store;

    for( int i = 0; i < length; i++ )
    {
        int value;

        cin >> value;

        store.push_back(value);
    }

    vector<int>max_heap;

    heapify(store,max_heap);

    cout << "Max Heap: ";

    for( int value : max_heap )
    {
        cout << value << " ";
    }

    cout << endl;
}

void heapify( vector<int>&store, vector<int>&heap )
{
    for( auto value : store )
    {
        insert_element(heap,value);
    }
}

void insert_element( vector<int>&heap, int value )
{
    heap.push_back(value);

    heapify_up(heap,heap.size()-1);
}

void heapify_up( vector<int>&heap, int index )
{
    while( index != 0 )
    {
        int parent;

        parent = (index-1)/2;

        if( heap[parent] < heap[index] )
        {
            swap_index(heap,parent,index);

            index = parent;
        }
        else
        {
            break;
        }
    }
}

void heapify_down( vector<int>&heap, int index )
{
    int length = heap.size();

    while( true )
    {
        int max_child, left_child, right_child;

        left_child = (index*2)+1;

        right_child = (index*2)+2;

        if( left_child >= length && right_child >= length )
        {
            break;
        }

        if( left_child >= length )
        {
            max_child = right_child;
        }
        else if( right_child >= length )
        {
            max_child = left_child;
        }
        else if( heap[left_child] >= heap[right_child] )
        {
            max_child = left_child;
        }
        else
        {
            max_child = right_child;
        }

        if( heap[max_child] > heap[index] )
        {
            swap_index(heap,max_child,index);

            index = max_child;
        }
        else
        {
            break;
        }
    }
}

void swap_index( vector<int>&heap, int index1, int index2 )
{
    int temp;

    temp = heap[index1];

    heap[index1] = heap[index2];

    heap[index2] = temp;
}

void remove_max( vector<int>&heap )
{
    heap[0] = heap.back();

    heap.pop_back();

    heapify_down(heap,0);
}
