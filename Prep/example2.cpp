#include<string>
//const string trigraphs[] = {"??=", "??/", "??'","??(", "??)", "??!", "??<", "??>","??-"};
//const string trigraphs_╤Б[] = {"#", "\\", "^","[", "]", "|", "{", "}","~"};
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
        int perform(string name_file){
                file.open(name_file);
                if(!file){
                        return -1;
                }
                int k=3;
                int pos=0;
                //string string_buffer1;
                //string string_buffer2;
                int i=0;
                char last_buffer=' ';
                //while(!file.eof()){
                //      getline(file, buffer);
                //      pos=buffer.find("/t");
                        //if (buffer=="") continue;
                        //pos=buffer.find("??=");
                //      if (pos!=-1) buffer.replace(pos, 2," ");
                //      cout << buffer<<'\n';
                //}
                //file = f_performed;
                //file.seekg(0,ios_base::beg);
                string preperformed="";
                while (!file.eof()){
                        getline(file,buffer);
                        i=buffer.find_first_not_of(str);
                        buffer.erase(0, i);
                        while(buffer[i]!='\0'){
                                if ((last_buffer==' ') && (buffer[i]==' '))     {buffer.erase(i, 1);i--;}
                                last_buffer=buffer[i];
                                i++;
                        }
                        if (buffer!="") preperformed.append(buffer+'\n');
                }

                //flag = 1;
                //╤Г╨┤╨░╨╗╨╡╨╜╨╕╨╡ ╨║╨╛╨╝╨╝╨╡╨╜╤В╨░╤А╨╕╨╡╨▓ ???
        //vector table_of_quotes
                int flag1 = 1;
                int flag2 = 1;
                pos = 0;
                int pos2=0;
                int j=0;
                i = 0;
                pos = preperformed.find(" ", pos + 1);
                preperformed.replace(pos, pos2-pos+2, " ");
                }
                pos = preperformed.find(" "
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
                pos=preperformed.find_last_not_of(str + '\n');
                preperformed.replace(pos+1, -1, "");
                //╤Д╤Г╨╜╨║╤Ж╨╕╤П ╨╖╨░╨╝╨╡╨╜╤Л, ╨╜╨░╤Е╨╛╨┤╨╕╤В ╨┐╨╛╤Б╨╗╨╡╨┤╨╛╨▓╨░╤В╨╡╨╗╤М╨╜╨╛╤Б╤В╤М ╤Б╨╕╨╝╨▓╨╛╨╗╨╛╨▓ ╨╕ ╨╖╨░╨╝╨╡╨╜╤П╨╡╤В ╨╡╨╡ ╨┤╤А╤Г╨│╨╛╨╣
                cout<<preperformed;
                //for(file >> buffer; !file.eof(); file >> buffer) {
// cout << buffer<< '\n';
//}
//cout<< f_performed;


                //cout << buffer;

                return 0;
        }
        ifstream file;
        ifstream f_performed;
        string buffer="\0";
        //node_change START[3]={{"\\n", ""},{"\n\n","\n"},{" "," "}};
        //int size_of_node = 3;
        //~handler();
        //handler();
};
int main(){
        //FILE F("example.txt");
        handler A1;
        A1.perform("pr1.cpp");
        //string f_performed;
        //string buffer = F.getline();


        //handler A1(F, START);
        return 0;
}