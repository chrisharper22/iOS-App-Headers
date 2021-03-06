//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface STEUtilCircularBuffer : NSObject
{
    int _bufferSize;
    NSMutableArray *_buffer;
    unsigned long long _bufferHead;
}

- (void).cxx_destruct;
@property int bufferSize; // @synthesize bufferSize=_bufferSize;
@property unsigned long long bufferHead; // @synthesize bufferHead=_bufferHead;
@property(retain) NSMutableArray *buffer; // @synthesize buffer=_buffer;
- (void)resetBuffer;
- (unsigned long long)bufferCount;
- (id)bufferContent;
- (id)getItemAtIndex:(int)arg1;
- (void)insertItem:(id)arg1;
- (id)initWithBufferSize:(int)arg1;

@end

