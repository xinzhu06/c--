#include <iostream>
#include <string>
#include <vector>
using namespace std;

class wenZi
{
public:
    int m_life;
    bool excit;
    wenZi()
    {
        m_life = 2;
        excit = true;
    }
};

class Boom
{
public:
    int aimX;
    int aimY;
    int hurt;
    Boom()
    {
        aimX = 0;
        aimY = 0;
        hurt = 2;
    }
};



int main()
{
    int m,n;
    cin >> m >> n;

    vector<vector<wenZi>>face(m,vector<wenZi>(n));
    for (int i = 0; i < m; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            if (str[j] == '#')
            {
                face[i][j].m_life = 2;
                face[i][j].excit = true;
            }else{
                face[i][j].m_life = 0;
                face[i][j].excit = false;
            }
            
        }
        
    }
    int boomNUM;
    cin >> boomNUM;
    vector<Boom>m_boom(boomNUM);

    for (int i = 0; i < boomNUM; i++)
    {
        cin >> m_boom[i].aimX >> m_boom[i].aimY;

    }
    


    
}