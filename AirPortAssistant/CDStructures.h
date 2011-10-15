/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct AssistantCallbackContext {
    struct AssistantContext *_field1;
    int _field2;
    struct __CFDictionary *_field3;
    int _field4;
    struct dispatch_semaphore_s *_field5;
    struct dispatch_source_s *_field6;
    void *_field7;
};

struct AssistantContext;

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct dispatch_semaphore_s;

struct dispatch_source_s;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int ethernetPortCount;
    unsigned int productID;
    unsigned int productFamily;
} CDStruct_a9370ada;

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGPoint _field4;
} CDStruct_95077174;
