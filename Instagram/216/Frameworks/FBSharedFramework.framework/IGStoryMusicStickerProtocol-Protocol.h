//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGAnimatedStickerViewType-Protocol.h>
#import <FBSharedFramework/IGSingleStickerInstanceEnforcedViewType-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class UIColor;

@protocol IGStoryMusicStickerProtocol <IGAnimatedStickerViewType, IGSingleStickerInstanceEnforcedViewType, NSCopying>
@property(readonly, nonatomic) long long musicStickerStyle;
@property(nonatomic) double musicClipStartTime;
@property(nonatomic) double duration;
@property(retain, nonatomic) UIColor *color;
@end
