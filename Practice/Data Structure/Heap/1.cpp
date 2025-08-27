#include <bits/stdc++.h>

using namespace std;

void insert_element( vector<int>&heap, int value );

int peek_min( vector<int>&heap );

void extract_min( vector<int>&heap );

void heapify_up( vector<int>&heap, int index );

void heapify_down( vector<int>&heap, int index );





int main()
{
    int length;

    cin >> length;

    vector<int>store, min_heap;

    for( int i = 0; i < length; i++ )
    {
        int value;

        cin >> value;

        store.push_back(value);
    }

    for( int value : store )
    {
        insert_element(min_heap,value);
    }

    cout << "Min Heap: ";

    for( int value : min_heap )
    {
        cout << value << " ";
    }

    cout << endl;

    insert_element(min_heap,1);

    cout << "After Adding 1: ";

    for( int value : min_heap )
    {
        cout << value << " ";
    }

    cout << endl;

    cout << "Min: " << peek_min(min_heap) << endl;

    extract_min(min_heap);

    cout << "After Removing Min: ";

    for( int value : min_heap )
    {
        cout << value << " ";
    }

    cout << endl;
}









void insert_element( vector<int>&heap, int value )
{
    heap.push_back(value);

    int Size = heap.size();

    heapify_up(heap,Size-1);
}

int peek_min( vector<int>&heap )
{
    return heap[0];
}

void extract_min( vector<int>&heap )
{
    heap[0] = heap.back();

    heap.pop_back();

    heapify_down(heap,0);
}

void heapify_up( vector<int>&heap, int index )
{
    while( true )
    {
        int parent = (index-1)/2;

        if( index == parent )
        {
            break;
        }

        if( heap[parent] > heap[index] )
        {
            int temp = heap[parent];
            heap[parent] = heap[index];
            heap[index] = temp;

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
    while( true )
    {
        int left_child, right_child, child;

        left_child = (index*2)+1;
        right_child = (index*2)+2;

        if( left_child >= heap.size() || right_child >= heap.size() )
        {
            break;
        }

        if( heap[left_child] < heap[right_child] )
        {
            child = left_child;
        }

        if( heap[child] < heap[index] )
        {
            int temp = heap[index];
            heap[index] = heap[child];
            heap[child] = temp;

            index = child;
        }
        else
        {
            break;
        }
    }
}
