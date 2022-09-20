#include<string>

//const string trigraphs[] = {"??=", "??/", "??'","??(", "??)", "??!", "??<", "??>","??-"};
//const string trigraphs_с[] = {"#", "\\", "^","[", "]", "|", "{", "}","~"};

#include <iostream>
#include <fstream>
using namespace std;
#define str " "
//#define START

struct node_change
{
	string to_find;
	string dop;
};
struct handler{
	int perform(string name_file){ //разбить на подфункции
		file.open(name_file);
		if(!file){
			return -1;
		}
		int k=3;
		int pos=0;

		int i=0;
		char last_buffer=' ';

		string preperformed="";
		while (!file.eof()){
			getline(file,buffer);
			i=buffer.find_first_not_of(str);
			buffer.erase(0, i);
			while(buffer[i]!='\0'){
				if ((last_buffer==' ') && (buffer[i]==' '))	{buffer.erase(i, 1);i--;}
				last_buffer=buffer[i];
				i++;
			}
			if (buffer!="") preperformed.append(buffer+'\n');

		}
		
		//flag = 1;
		//удаление комментариев ???
		int flag1 = 1;
		int flag2 = 1;
		pos = 0;
		int pos2=0;
		int j=0;
		i = 0;
		pos = preperformed.find("/*");

		while (pos!=-1){
		i = preperformed.find_first_of("\"", j+1);
		j = preperformed.find_first_of("\"", i+1);
		if ((pos<i) || (pos>j)) {
        pos2 = preperformed.find("*/", pos + 1);
		preperformed.replace(pos, pos2-pos, " ");
		}
		pos = preperformed.find("/*", pos+1);


		}
		cout<<preperformed<<endl<<'\n'<<'\n';
		//"/*klefjerlkj*/"


		pos = preperformed.find("\\");
		
		while (pos!=-1){
		i = preperformed.find_first_not_of(str, pos+1);
		if (preperformed[i]=='\n') { preperformed.replace(pos, i-pos+1, " ");}
		else cout<<preperformed[i];
		pos = preperformed.find("\\", pos+1);
		}


		pos = 0;
		pos = preperformed.find(" ", pos);
		while (pos!=-1){
		i = preperformed.find_first_not_of(" ", pos);
		if (i-pos>=1) preperformed.replace(pos, i-pos, " ");
		pos = preperformed.find(" ", pos+1);
		}
		pos=preperformed.find_last_not_of(str + '\n' +'\t');
		preperformed.replace(pos+1, -1, "");

		//функция замены, находит последовательность символов и заменяет ее другой

		cout<<preperformed;
		//for(file >> buffer; !file.eof(); file >> buffer) {     
        //   cout << buffer<< '\n';
        //}
        //cout<< f_performed;

		
		/*while(!file.eof()){
			getline(file, buffer);
			pos=buffer.find("//");
			//if (buffer=="") continue;
			//pos=buffer.find("??=");
			if (pos!=-1) buffer.replace(pos, 2+pos-buffer.length(),"");
			cout << buffer<<'\n';
		}*/

		//cout << buffer;
		f_performed = preperformed;
		return 0;
	}
private:
	ifstream file;
	ifstream output;
	string f_performed;
	string buffer="\0";
	//node_change START[3]={{"\\n", ""},{"\n\n","\n"},{"  "," "}};
	//int size_of_node = 3;
	//~handler();
	//handler();
};
int main(){
	//FILE F("example.txt");
	handler A1;
	A1.perform("example.txt");

	//string f_performed;
	//string buffer = F.getline();

	/*cout<<START[1].to_find<<'\n';
	cout<<START[0].to_find<<'\n';
	cout<<START[1].dop<<'\n';
	cout<<START[0].dop<<'\n';
	*/
	
	//handler A1(F, START);
	return 0;
}