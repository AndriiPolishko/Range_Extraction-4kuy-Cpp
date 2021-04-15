#include <iostream>
#include <string>
#include <vector>
using namespace  std;
std::string range_extraction(const std::vector<int> & ) ;
int main() {

    return 0;
}
    std::string range_extraction(const std::vector<int> &args)
    {string res,temp;
    int k=0;
    for(int i=1;i<args.size()+1;i++)
    {
        temp=to_string(args[i-1]);
        if(args[i-1]==args[i]-1)
        {

            while(args[i-1]==args[i]-1 && i <args.size())
            {
                i++;
                k++;
            }
            if(k==1)
                temp+=','+to_string(args[i-1]);
            else
                temp+='-'+to_string(args[i-1]);
            k=0;
        }
        res+=temp+',';
    }
    res.erase(res.size()-1,1);
    return res;
    }