//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class SNAdMetadata, SNPerformanceMetadata, SNPlaybackMetadata, SNPlaybackStateMetadata;

@interface SNDebugMetadata : FBValueObject <NSCopying, NSCoding>
{
    SNPerformanceMetadata *_performanceMetadata;
    SNAdMetadata *_adMetadata;
    SNPlaybackMetadata *_playbackMetadata;
    SNPlaybackStateMetadata *_playbackStateMetadata;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SNPlaybackStateMetadata *playbackStateMetadata; // @synthesize playbackStateMetadata=_playbackStateMetadata;
@property(readonly, copy, nonatomic) SNPlaybackMetadata *playbackMetadata; // @synthesize playbackMetadata=_playbackMetadata;
@property(readonly, copy, nonatomic) SNAdMetadata *adMetadata; // @synthesize adMetadata=_adMetadata;
@property(readonly, copy, nonatomic) SNPerformanceMetadata *performanceMetadata; // @synthesize performanceMetadata=_performanceMetadata;
- (id)initWithPerformanceMetadata:(id)arg1 adMetadata:(id)arg2 playbackMetadata:(id)arg3 playbackStateMetadata:(id)arg4;

@end

