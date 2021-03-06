//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBLifecycleEventBatchWriter : NSObject
{
    struct unique_ptr<reliability::MmappedFile, std::default_delete<reliability::MmappedFile>> _file;
    unsigned int _offset;
    unsigned int _maxPageSize;
    unsigned long long _batchSize;
    unsigned long long _expectedBytesPerBatch;
    NSString *_lifecycleSessionID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)writeEvent:(const void *)arg1;
- (void)reset;
- (void)_writeString:(id)arg1;
- (void)_writeDouble:(double)arg1;
- (void)_writeUInt32:(unsigned int)arg1;
- (void)_writeBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)_clear;
- (_Bool)_resizeIfNeededToAccomodateDataSize:(unsigned int)arg1;
- (id)initWithBatchSize:(unsigned long long)arg1 expectedBatchBytes:(unsigned long long)arg2 lifecycleSessionID:(id)arg3;

@end

