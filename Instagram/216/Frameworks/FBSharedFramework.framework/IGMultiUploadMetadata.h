//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>
#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface IGMultiUploadMetadata : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _segmentedVideo;
    NSString *_multiUploadSessionID;
    NSNumber *_sessionIndex;
    NSNumber *_sessionCount;
    NSString *_segmentedVideoGroupID;
    NSNumber *_segmentedVideoIndex;
    NSNumber *_segmentedVideoCount;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *segmentedVideoCount; // @synthesize segmentedVideoCount=_segmentedVideoCount;
@property(readonly, nonatomic) NSNumber *segmentedVideoIndex; // @synthesize segmentedVideoIndex=_segmentedVideoIndex;
@property(readonly, copy, nonatomic) NSString *segmentedVideoGroupID; // @synthesize segmentedVideoGroupID=_segmentedVideoGroupID;
@property(readonly, nonatomic, getter=isSegmentedVideo) _Bool segmentedVideo; // @synthesize segmentedVideo=_segmentedVideo;
@property(readonly, nonatomic) NSNumber *sessionCount; // @synthesize sessionCount=_sessionCount;
@property(readonly, nonatomic) NSNumber *sessionIndex; // @synthesize sessionIndex=_sessionIndex;
@property(readonly, copy, nonatomic) NSString *multiUploadSessionID; // @synthesize multiUploadSessionID=_multiUploadSessionID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sharingInfo;
- (id)initWithMultiUploadSessionID:(id)arg1 sessionIndex:(id)arg2 sessionCount:(id)arg3 isSegmentedVideo:(_Bool)arg4 segmentedVideoGroupID:(id)arg5 segmentedVideoIndex:(id)arg6 segmentedVideoCount:(id)arg7;

@end
