#include <stlmain>
int main(){
    string s1,s2;
    getline(cin,s1);getline(cin,s2);
    auto v=s1|views::split(',')|ranges::to<vector<string>>()|views::transform([](auto& i){return(stoi(i,nullptr,10));})|ranges::to<vector<int>>();
    auto com=s2|views::split(',')|ranges::to<vector<string>>()|views::transform([](auto& i){return(stoi(i,nullptr,10));})|ranges::to<vector<int>>();
    
    return(0);
}