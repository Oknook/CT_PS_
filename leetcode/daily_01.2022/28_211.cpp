#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// 211. Design Add and Search Words Data Structure

class WordDictionary {
public:
    WordDictionary() {}
    
    void addWord(string word) {
        words[word.size()].push_back(word);
    }
    
    bool search(string word) {
        for(auto s: words[word.size()]) if(isEqual(s, word)) return true;
        return false;
    }
    
private:
    unordered_map<int, vector<string>> words;
    
    bool isEqual(string a, string b){
        for(int i = 0; i < a.size(); i++){
            if(b[i] == '.') continue;
            if(a[i] != b[i]) return false;
        }
        return true;
    }
};

int main()
{
    vector<int> bv;

    WordDictionary w;
    w.addWord("bad");
    w.addWord("dad");
    w.addWord("mad");
    bv.push_back(w.search("pad"));
    bv.push_back(w.search("bad"));
    bv.push_back(w.search(".ad"));
    bv.push_back(w.search("b.."));

    for (int i = 0; i < bv.size(); i++)
    {
        if (bv[i] == 0) cout << "false ";
        else cout << "true ";
    }
    

    return 0;
}