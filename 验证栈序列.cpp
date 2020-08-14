bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize){
    int* stack=(int *)malloc(sizeof(int)*pushedSize);//申请栈空间
    int top=-1;//初始化栈顶指针
    int i=0,j=0;
    while(i<pushedSize){
        stack[++top]=pushed[i++];//push
        while(top !=-1 && stack[top]==popped[j]){//栈非空其栈顶元素等于poped[j]
            --top;//pop
            ++j;
        }
    }
    if(top==-1){//栈是否为空
        return true;
    }
    return false;
}


