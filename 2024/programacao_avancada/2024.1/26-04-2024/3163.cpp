#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int p = 0;
    queue<string> norte, sul, leste, oeste; 
    while (cin >> s){
        if (s == "0"){
            break;
        }
        if (s == "-4" || s == "-3" || s == "-2" || s == "-1"){
            switch (stoi(s)){
                case -3:
                    p = -3;
                    break;
                case -2:
                    p = -2;
                    break;
                case -4:
                    p = -4;
                    break;
                case -1:
                    p = -1;
                    break;
            }
        }
        if (p == -3 && s != "-3") norte.push(s);
        if (p == -2 && s != "-2") sul.push(s);
        if (p == -4 && s != "-4") leste.push(s);
        if (p == -1 && s != "-1") oeste.push(s);
    }
    string trafego = "";
    while(leste.size() > 0 or norte.size() > 0 or sul.size() > 0 or oeste.size() > 0){
        if(oeste.size() > 0){
            trafego += oeste.front() + " ";
            oeste.pop();
        }
        
        if(norte.size() > 0){
            trafego += norte.front() + " ";
            norte.pop();
        }
        
        if(sul.size() > 0){
            trafego += sul.front() + " ";
            sul.pop();
        }
        
        if(leste.size() > 0){
            trafego += leste.front() + " ";
            leste.pop();
        }     
    }
    trafego.erase(trafego.size() - 1, 1);
    cout << trafego << endl;
    return 0;
}