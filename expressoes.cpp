#include <iostream>
#include <stack>

using namespace std;

int main(){
	int t;
	string c;

	cin >> t;

	while(t--){
		stack<char> pilha;
		cin >> c;
		
		for(int i=0; i<c.size(); i++){
			switch(c[i]){
				case '(':
					pilha.push(c[i]);
				break;	
				case ')':
					if(pilha.empty()){
						pilha.push('a');
						i= c.size();
					}else if(pilha.top() == '('){
						pilha.pop();
					}
					else{
						i= c.size();
					}
				break;
				case '[':
					pilha.push(c[i]);
				break;
				case ']':
					if(pilha.empty()){
						pilha.push('a');
						i= c.size();
					}else if(pilha.top() == '['){
						pilha.pop();
					}
					else{
						i= c.size();
					}
				break;
				case '{':
					pilha.push(c[i]);
				break;
				case '}':
					if(pilha.empty()){
						pilha.push('a');
						i= c.size();
					}else if(pilha.top() == '{'){
						pilha.pop();
					}
					else{
						i= c.size();
					}
				break;
			}
			
		}

		if(pilha.size() == 0){
			cout << 'S' << endl;
		}else{
			cout << 'N' << endl;
		}


	}

	return 0;
}