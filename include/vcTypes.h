#ifndef VC_TYPES
#define VC_TYPES

#ifdef __cplusplus
extern "C"{
#endif


typedef struct _VcNode{

    void* data;
    struct _VcNode* previous;
    struct _VcNode* next;

}VcNode;


typedef struct _VcList{

    VcNode* head;
    VcNode* tail;
    int length;
    void (*deleteData)(void* toBeDeleted);
    int (*compare)(const void* first, const void* second);
    char* (*printData)(void* toBePrinted);

}VcList;

typedef struct _VorbisComment{
    char *vendor;
    VcList *comments;

}VorbisComment;


#ifdef __cplusplus
} //extern c end
#endif

#endif