//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@protocol FBARAudioServiceConfigurationChangeListener <NSObject>
- (void)audioServiceConfigurationResumeTrack;
- (void)audioServiceConfigurationPauseTrack;
- (void)audioServiceConfigurationDidChangeWithSongInfo:(CDStruct_cebda64c)arg1 clipInfo:(CDStruct_3c272d1d)arg2;
@end
