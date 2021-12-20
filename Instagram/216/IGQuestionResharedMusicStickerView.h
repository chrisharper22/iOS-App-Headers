//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGOverlayTransformViewType-Protocol.h"
#import "IGSerializable-Protocol.h"
#import "IGStickerBundleContentViewType-Protocol.h"

@class IGAudioMusicTrack, IGBigAlbumArtMusicSticker, IGQuestionAnswerStickerResponder, IGSmallAlbumArtMusicSticker, IGStoryStickerExportModel, NSString, UILabel;
@protocol IGStickerBundleContentViewLoadingDelegate;

@interface IGQuestionResharedMusicStickerView : UIView <IGStickerBundleContentViewType, IGOverlayTransformViewType, IGSerializable>
{
    UIView *_questionContainerView;
    UILabel *_questionLabel;
    UIView *_responseContainerView;
    IGSmallAlbumArtMusicSticker *_smallSticker;
    IGBigAlbumArtMusicSticker *_bigSticker;
    IGAudioMusicTrack *_track;
    NSString *_musicBrowseSessionId;
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    double _playbackTime;
    IGQuestionAnswerStickerResponder *_response;
    long long _style;
    CDStruct_e83c9415 _musicClipTimeRange;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) CDStruct_e83c9415 musicClipTimeRange; // @synthesize musicClipTimeRange=_musicClipTimeRange;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) IGQuestionAnswerStickerResponder *response; // @synthesize response=_response;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (id)outlinePath;
- (id)transformTargetView;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (_Bool)isDraftSupported;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithQuestionStickerResponse:(id)arg1 musicBrowseSessionId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
