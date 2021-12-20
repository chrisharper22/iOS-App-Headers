//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGDynamicSurfaceStickerViewType-Protocol.h>
#import <FBSharedFramework/IGPlaybackTimelineDelegate-Protocol.h>
#import <FBSharedFramework/IGStoryMusicLyricsStickerProtocol-Protocol.h>

@class IGAudioLyricsTrackModel, IGAudioMusicTrack, IGPlaybackTimeline, IGStoryStickerExportModel, NSString, UIColor;
@protocol IGDynamicTextViewProtocol;

@interface IGStoryMusicLyricsSticker : UIView <IGPlaybackTimelineDelegate, IGStoryMusicLyricsStickerProtocol, IGDynamicSurfaceStickerViewType>
{
    IGPlaybackTimeline *_playbackTimeline;
    IGAudioMusicTrack *_musicTrack;
    NSString *_musicBrowseSessionID;
    UIView<IGDynamicTextViewProtocol> *_dynamicTextView;
    long long _style;
    IGAudioLyricsTrackModel *_lyricsSongModel;
    double _duration;
    double _musicClipStartTime;
    UIColor *_color;
    double _currentSongTime;
}

+ (id)newWithMetadata:(id)arg1 resourceDirectory:(id)arg2 userSession:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(nonatomic) double currentSongTime; // @synthesize currentSongTime=_currentSongTime;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double musicClipStartTime; // @synthesize musicClipStartTime=_musicClipStartTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) IGAudioLyricsTrackModel *lyricsSongModel; // @synthesize lyricsSongModel=_lyricsSongModel;
- (id)metadataForResourceDirectory:(id)arg1 userSession:(id)arg2 error:(id *)arg3;
- (unsigned long long)stickerSingleInstanceEnforcementType;
@property(readonly, nonatomic) IGStoryStickerExportModel *exportModel;
- (id)tapModelsForCompositionSize:(struct CGSize)arg1;
- (id)stickerView;
@property(readonly, nonatomic) _Bool isDynamic;
- (id)dynamicOverlayImageProvider;
@property(readonly, nonatomic) long long musicStickerStyle;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(nonatomic) double playbackTime;
- (void)_setupDynamicTextView;
- (void)_preparePhrases;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMusicTrack:(id)arg1 style:(long long)arg2 musicBrowseSessionID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
