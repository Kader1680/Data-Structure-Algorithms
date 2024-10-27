#include <iostream>
using namespace std;
#include <queue>



int main(int argc, char const *argv[])
{
    queue <string> players;
    players.push("messi");
    players.push("ronaldo");
    players.push("naymer");
    players.push("maldini");
    while (!players.empty())
    {
        cout<<players.front()<<" ";
        players.pop();
    }
    
}
