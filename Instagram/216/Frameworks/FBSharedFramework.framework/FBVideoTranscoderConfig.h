//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class FBAudioConfig, FBSegmentConfig, FBVideoConfig, NSDictionary;

@interface FBVideoTranscoderConfig : NSObject <NSCopying>
{
    NSDictionary *_config;
    FBVideoConfig *_videoConfig;
    FBAudioConfig *_audioConfig;
    FBSegmentConfig *_segmentConfig;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FBSegmentConfig *segmentConfig; // @synthesize segmentConfig=_segmentConfig;
@property(readonly, copy, nonatomic) FBAudioConfig *audioConfig; // @synthesize audioConfig=_audioConfig;
@property(readonly, copy, nonatomic) FBVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
- (id)config;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoConfig:(id)arg1 audioConfig:(id)arg2 segmentConfig:(id)arg3;
- (id)initWithDictionary:(id)arg1;

@end
