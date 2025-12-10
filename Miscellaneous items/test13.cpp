#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input ;
    getline(cin,input);
    if (input[0] >= 'a' && input[0] <= 'z')
    {
        input[0] -= 32;
    }
    
    int num = input.size();

    for (int i = 0; i < num; i++)
    {
        
        if(input[i] == ' ' || input[i] == '\'')
        {
            input[i+1] -= 32;

        }

    }
    cout << input;
}

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    string result = "";
    bool newWord = true; // 标记是否是新单词的开始
    
    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        
        // 如果是字母
        if (isalpha(c)) {
            if (newWord) {
                // 新单词的第一个字母转为大写
                result += toupper(c);
                newWord = false;
            } else {
                // 非首字母保持原大小写
                result += tolower(c);
            }
        } else {
            // 如果不是字母（空格、标点符号等），则下一个字母是新单词的开始
            result += c;
            if (c == ' ' || c == '\'') {
                newWord = true;
            }
        }
    }
    
    cout << result << endl;
    
    return 0;
}