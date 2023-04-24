#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
int main()
{
	string s;
    vector<string> vect;
    map<string, int> map;
    priority_queue<std::map<string, int>> pq;
    vect.resize(1);
	ifstream file("input.txt");
    char c;
    while (file.get(c))
    {
        s += c;
    }
    //cout << s;
    string aux;
    int j = 0;
    for (int i = 0;i < s.size();i++)
    {
        if (s[i] >= 65 && s[i] < 97) s[i]=tolower(s[i]);
        if (s[i] == 32||s[i]==46||s[i]==44||s[i]==33||s[i]==63)//space . , ! ?
        {
            vect.resize(j+1);
            if(!aux.empty()) vect[j++] = aux;
           
            aux.clear();
        }
        else
        {
            aux += s[i];
        }
    }
    for (int i = 0;i < vect.size();i++)
    {
        cout << vect[i] << endl;
    }
    std::map<std::string, int>::iterator it = map.begin();
    for (int i = 0;i < vect.size();i++)
    {
        map[vect[i]]++;
       // map.insert(pair<string, int>(vect[i], 1));
    }
    while (it != map.end())
    {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
        ++it;
    }
    pq.push(map);
    while (!pq.empty())
    {
        std::map<string, int> map1 = pq.top();
        while (it != map1.end())
        {
            std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
            ++it;
        }
    }
	file.close();
}