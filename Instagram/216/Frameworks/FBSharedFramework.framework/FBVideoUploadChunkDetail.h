//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface FBVideoUploadChunkDetail : NSObject <NSCopying, NSCoding>
{
    NSMutableDictionary *_internalStore;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSegmentType:(unsigned long long)arg1 chunkStartOffset:(unsigned long long)arg2 chunkEndOffset:(unsigned long long)arg3 segmentStartOffset:(unsigned long long)arg4 segmentEndOffset:(unsigned long long)arg5 segmentEndTime:(CDStruct_1b6d18a9)arg6;

@end

