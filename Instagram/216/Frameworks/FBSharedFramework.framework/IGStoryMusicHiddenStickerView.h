//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStoryMusicStickerProtocol-Protocol.h>

@class IGStoryMusicSimpleSticker, IGStoryStickerExportModel, NSString, UIColor;

@interface IGStoryMusicHiddenStickerView : UIView <IGStickerViewType, IGStoryMusicStickerProtocol>
{
    IGStoryMusicSimpleSticker *_coreStickerView;
    UIColor *_color;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)stickerSingleInstanceEnforcementType;
@property(readonly, nonatomic) long long musicStickerStyle;
@property(nonatomic) double musicClipStartTime;
@property(nonatomic) double duration;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackTime;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoreStickerView:(id)arg1;
- (id)initWithMusicTrack:(id)arg1 musicBrowseSessionID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
