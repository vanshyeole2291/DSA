class Solution {
public:
    string interpret(string command) {
        string s="";
        for(int i=0;i<command.size();i++){
            if(i+1<command.size()&&command[i]=='('){
                if(command[i+1]==')'){
                    s+='o';
                }else{
                    continue;
                }
            }else if(command[i]==')'){
                continue;
            }else{
                s+=command[i];
            }
        }
        return s;
    }
};