//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol FBCCAudioPipelineProviding;

@protocol IGAudioCapturing <NSObject>
@property(retain, nonatomic) id <FBCCAudioPipelineProviding> audioPipelineProvider;
- (_Bool)isSpeakerMuted;
- (void)setSpeakerDefaultMuted:(_Bool)arg1;
- (void)setSpeakerMuted:(_Bool)arg1;
@end

