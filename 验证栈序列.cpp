bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize){
    int* stack=(int *)malloc(sizeof(int)*pushedSize);//����ջ�ռ�
    int top=-1;//��ʼ��ջ��ָ��
    int i=0,j=0;
    while(i<pushedSize){
        stack[++top]=pushed[i++];//push
        while(top !=-1 && stack[top]==popped[j]){//ջ�ǿ���ջ��Ԫ�ص���poped[j]
            --top;//pop
            ++j;
        }
    }
    if(top==-1){//ջ�Ƿ�Ϊ��
        return true;
    }
    return false;
}


