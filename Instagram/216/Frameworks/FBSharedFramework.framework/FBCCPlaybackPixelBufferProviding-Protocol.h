//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBCCPlaybackControlling-Protocol.h>

@protocol FBCCPlaybackPixelBufferProviding <FBCCPlaybackControlling>
@property(readonly, nonatomic) _Bool isStatic;
@property(readonly, nonatomic) struct OpaqueCMTimebase *timebase;
- (struct __CVBuffer *)copyPixelBufferForTime:(CDStruct_1b6d18a9)arg1 timeForDisplay:(CDStruct_183601bc *)arg2;
- (_Bool)hasNewPixelBufferForTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)providerTimeForHostTime:(double)arg1;
@end

