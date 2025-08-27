 #include <bits/stdc++.h>

using namespace std;

void Dijkstra( unordered_map<string,unordered_map<string,int>>&graph, string start, unordered_map<string,pair<string,int>>&table )
{
     unordered_map<string,int>unvisited, priority;

     for( auto point : graph )
     {
         unvisited[point.first] = 1;

         if( point.first == start )
         {
             table[point.first] = make_pair(NULL,0);
         }
         else
         {
             table[point.first] = make_pair(NULL,INT_MAX);
         }
     }

     priority[start] = 0;

     while( true )
     {
         int Max = INT_MAX;

         string current;

         for( auto point : priority )
         {
             int temp = point.second;

             if( temp < Max )
             {
                 Max = temp;

                 current = point.first;
             }
         }
     }
}



int main()
{
    int vertex;

    cin >> vertex;

    int edge;

    cin >> edge;

    unordered_map<string,unordered_map<string,int>>Graph;

    for( int i = 0; i < edge; i++ )
    {
        string vertex1, vertex2;

        int weight;

        cin >> vertex1 >> vertex2 >> weight;

        Graph[vertex1][vertex2] = weight;

        Graph[vertex2][vertex1] = weight;
    }

    string Start;

    cin >> Start;

    unordered_map<string,pair<string,int>>Table;

    Dijkstra(Graph,Start,Table);
}
