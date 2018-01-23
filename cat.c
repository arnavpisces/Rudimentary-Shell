#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char line[1000];
    if(argc==1){
        fp=fopen(argv[0],"r");
        if(fp==NULL){
            printf("cat: %s: No such file or directory",argv[0]);
            return -1;
        }
        while(fgets(line, sizeof(line),fp)!=NULL){
            printf("%s",line);
        }
        fclose(fp);
    }
    else if(argc==2){
        if(strlen(argv[0])==3){

            fp=fopen(argv[1],"r");
            if(fp==NULL){
                printf("cat: %s: No such file or directory",argv[1]);
                return -1;
            }
            int counter=1;
            while(fgets(line,sizeof(line),fp)!=NULL){
                line[strlen(line)+1]='\0';
                line[strlen(line)-1]='$';
                line[strlen(line)]='\n';

                printf("   %d  %s",counter++,line);
            }
            fclose(fp);
        }
        else if(argv[0][1]=='A'){
            fp=fopen(argv[1],"r");
            if(fp==NULL){
                printf("cat: %s: No such file or directory",argv[1]);
                return -1;
            }
            int counter=1;
            while(fgets(line,sizeof(line),fp)!=NULL){
                line[strlen(line)+1]='\0';
                line[strlen(line)-1]='$';
                line[strlen(line)]='\n';

                printf("%s",line);
            }
            fclose(fp);
        }
        else{
            fp=fopen(argv[1],"r");
            if(fp==NULL){
                printf("cat: %s: No such file or directory",argv[1]);
                return -1;
            }
            int counter=1;
            while(fgets(line,sizeof(line),fp)!=NULL){
//                line[strlen(line)+1]='\0';
//                line[strlen(line)-1]='$';
//                line[strlen(line)]='\n';

                printf("   %d  %s",counter++,line);
            }
            fclose(fp);
        }
    }
    else if(argc==3){
        fp=fopen(argv[2],"r");
        if(fp==NULL){
            printf("cat: %s: No such file or directory",argv[2]);
            return -1;
        }
        int counter=1;
        while(fgets(line,sizeof(line),fp)!=NULL){
            line[strlen(line)+1]='\0';
            line[strlen(line)-1]='$';
            line[strlen(line)]='\n';

            printf("   %d  %s",counter++,line);
        }
        fclose(fp);
    }
}