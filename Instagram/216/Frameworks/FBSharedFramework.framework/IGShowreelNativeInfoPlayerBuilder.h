//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGShowreelNativePlayerControllerProvider-Protocol.h>

@class IGShowreelNativeInfo, IGUserSession, NSDictionary, NSString, SNPlaybackOptions;

@interface IGShowreelNativeInfoPlayerBuilder : NSObject <IGShowreelNativePlayerControllerProvider>
{
    IGUserSession *_userSession;
    unsigned long long _placement;
    NSString *_module;
    NSDictionary *_adsLoggingInfo;
    NSDictionary *_extraCustomLoggingInfo;
    IGShowreelNativeInfo *_showreelNativeInfo;
    SNPlaybackOptions *_options;
    NSString *_uniqueIdentifier;
}

- (void).cxx_destruct;
- (id)showreelNativeInfo;
- (id)customLoggingInfoForRendering;
- (id)adsLoggingInfo;
- (id)playbackOptions;
- (id)module;
- (id)uniqueIdentifier;
- (id)buildPrewarmingPlayerController;
- (id)buildPlayerController;
- (id)initWithShowreelNativeInfo:(id)arg1 placement:(unsigned long long)arg2 userSession:(id)arg3 module:(id)arg4 adsLoggingInfo:(id)arg5 extraCustomLoggingInfo:(id)arg6 options:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
