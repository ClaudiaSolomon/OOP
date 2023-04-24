#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

void print(map<string, int> map)
{
    std::map<std::string, int>::iterator it = map.begin();
    while (it != map.end())
    {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
        ++it;
    }
    cout << endl;
}

void sort_map(map<string, int> mymap)
{
    auto comp = [](pair<string, int> a, pair<std::string, int> b) {
        if (a.second > b.second)
            return false;
        else if (a.second < b.second)
            return true;
        else { 
            if (a.first < b.first) {
                return false;
            }
            else
                return true;
        }
    };

    priority_queue<pair<string, int>, vector<pair<std::string, int> >, decltype(comp)> pq(comp);

    for (auto& ij : mymap) {
        pq.push(ij);
    }
 
    while (!pq.empty()) {
        std::cout << "Key: " << pq.top().first << ", Value: " << pq.top().second << std::endl;
        pq.pop();
    }
}

int main()
{
	string s;
    vector<string> vect;
    map<string, int> map;
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
    print(map);

    sort_map(map);
	file.close();
}