class Solution {
public:
    
    
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> unique_emails;
        string email;
        string local_name;
        string domain_name;
        size_t pos;
        
        for(int i = 0; i < emails.size(); ++i){
            email = emails[i];
        
            pos = email.find("@");
            
            local_name = email.substr(0, pos);
            
            domain_name = email.substr(pos+1, email.length());
            
            pos = local_name.find("+");
            
            if(pos != string::npos){
                local_name = local_name.substr(0, pos);
            }
            
            local_name.erase(remove(local_name.begin(), local_name.end(), '.'), local_name.end());
            
            unique_emails.insert(local_name+"@"+domain_name);
            
            
        }
        
        return unique_emails.size();
    }
};