//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class FBMediaSegmentStreamConfig, NSArray, NSSet, NSString;

@interface FBMediaSegmentStreamDetail : NSObject <NSCopying, NSCoding>
{
    FBMediaSegmentStreamConfig *_config;
    NSString *_streamId;
    NSString *_token;
    NSSet *_completedSegments;
    NSArray *_incompleteSegments;
    unsigned long long _totalLength;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(readonly, copy, nonatomic) NSArray *incompleteSegments; // @synthesize incompleteSegments=_incompleteSegments;
@property(readonly, copy, nonatomic) NSSet *completedSegments; // @synthesize completedSegments=_completedSegments;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(readonly, copy, nonatomic) FBMediaSegmentStreamConfig *config; // @synthesize config=_config;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithConfig:(id)arg1 streamId:(id)arg2 token:(id)arg3 completedSegments:(id)arg4 incompleteSegments:(id)arg5 totalLength:(unsigned long long)arg6;
- (id)initWithCoder:(id)arg1;

@end

