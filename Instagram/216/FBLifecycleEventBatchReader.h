//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBLifecycleEventBatchReader : NSObject
{
    NSString *_assumedlifecycleSessionID;
    struct __sFILE *_file;
    unsigned int _offset;
}

- (void).cxx_destruct;
- (_Bool)readEventsInto:(void *)arg1;
- (_Bool)_readNextEvent:(void *)arg1;
- (_Bool)_readAndValidateHeader;
- (id)_readString;
- (id)_readData;
- (_Bool)_readUInt32:(unsigned int *)arg1;
- (_Bool)_readDouble:(double *)arg1;
- (_Bool)_readBytes:(void *)arg1 length:(unsigned int)arg2;
- (id)initWithlifecycleSessionID:(id)arg1;

@end
